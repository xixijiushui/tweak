//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface YTWirelessOrangeManager : NSObject
{
    _Bool _mShowNowbar;
    _Bool _mNowbarDisableAdv;
    _Bool _mMetaDataHasURL;
    _Bool _mPlayByVid;
    _Bool _mEnableDevAliveDetect;
    _Bool _mAddURLTag;
    _Bool _mEnableHistoryDev;
    _Bool _mEnableUpnpUnblockConnect;
    _Bool _mEnableGetMtopDevice;
    _Bool _mEnableGetHistoryDevice;
    _Bool _mContinueProjDisableAdv;
    _Bool _mFilterMtopDeviceByGateway;
    _Bool _mProcessMiniServerError;
    _Bool _mDisplayHistoryDevice;
    _Bool _mAutoDetectWifi;
    _Bool _mGetPlayStateInstantly;
    _Bool _mGetTVPlayUri;
    _Bool _mCheckStateBeforeProj;
    _Bool _mNeedRetryProjAfterError;
    _Bool _mNeedCheckDrm;
    _Bool _mEverGetOrangeConfig;
    _Bool _mNeedNotifyUpnpError;
    _Bool _mEnableStateSeek;
    _Bool _mEnableBarrage;
    _Bool _mEnableCompressStream;
    _Bool _mEnableRInstallApp;
    unsigned long long _mProjRetryCount;
    unsigned long long _mProjTimeout;
    unsigned long long _mProjReqSuccTimeout;
    unsigned long long _mProjAliveTimeout;
    unsigned long long _mUpnpConnectTimeout;
    NSArray *_mDlnaOptManufactureArr;
    NSString *_mUpnpOrangeData;
    NSDictionary *_mOneSegCfgsDic;
    NSDictionary *_mDlnaOptTwoDic;
    NSDictionary *_mPreBizStopCfgs;
    NSDictionary *_mUseMP4FormatCfgs;
    NSDictionary *_mUseEmptyVideoOpCfgs;
    NSDictionary *_mProjCustomAdCfgs;
    NSDictionary *_mCustomAdInfo;
    unsigned long long _mProjAdAtNumber;
    unsigned long long _mProjCountNumber;
    NSDictionary *_mKMInstallItems;
    NSMutableDictionary *_mBrandingProps;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mBrandingProps; // @synthesize mBrandingProps=_mBrandingProps;
@property(retain, nonatomic) NSDictionary *mKMInstallItems; // @synthesize mKMInstallItems=_mKMInstallItems;
@property(nonatomic) unsigned long long mProjCountNumber; // @synthesize mProjCountNumber=_mProjCountNumber;
@property(nonatomic) unsigned long long mProjAdAtNumber; // @synthesize mProjAdAtNumber=_mProjAdAtNumber;
@property(retain, nonatomic) NSDictionary *mCustomAdInfo; // @synthesize mCustomAdInfo=_mCustomAdInfo;
@property(retain, nonatomic) NSDictionary *mProjCustomAdCfgs; // @synthesize mProjCustomAdCfgs=_mProjCustomAdCfgs;
@property(retain, nonatomic) NSDictionary *mUseEmptyVideoOpCfgs; // @synthesize mUseEmptyVideoOpCfgs=_mUseEmptyVideoOpCfgs;
@property(retain, nonatomic) NSDictionary *mUseMP4FormatCfgs; // @synthesize mUseMP4FormatCfgs=_mUseMP4FormatCfgs;
@property(retain, nonatomic) NSDictionary *mPreBizStopCfgs; // @synthesize mPreBizStopCfgs=_mPreBizStopCfgs;
@property(retain, nonatomic) NSDictionary *mDlnaOptTwoDic; // @synthesize mDlnaOptTwoDic=_mDlnaOptTwoDic;
@property(retain, nonatomic) NSDictionary *mOneSegCfgsDic; // @synthesize mOneSegCfgsDic=_mOneSegCfgsDic;
@property(retain, nonatomic) NSString *mUpnpOrangeData; // @synthesize mUpnpOrangeData=_mUpnpOrangeData;
@property(retain, nonatomic) NSArray *mDlnaOptManufactureArr; // @synthesize mDlnaOptManufactureArr=_mDlnaOptManufactureArr;
@property(nonatomic) _Bool mEnableRInstallApp; // @synthesize mEnableRInstallApp=_mEnableRInstallApp;
@property(nonatomic) _Bool mEnableCompressStream; // @synthesize mEnableCompressStream=_mEnableCompressStream;
@property(nonatomic) _Bool mEnableBarrage; // @synthesize mEnableBarrage=_mEnableBarrage;
@property(nonatomic) _Bool mEnableStateSeek; // @synthesize mEnableStateSeek=_mEnableStateSeek;
@property(nonatomic) _Bool mNeedNotifyUpnpError; // @synthesize mNeedNotifyUpnpError=_mNeedNotifyUpnpError;
@property(nonatomic) _Bool mEverGetOrangeConfig; // @synthesize mEverGetOrangeConfig=_mEverGetOrangeConfig;
@property(nonatomic) _Bool mNeedCheckDrm; // @synthesize mNeedCheckDrm=_mNeedCheckDrm;
@property(nonatomic) _Bool mNeedRetryProjAfterError; // @synthesize mNeedRetryProjAfterError=_mNeedRetryProjAfterError;
@property(nonatomic) _Bool mCheckStateBeforeProj; // @synthesize mCheckStateBeforeProj=_mCheckStateBeforeProj;
@property(nonatomic) _Bool mGetTVPlayUri; // @synthesize mGetTVPlayUri=_mGetTVPlayUri;
@property(nonatomic) _Bool mGetPlayStateInstantly; // @synthesize mGetPlayStateInstantly=_mGetPlayStateInstantly;
@property(nonatomic) _Bool mAutoDetectWifi; // @synthesize mAutoDetectWifi=_mAutoDetectWifi;
@property(nonatomic) _Bool mDisplayHistoryDevice; // @synthesize mDisplayHistoryDevice=_mDisplayHistoryDevice;
@property(nonatomic) _Bool mProcessMiniServerError; // @synthesize mProcessMiniServerError=_mProcessMiniServerError;
@property(nonatomic) _Bool mFilterMtopDeviceByGateway; // @synthesize mFilterMtopDeviceByGateway=_mFilterMtopDeviceByGateway;
@property(nonatomic) _Bool mContinueProjDisableAdv; // @synthesize mContinueProjDisableAdv=_mContinueProjDisableAdv;
@property(nonatomic) _Bool mEnableGetHistoryDevice; // @synthesize mEnableGetHistoryDevice=_mEnableGetHistoryDevice;
@property(nonatomic) _Bool mEnableGetMtopDevice; // @synthesize mEnableGetMtopDevice=_mEnableGetMtopDevice;
@property(nonatomic) _Bool mEnableUpnpUnblockConnect; // @synthesize mEnableUpnpUnblockConnect=_mEnableUpnpUnblockConnect;
@property(nonatomic) _Bool mEnableHistoryDev; // @synthesize mEnableHistoryDev=_mEnableHistoryDev;
@property(nonatomic) _Bool mAddURLTag; // @synthesize mAddURLTag=_mAddURLTag;
@property(nonatomic) _Bool mEnableDevAliveDetect; // @synthesize mEnableDevAliveDetect=_mEnableDevAliveDetect;
@property(nonatomic) _Bool mPlayByVid; // @synthesize mPlayByVid=_mPlayByVid;
@property(nonatomic) _Bool mMetaDataHasURL; // @synthesize mMetaDataHasURL=_mMetaDataHasURL;
@property(nonatomic) _Bool mNowbarDisableAdv; // @synthesize mNowbarDisableAdv=_mNowbarDisableAdv;
@property(nonatomic) _Bool mShowNowbar; // @synthesize mShowNowbar=_mShowNowbar;
@property(nonatomic) unsigned long long mUpnpConnectTimeout; // @synthesize mUpnpConnectTimeout=_mUpnpConnectTimeout;
@property(nonatomic) unsigned long long mProjAliveTimeout; // @synthesize mProjAliveTimeout=_mProjAliveTimeout;
@property(nonatomic) unsigned long long mProjReqSuccTimeout; // @synthesize mProjReqSuccTimeout=_mProjReqSuccTimeout;
@property(nonatomic) unsigned long long mProjTimeout; // @synthesize mProjTimeout=_mProjTimeout;
@property(nonatomic) unsigned long long mProjRetryCount; // @synthesize mProjRetryCount=_mProjRetryCount;
- (void).cxx_destruct;
- (void)updateConfigOrangeValue;
- (void)initNewConfigOrange;
- (id)getOrangeConfig:(id)arg1 devManufacturer:(id)arg2 devModel:(id)arg3 devName:(id)arg4 devUUID:(id)arg5;
- (_Bool)isUseOrangeConfig:(id)arg1 devManufacturer:(id)arg2 devModel:(id)arg3 devName:(id)arg4 devUUID:(id)arg5;
- (void)initOrangeDataObj:(id)arg1;
- (void)onHandleMultiscreenConfigUpdate:(id)arg1;
- (id)checkStrValue:(id)arg1 defaultValue:(id)arg2;
- (_Bool)checkBoolValue:(id)arg1 defaultValue:(_Bool)arg2;
- (unsigned long long)checkIntegerValue:(id)arg1 defaultValue:(unsigned long long)arg2 maxValue:(unsigned long long)arg3;
- (id)fetchManufactureListByName:(id)arg1;
- (id)fetchJsonDicByName:(id)arg1;
- (_Bool)checkManufacture:(id)arg1 fromManufactureList:(id)arg2;
- (id)nowbarPos;
- (_Bool)isUseCompressStream;
- (_Bool)isEnableBarrage;
- (_Bool)isEnableStateSeek;
- (_Bool)isNeedNotifyUpnpError;
- (_Bool)isEverGetOrangeConfig;
- (id)upnpOrangeData;
- (_Bool)isNeedCheckDrm;
- (_Bool)isNeedRetryProjAfterError;
- (_Bool)isNeedCheckStateBeforeProj;
- (id)customAdInfo;
- (_Bool)isNeedProjCustomAd:(id)arg1;
- (_Bool)isAllowProjCustomAd;
- (_Bool)isNeedUseEmptyVideoOp:(id)arg1;
- (_Bool)isNeedUseMP4Format:(id)arg1;
- (_Bool)checkCfgs:(id)arg1 withDevice:(id)arg2;
- (_Bool)isNeedPreStopAction:(id)arg1;
- (_Bool)isNeedAddDlnaOptTwo:(id)arg1;
- (_Bool)isOneSegUrlAddDlnaOpt:(id)arg1;
- (_Bool)isUseOneSegUrl:(id)arg1;
- (id)getDownloadUrlByInstallDeviceType:(id)arg1;
- (id)getSupportInstallDeviceType:(id)arg1;
- (_Bool)isEnableRInstallApp;
- (_Bool)checkDevice:(id)arg1 deviceModel:(id)arg2 fromCfgDic:(id)arg3;
- (_Bool)isGetTVPlayUri;
- (_Bool)isGetPlayStateInstantly;
- (_Bool)isAutoDetectWifi;
- (_Bool)isDisplayHistoryDevice;
- (_Bool)isProcessMiniServerError;
- (_Bool)isFilterMtopDeviceByGateway;
- (_Bool)isContinueProjDisableAdv;
- (_Bool)isEnableGetHistoryDevice;
- (_Bool)isEnableGetMtopDevice;
- (_Bool)isEnableUpnpUnblockConnect;
- (_Bool)isEnableHistoryDev;
- (_Bool)isAddURLTag;
- (_Bool)isEnableDevAliveDetect;
- (_Bool)isPlayByVid;
- (_Bool)isMetaDataHasURL;
- (_Bool)isNowbarDisableAdv;
- (_Bool)isShowNowbar;
- (unsigned long long)upnpConnectTimeout;
- (unsigned long long)projAliveTimeout;
- (unsigned long long)projReqSuccTimeout;
- (unsigned long long)projTimeout;
- (unsigned long long)projRetryCount;
- (void)dealloc;
- (id)init;

@end

