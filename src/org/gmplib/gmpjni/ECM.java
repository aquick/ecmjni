package org.gmplib.gmpjni;

import org.gmplib.gmpjni.GMP;
import org.gmplib.gmpjni.GMP.mpz_t;
import android.util.Log;

/**
 * Java interface to ECM library.  @see ecm.gforge.inria.fr/
 */
public class ECM
{

    /**
     * Represents exceptions thrown by ECM library.
     */
    public static class ECMException extends Exception
    {
	private int code;

	public static final int INVALID_HANDLE = 1;
	public static final int PARAMETER_OUT_OF_RANGE = 2;
	public static final int OUT_OF_MEMORY = 3;
	public static final int BAD_FORMAT = 4;
	public static final int IO_ERROR = 5;
	public static final int OPERATION_NOT_SUPPORTED = 6;
	public static final int INTERNAL_ERROR = 7;

	public ECMException(int code, String msg)
	{
	    super(msg);
	    this.code = code;
	}

	public int getCode()
	{
	    return this.code;
	}
    }

    /**
     * Inteface for callback function that ECM library calls to determine if it
     * should stop a long-running computation.
     */
    public interface ecm_stop_callback
    {
	boolean stop();
    }

    /**
     * Represents paramaters of the factor method of the ECM library.
     * @see ECM.factor
     */
    public static class ecm_params
    {
        /** representation for modular arithmetic */
        public static final int MOD_NOBASE2 = -1;
        public static final int MOD_DEFAULT = 0;
        public static final int MOD_MPZ = 1;
        public static final int MOD_BASE2 = 2;
        public static final int MOD_MODMULN = 3;
        public static final int MOD_REDC = 4;

        /** different methods implemented */
        public static final int ECM = 0;
        public static final int PM1 = 1;
        public static final int PP1 = 2;

        /** Different parametrizations used in stage 1 of ECM */
        public static final int PARAM_DEFAULT = -1;
        public static final int PARAM_SUYAMA = 0;
        public static final int PARAM_BATCH_SQUARE = 1;
        public static final int PARAM_BATCH_2 = 2;
        public static final int PARAM_BATCH_32BITS_D = 3;
        public static final int PARAM_WEIERSTRASS = 5;
        public static final int PARAM_HESSIAN = 6;
        public static final int PARAM_TORSION = 7;

        /* More ec forms */
        public static final int EC_TYPE_MONTGOMERY           = 1;
        public static final int EC_TYPE_WEIERSTRASS          = 2;
        public static final int EC_TYPE_HESSIAN              = 3;
        public static final int EC_TYPE_WEIERSTRASS_COMPLETE = 4;

        /* which type of law used */
        public static final int LAW_AFFINE = 1;
        public static final int LAW_HOMOGENEOUS = 2;

	public ecm_params() throws ECMException
	{
	    handle = init();
	    if (handle == 0) {
		throw new ECMException(ECMException.INVALID_HANDLE, "Invalid handle");
	    }
	    outstreamh = 0;
	    errstreamh = 0;
	    stop_callback = null;
	}

	public void clear()
	{
	    if (outstreamh != 0) {
		closeStream(outstreamh);
		outstreamh = 0;
	    }
	    if (errstreamh != 0) {
		closeStream(errstreamh);
		errstreamh = 0;
	    }
	    if (chkfilename != null) {
		release(chkfilename, chkfilenameh);
		chkfilename = null;
	    }
	    if (treefilename != null) {
		release(treefilename, treefilenameh);
		treefilename = null;
	    }
	    fini();
	}

	private native void native_set_method(int method);
	public void set_method(int method)
	{
	    native_set_method(method);
	}

	private native void native_set_x(long x);
	public void set_x(mpz_t x)
	{
	    native_set_x(x.handle);
	}

	private native void native_set_y(long y);
	public void set_y(mpz_t y)
	{
	    native_set_y(y.handle);
	}

	private native void native_set_rng_seed(long seed);
	public void set_rng_seed(long seed)
	    throws ECMException
	{
	    checkUnsignedIntRange(seed);
	    native_set_rng_seed(seed);
	}

	private native void native_set_param(int param);
	public void set_param(int param)
	{
	    native_set_param(param);
	}

	private native void native_set_sigma(long sigma);
	public void set_sigma(mpz_t sigma)
	{
	    native_set_sigma(sigma.handle);
	}

	private native void native_set_sigma_is_A(int sigma_is_A);
	public void set_sigma_is_A(int sigma_is_A)
	{
	    native_set_sigma_is_A(sigma_is_A);
	}

	private native void native_set_go(long go);
	public void set_go(mpz_t go)
	{
	    native_set_go(go.handle);
	}

	private native void native_set_B1done(double B1done);
	public void set_B1done(double B1done)
	{
	    native_set_B1done(B1done);
	}

	private native void native_set_B2min(long B2min);
	public void set_B2min(mpz_t B2min)
	{
	    native_set_B2min(B2min.handle);
	}

	private native void native_set_B2(long B2);
	public void set_B2(mpz_t B2)
	{
	    native_set_B2(B2.handle);
	}

	private native void native_set_k(long k);
	public void set_k(long k)
	    throws ECMException
	{
	    checkUnsignedIntRange(k);
	    native_set_k(k);
	}

	private native void native_set_S(int S);
	public void set_S(int S)
	{
	    native_set_S(S);
	}

	private native void native_set_repr(int repr);
	public void set_repr(int repr)
	{
	    native_set_repr(repr);
	}

	private native void native_set_nobase2step2(int nobase2step2);
	public void set_nobase2step2(int nobase2step2)
	{
	    native_set_nobase2step2(nobase2step2);
	}

	private native void native_set_verbose(int verbose);
	public void set_verbose(int verbose)
	{
	    native_set_verbose(verbose);
	}

	public void set_err_filename(String fname)
	    throws ECMException
	{
	    if (errstreamh != 0) {
		closeStream(errstreamh);
	    }
	    errstreamh = openStream(fname);
	    if (errstreamh != 0) {
		set_errstreamh(errstreamh);
	    } else {
		throw new ECMException(ECMException.IO_ERROR, "failed to open err stream");
	    }
	}

	public void set_out_filename(String fname)
	    throws ECMException
	{
	    if (outstreamh != 0) {
		closeStream(outstreamh);
	    }
	    outstreamh = openStream(fname);
	    if (outstreamh != 0) {
		set_outstreamh(outstreamh);
	    } else {
		throw new ECMException(ECMException.IO_ERROR, "failed to open out stream");
	    }
	}

	private native long native_set_chkfilename(String fname);
	public void set_chkfilename(String fname)
	{
	    chkfilename = fname;
	    chkfilenameh = native_set_chkfilename(fname);
	}

	private native long native_set_treefilename(String fname);
	public void set_treefilename(String fname)
	{
	    treefilename = fname;
	    treefilenameh = native_set_treefilename(fname);
	}

	private native void native_set_maxmem(double maxmem);
	public void set_maxmem(double maxmem)
	{
	    native_set_maxmem(maxmem);
	}

	private native void native_set_stage1time(double stage1time);
	public void set_stage1time(double stage1time)
	{
	    native_set_stage1time(stage1time);
	}

	private native void native_set_use_ntt(int use_ntt);
	public void set_use_ntt(int use_ntt)
	{
	    native_set_use_ntt(use_ntt);
	}

	private native void native_set_stop_callback(boolean is_null);
	public void set_stop_callback(ecm_stop_callback stop_callback)
	    throws ECMException
	{
	    this.stop_callback = stop_callback;
	    native_set_stop_callback(stop_callback == null);
	}

	private native void native_set_batch_s(long batch_s);
	public void set_batch_s(mpz_t batch_s)
	{
	    native_set_batch_s(batch_s.handle);
	}

	private native void native_set_batch_last_B1_used(double batch_last_B1_used);
	public void set_batch_last_B1_used(double batch_last_B1_used)
	{
	    native_set_batch_last_B1_used(batch_last_B1_used);
	}

	private native void native_set_gpu(int gpu);
	public void set_gpu(int gpu)
	{
	    native_set_gpu(gpu);
	}

	private native void native_set_gpu_device(int gpu_device);
	public void set_gpu_device(int gpu_device)
	{
	    native_set_gpu_device(gpu_device);
	}

	private native void native_set_gpu_device_init(int gpu_device_init);
	public void set_gpu_device_init(int gpu_device_init)
	{
	    native_set_gpu_device_init(gpu_device_init);
	}

	private native void native_set_gpu_number_of_curves(long gpu_number_of_curves);
	public void set_gpu_number_of_curves(long gpu_number_of_curves)
	    throws ECMException
	{
	    checkUnsignedIntRange(gpu_number_of_curves);
	    native_set_gpu_number_of_curves(gpu_number_of_curves);
	}

	private native void native_set_gw_k(double gw_k);
	public void set_gw_k(double gw_k)
	{
	    native_set_gw_k(gw_k);
	}

	private native void native_set_gw_b(long gw_b);
	public void set_gw_b(long gw_b)
	    throws ECMException
	{
	    checkUnsignedIntRange(gw_b);
	    native_set_gw_b(gw_b);
	}

	private native void native_set_gw_n(long gw_n);
	public void set_gw_n(long gw_n)
	    throws ECMException
	{
	    checkUnsignedIntRange(gw_n);
	    native_set_gw_n(gw_n);
	}

	private native void native_set_gw_c(long gw_c);
	public void set_gw_c(long gw_c)
	    throws ECMException
	{
	    native_set_gw_c(gw_c);
	}

	private native void native_set_E_type(int type);
	public void set_E_type(int type)
	{
	    native_set_E_type(type);
	}

	private native void native_set_E_law(int law);
	public void set_E_law(int law)
	{
	    native_set_E_law(law);
	}

	private native void native_set_E_disc(int disc);
	public void set_E_disc(int disc)
	{
	    native_set_E_disc(disc);
	}

	private native void native_set_E_a1(long a1);
	public void set_E_a1(mpz_t a1)
	{
	    native_set_E_a1(a1.handle);
	}

	private native void native_set_E_a2(long a2);
	public void set_E_a2(mpz_t a2)
	{
	    native_set_E_a2(a2.handle);
	}

	private native void native_set_E_a3(long a3);
	public void set_E_a3(mpz_t a3)
	{
	    native_set_E_a3(a3.handle);
	}

	private native void native_set_E_a4(long a4);
	public void set_E_a4(mpz_t a4)
	{
	    native_set_E_a4(a4.handle);
	}

	private native void native_set_E_a6(long a6);
	public void set_E_a6(mpz_t a6)
	{
	    native_set_E_a6(a6.handle);
	}

	private native void native_set_E_buf(int index, long val);
	public void set_E_buf(int index, mpz_t val)
	    throws ECMException
	{
	    native_set_E_buf(index, val.handle);
	}

	private native void native_set_E_sq(int index, long val);
	public void set_E_sq(int index, mpz_t val)
	    throws ECMException
	{
	    native_set_E_sq(index, val.handle);
	}

	protected long handle;
	protected long outstreamh;
	protected long errstreamh;
	protected String chkfilename;
	protected long chkfilenameh;
	protected String treefilename;
	protected long treefilenameh;
	protected ecm_stop_callback stop_callback;

	private native long init();

	private native void fini();

	private native long openStream(String fname);
	private native void closeStream(long handle);
	private native void set_errstreamh(long handle);
	private native void set_outstreamh(long handle);

	private native void release(String str, long handle);
    }

    /**
     * Load native libraries.
     */
    public static void init()
    {
	Log.d( "ecmjni", "loading native libs" );
	System.loadLibrary("c++_shared");
	System.loadLibrary("gmp");
	System.loadLibrary("ecm");
	System.loadLibrary("ecmjni");
    }

    private static void checkUnsignedIntRange(long y)
	throws ECMException
    {
	if (y < 0 || y > GMP.MAX_UINT) {
	    throw new ECMException(ECMException.PARAMETER_OUT_OF_RANGE, "Parameter out of range");
	}
    }

    private static native String native_ecm_version();
    /**
     * Return a string representation of the native ECM library version.
     */
    public static String getVersion()
    {
	return native_ecm_version();
    }

    private static native int native_factor(long f, long n, double B1, long p);
    /**
     * Factor a number using Elliptic Curve Method.
     * @param n the number to factor
     * @param f the factor found (if any)
     * @param B1 the stage 1 bound
     * @param p auxiliary parameters (see ecm_params), use defaults if null
     * @return 1 if a factor was found in stage 1,
     *         2 if a factor was found in stage 2,
     *         0 if a factor was not found,
     *         -1 if an error occurred.
     */
    public static int factor(mpz_t f, mpz_t n, double B1, ecm_params p)
	throws ECMException
    {
	return native_factor(f.handle, n.handle, B1, p.handle);
    }
}
