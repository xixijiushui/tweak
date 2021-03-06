//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, YKAModel;

@interface YoukuAnalytics : NSObject
{
    NSString *mLastSPM;
    NSDictionary *mLastSPMExtraInfo;
    NSMutableArray *_vvBlackList;
    NSMutableArray *_vvWhiteList;
    _Bool _isLogging;
    unsigned long long _buildType;
    YKAModel *_ykaModel;
    NSMutableDictionary *_lastPVSourceDic;
    NSString *_currentPVPageName;
    NSString *_currentPVSPMUrl;
    NSString *_currentVVBeginPageName;
    NSString *_currentVVBeginSPMUrl;
    NSArray *_spmSpecialList;
    NSDictionary *_lastClickedExtendInfo;
    NSDictionary *_currentVVParam;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *currentVVParam; // @synthesize currentVVParam=_currentVVParam;
@property(retain, nonatomic) NSDictionary *lastClickedExtendInfo; // @synthesize lastClickedExtendInfo=_lastClickedExtendInfo;
@property(retain, nonatomic) NSArray *spmSpecialList; // @synthesize spmSpecialList=_spmSpecialList;
@property(retain, nonatomic) NSString *currentVVBeginSPMUrl; // @synthesize currentVVBeginSPMUrl=_currentVVBeginSPMUrl;
@property(retain, nonatomic) NSString *currentVVBeginPageName; // @synthesize currentVVBeginPageName=_currentVVBeginPageName;
@property(retain, nonatomic) NSString *currentPVSPMUrl; // @synthesize currentPVSPMUrl=_currentPVSPMUrl;
@property(retain, nonatomic) NSString *currentPVPageName; // @synthesize currentPVPageName=_currentPVPageName;
@property(retain, nonatomic) NSMutableDictionary *lastPVSourceDic; // @synthesize lastPVSourceDic=_lastPVSourceDic;
@property(retain, nonatomic) YKAModel *ykaModel; // @synthesize ykaModel=_ykaModel;
@property(nonatomic) _Bool isLogging; // @synthesize isLogging=_isLogging;
@property(nonatomic) unsigned long long buildType; // @synthesize buildType=_buildType;
- (void).cxx_destruct;
- (void)setUserId:(id)arg1 userAccount:(id)arg2;
- (void)setUserId:(id)arg1;
- (id)currentUTDID;
- (id)currentPVSourceDic;
- (void)setCurrentSPM:(id)arg1;
- (void)resetLastSPM;
- (void)updateLastSPM:(id)arg1 extraInfo:(id)arg2;
- (id)currentSPM;
- (id)lastClickedExtend;
- (void)installTransparentParameters;
- (void)installUTSDK;
- (void)initYKAnalyticsWithDefaultParams:(id)arg1;
- (id)init;
- (void)clearSpmWithObject:(id)arg1;
- (void)collectALiCustomEvent:(id)arg1 evnetPage:(id)arg2 extend:(id)arg3;
- (_Bool)isPad;
- (id)formattedStrFromDic:(id)arg1;
- (id)utAppID;
- (id)appVersion;
- (id)utAppKey;
- (void)collectALiCustomEventWithEventID:(id)arg1 pageName:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (void)collectALiCustomEventWithEventID:(id)arg1 pageName:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 args:(id)arg5;
- (void)collectSPMPageEnd:(id)arg1 pageName:(id)arg2 nextPageProperties:(id)arg3 extend:(id)arg4;
- (void)collectSPMPageStart:(id)arg1 pageName:(id)arg2 spm:(id)arg3 extend:(id)arg4;
- (void)collectSPMPageClickWithPage:(id)arg1 controlName:(id)arg2 SPM:(id)arg3 extend:(id)arg4;
- (void)updateNextVVArgs:(id)arg1;
- (void)collectALiPlayerUserActionWithSrcDic:(id)arg1;
- (void)collectALiPlayEndEventDic:(id)arg1;
- (void)collectALiPlayStartEventDic:(id)arg1;
- (void)filterVVArgs:(id)arg1 eventId:(id)arg2;
- (void)updateArgWithTargetUrl:(id)arg1 extraParams:(id)arg2;
- (void)updateArgWithTargetUrl:(id)arg1;
- (void)updatePageProperties:(id)arg1 withSpmCnt:(id)arg2;
- (void)useCurrentPageObjectToNextPage:(id)arg1 pageKey:(id)arg2;
- (void)updateCurrentPageObject:(id)arg1 pageKey:(id)arg2 withProperty:(id)arg3;
- (void)updateNextPageObject:(id)arg1 pageKey:(id)arg2 withProperty:(id)arg3;
- (void)p_updatePageWithObject:(id)arg1 pageKey:(id)arg2 property:(id)arg3 isToNextPage:(_Bool)arg4;
- (void)updatePageProperties:(id)arg1 newProperties:(id)arg2 isClear:(_Bool)arg3;
- (void)updateNextPageProperties:(id)arg1;
- (void)updatePageProperties:(id)arg1 properties:(id)arg2;
- (id)getPageProperty:(id)arg1;
- (void)commitWithModule:(id)arg1 monitorPoint:(id)arg2 measureValueDic:(id)arg3 dimensionValueDic:(id)arg4;
- (void)registerWithModule:(id)arg1 monitorPoint:(id)arg2 measureNameList:(id)arg3 dimensionNameList:(id)arg4;
- (void)commitFailWithPage:(id)arg1 monitorPoint:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4 arg:(id)arg5;
- (void)commitFailWithPage:(id)arg1 monitorPoint:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4;
- (void)collectClickStatisticWithcontrolName:(id)arg1 pageName:(id)arg2 args:(id)arg3;
- (void)refreshBlockExposure:(id)arg1;
- (void)refreshPageExposure;
- (void)setExposureView:(id)arg1 block:(id)arg2 viewId:(id)arg3 args:(id)arg4;
- (void)turnOffUserTrackCrashHandler;
- (void)collectALiPlayFeelingWithSrcDic:(id)arg1;
- (void)collectALiPlayeExperienceWithSrcDic:(id)arg1;
- (void)collectALiPlayErrorWithSrcDic:(id)arg1;
- (void)collectALiAdPlayEndEventDic:(id)arg1;
- (void)collectALiAdPlayStartEventDic:(id)arg1;
- (void)collectPlayerEventDic:(id)arg1;
- (void)collectPlayHeartBeatEventDic:(id)arg1;
- (void)collectAdPlayEndEventDic:(id)arg1;
- (void)collectAdPlayStartEventDic:(id)arg1;
- (void)collectPlayEndEventDic:(id)arg1;
- (void)collectPlayContinueEventDic:(id)arg1 andPlaycode:(long long)arg2;
- (void)collectPlayPauseEventDic:(id)arg1;
- (void)collectPlayStartEventDic:(id)arg1 andPlaycode:(long long)arg2;
- (void)collectPlayRequestEventDic:(id)arg1;
- (void)collectCustomEvent:(id)arg1 andPage:(id)arg2 andtarget:(id)arg3 andExtend:(id)arg4;
- (void)collectPageClickEventName:(id)arg1 InPage:(id)arg2 withTarget:(id)arg3 withRefercode:(id)arg4 withExtend:(id)arg5;
- (void)collectPageEventHide:(id)arg1;
- (void)collectPageEventLoad:(id)arg1;
- (void)collectPageEnd:(id)arg1 pageName:(id)arg2 nextPageProperties:(id)arg3 extend:(id)arg4;
- (void)collectPageStart:(id)arg1 pageName:(id)arg2 refercode:(id)arg3 extend:(id)arg4;
- (id)currentRefercode;
- (void)unionSetGaudLocationLongitude:(double)arg1 latitude:(double)arg2;
- (id)unionGetRGuid;
- (id)unionGetReferpage;
- (void)killDispatchTimer;
- (void)onKillProcess;
@property(nonatomic) _Bool isTwoPartyLibrary;
@property(nonatomic) __weak id delegate;

@end

