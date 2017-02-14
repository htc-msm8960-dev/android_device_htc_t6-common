package com.validity.fingerprint;

import android.content.Context;
import android.util.Log;

public class FingerprintCore
  extends VcsEvents
{
  public static interface EventListener
  {
    public abstract void onEvent(FingerprintEvent fingerprintevent);
  }	
  public static final String API_VERSION = "0.7";
  protected static final boolean DBG = false;
  protected static final int ENROLL = 151;
  protected static final int GETDATAFROMUSER = 154;
  protected static final int GETPRINT = 156;
  protected static final int IDENTIFY = 152;
  protected static final int IDLE = 150;
  protected static final int REMOVEDATAFROMUSER = 155;
  protected static final int STOREDATATOUSER = 153;
  protected static final String TAG = "Fingerprint";
  protected static final String USER_ID = "android";
  public static final String VCS_POLICY_VERSION = "0.1";
  private String mAppId = "";
  private String mAppKey = "";
  private EventListener mEventListener;
  private String mKeyData = "";
  protected int mOperation = 150;
  private String mUserId = "";
  
  private native int jniCancelOp();
  
  private native int jniCleanupVcs();
  
  private native int jniGetEnrolledFingerList(String paramString, VcsInt paramVcsInt);
  
  private native int jniGetFingerprintImage();
  
  private native String[] jniGetUserList(VcsInt paramVcsInt);
  
  private native String jniGetVersion();
  
  private native int jniIdentify(String paramString);
  
  private native int jniIdentifyEx(String paramString, int paramInt);
  
  private native int jniInitVcs();
  
  private native int jniInitVcs(FingerprintCore fingerprintcore);
  
  private native int jniRegisterEventsCB(FingerprintCore fingerprintcore);
  
  private native int jniSetSecurityLevel(int paramInt);
  
  static
  {
    try
    {
      System.loadLibrary("vcsfp");
    }
    catch (Throwable localThrowable)
    {
      Log.e("Fingerprint", "Error loading library libvcsfp: " + localThrowable);
    }
  }
  
  public FingerprintCore(Context paramContext)
  {
    int i = jniInitVcs(this);
    if (i != 0) {
      Log.e("Fingerprint", "Initialization failed, result:" + i);
    }
  }
  
  public FingerprintCore(Context ctx, EventListener listener) {
        mOperation = IDLE;
        mEventListener = null;
        mAppId = "";
        mUserId = "";
        mAppKey = "";
        mKeyData = "";
		VLog.i("init ret="+jniInitVcs(this));
        mEventListener = listener;
    }
  
  private boolean isOperationComplete(int paramInt)
  {
    if((paramInt == 421) || (paramInt == 423) || (paramInt == 422) || (paramInt == 424) || (paramInt == 426) || (paramInt == 425) || (paramInt == 427)){
       return true;
    }else{
       return false;
    }
    

  }
  
  
  public synchronized void FingerprintEventCallback(FingerprintEvent paramFingerprintEvent)
  {
    
        if (paramFingerprintEvent == null) {
            Log.e("Fingerprint", "FP - EventsCB()::Invalid event data!");
            return;
        }
        if (isOperationComplete(paramFingerprintEvent.eventId)) {
            Log.i("Fingerprint", "Operation complete, setting to IDLE");
            this.mOperation = IDLE;
        }
        if ((this.mOperation == GETPRINT) && ((paramFingerprintEvent.eventId == VCS_EVT_EIV_FINGERPRINT_CAPTURED) ||
            (paramFingerprintEvent.eventId == VCS_EVT_SENSOR_FINGERPRINT_CAPTURE_FAILED))) {
            this.mOperation = IDLE;
        }
        if (this.mEventListener != null) {
            this.mEventListener.onEvent(paramFingerprintEvent);
        }
}
  
  public int cancel()
  {
    if (this.mOperation == 150) {
      return -1;
    }
    int i = jniCancelOp();
    this.mOperation = 150;
    return i;
  }
  
  public int cleanUp()
  {
    this.mEventListener = null;
    return jniCleanupVcs();
  }
  
  public int getEnrolledFingerList(String paramString, VcsInt paramVcsInt)
  {
    if (paramString == null) {
      paramString = "";
    }
    return jniGetEnrolledFingerList(paramString, paramVcsInt);
  }
  
  public int getFingerprintImage()
  {
    if (this.mOperation != 150) {
      return -1;
    }
    int i = jniGetFingerprintImage();
    if (i == 0) {
      this.mOperation = 156;
    }
    return i;
  }
  
  public int getUserList(VcsStringArray paramVcsStringArray)
  {
    VcsInt localVcsInt = new VcsInt();
    paramVcsStringArray.strlist = jniGetUserList(localVcsInt);
    if (paramVcsStringArray.strlist == null) {
      return localVcsInt.num;
    }
    return 0;
  }
  
  public String getVersion()
  {
    if (this.mOperation != 150)
    {
      Log.e("Fingerprint", "Other operation is in progress, cancelling request");
      return null;
    }
    return jniGetVersion();
  }
  
  public int identify(String paramString)
  {
    if (this.mOperation == 152) {
      return 1004;
    }
    if (this.mOperation != 150) {
      return -1;
    }
    if (paramString == null) {
      paramString = "";
    }
    int i = jniIdentify(paramString);
    if (i == 0) {
      this.mOperation = 152;
    }
    return i;
  }
  
  public int identify(String paramString, int paramInt)
  {
    if ((paramInt != 2) && (paramInt != 1)) {
      return 1006;
    }
    if (this.mOperation == 152) {
      return 1004;
    }
    if (this.mOperation != 150) {
      return -1;
    }
    if (paramString == null) {
      paramString = "";
    }
    int i = jniIdentifyEx(paramString, paramInt);
    if (i == 0) {
      this.mOperation = 152;
    }
    return i;
  }
  
  public int protect(byte[] paramArrayOfByte, VcsByteArray paramVcsByteArray)
  {
    return 1005;
  }
  
  public int registerListener(EventListener paramEventListener)
  {
    if (this.mOperation != 150) {
      return -1;
    }
    this.mEventListener = paramEventListener;
    return 0;
  }
  
  public int setSecurityLevel(int paramInt)
  {
    if (this.mOperation != 150) {
      return -1;
    }
    if ((paramInt == 1000) || (paramInt == 5000) || (paramInt == 10000) || (paramInt == 100000) || (paramInt == 1000000)) {
      return jniSetSecurityLevel(paramInt);
    }
    return 1006;
  }
  
  public int unProtect(byte[] paramArrayOfByte, VcsByteArray paramVcsByteArray)
  {
    return 1005;
  }
}


/* Location:           C:\Users\Tarkzim\Desktop\t6_fingerprint\htc kernel source\classes-dex2jar.jar
 * Qualified Name:     com.validity.fingerprint.FingerprintCore
 * JD-Core Version:    0.7.0.1
 */
