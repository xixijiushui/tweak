//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AdSdkConfig : NSObject
{
    _Bool _asyncSplash;
    _Bool _midOff;
    _Bool _pressOff;
    _Bool _customOff;
    _Bool _cornerOff;
    _Bool _pauseOff;
    _Bool _offlineAdOff;
    _Bool _splashOff;
    _Bool _adpOff;
    _Bool _splashDateCheck;
    _Bool _useWeex;
    _Bool _loopWeexSwitch;
    _Bool _useDebug;
    _Bool _webOrientationAlignPlayer;
    _Bool _hotStartAdEnabled;
    _Bool _useAverageColor;
    _Bool _livePreEnable;
    _Bool _livePauseEnable;
    _Bool _livePostEnable;
    _Bool _vidCacheEnable;
    int _adCount;
    int _homeDelay;
    double _adpInterval;
    double _adpTimeout;
    double _cacheTimeout;
    double _advTimeout;
    double _pressAdAdvanceRequestTime;
    double _customAdAdvanceRequestTime;
    long long _invokeType;
    unsigned long long _retryCount;
    long long _splashInvokeType;
    long long _exposeInvokeType;
    long long _offlineExposeInvokeType;
    long long _launchExpireTime;
    long long _pspOff;
    NSArray *_disabledAdTypes;
    double _pressAdAl;
    NSString *_carouselAdWeexUrl;
    long long _loopSUSValidTime;
    unsigned long long _cacheRestriction;
    double _cacheCheckInterval;
    NSString *_noAdKey;
    NSString *_noAdKeyVersion;
    double _hotStartAdRequestMinInterval;
    double _hotStartAdDisplayTwiceMinInterval;
    double _hotStartAdBgWaitTimeThreshold;
    long long _floatCacheRetentionTime;
    long long _feedAdMinHeight;
    long long _feedAdMaxHeight;
    double _minAccl;
    double _lowAccl;
    long long _maxSchemeCount;
    long long _schemeDay;
    NSString *_emsHost;
    double _preRequestTimeout;
    long long _pauseAdWidth;
    long long _pauseAdHeight;
    double _clickIntervalMilli;
    long long _portraitTopMarginForLive;
    long long _valEventId;
    NSString *_vipFreeAdUrl;
}

+ (double)defaultPredictInterval;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *vipFreeAdUrl; // @synthesize vipFreeAdUrl=_vipFreeAdUrl;
@property(nonatomic) long long valEventId; // @synthesize valEventId=_valEventId;
@property(nonatomic) long long portraitTopMarginForLive; // @synthesize portraitTopMarginForLive=_portraitTopMarginForLive;
@property(nonatomic) _Bool vidCacheEnable; // @synthesize vidCacheEnable=_vidCacheEnable;
@property(nonatomic) _Bool livePostEnable; // @synthesize livePostEnable=_livePostEnable;
@property(nonatomic) _Bool livePauseEnable; // @synthesize livePauseEnable=_livePauseEnable;
@property(nonatomic) _Bool livePreEnable; // @synthesize livePreEnable=_livePreEnable;
@property(nonatomic) double clickIntervalMilli; // @synthesize clickIntervalMilli=_clickIntervalMilli;
@property(nonatomic) long long pauseAdHeight; // @synthesize pauseAdHeight=_pauseAdHeight;
@property(nonatomic) long long pauseAdWidth; // @synthesize pauseAdWidth=_pauseAdWidth;
@property(nonatomic) double preRequestTimeout; // @synthesize preRequestTimeout=_preRequestTimeout;
@property(nonatomic) _Bool useAverageColor; // @synthesize useAverageColor=_useAverageColor;
@property(copy, nonatomic) NSString *emsHost; // @synthesize emsHost=_emsHost;
@property(nonatomic) long long schemeDay; // @synthesize schemeDay=_schemeDay;
@property(nonatomic) long long maxSchemeCount; // @synthesize maxSchemeCount=_maxSchemeCount;
@property(nonatomic) double lowAccl; // @synthesize lowAccl=_lowAccl;
@property(nonatomic) double minAccl; // @synthesize minAccl=_minAccl;
@property(nonatomic) long long feedAdMaxHeight; // @synthesize feedAdMaxHeight=_feedAdMaxHeight;
@property(nonatomic) long long feedAdMinHeight; // @synthesize feedAdMinHeight=_feedAdMinHeight;
@property(nonatomic) long long floatCacheRetentionTime; // @synthesize floatCacheRetentionTime=_floatCacheRetentionTime;
@property(nonatomic) double hotStartAdBgWaitTimeThreshold; // @synthesize hotStartAdBgWaitTimeThreshold=_hotStartAdBgWaitTimeThreshold;
@property(nonatomic) double hotStartAdDisplayTwiceMinInterval; // @synthesize hotStartAdDisplayTwiceMinInterval=_hotStartAdDisplayTwiceMinInterval;
@property(nonatomic) double hotStartAdRequestMinInterval; // @synthesize hotStartAdRequestMinInterval=_hotStartAdRequestMinInterval;
@property(nonatomic) _Bool hotStartAdEnabled; // @synthesize hotStartAdEnabled=_hotStartAdEnabled;
@property(copy, nonatomic) NSString *noAdKeyVersion; // @synthesize noAdKeyVersion=_noAdKeyVersion;
@property(copy, nonatomic) NSString *noAdKey; // @synthesize noAdKey=_noAdKey;
@property(nonatomic) double cacheCheckInterval; // @synthesize cacheCheckInterval=_cacheCheckInterval;
@property(nonatomic) unsigned long long cacheRestriction; // @synthesize cacheRestriction=_cacheRestriction;
@property(nonatomic) _Bool webOrientationAlignPlayer; // @synthesize webOrientationAlignPlayer=_webOrientationAlignPlayer;
@property(nonatomic) _Bool useDebug; // @synthesize useDebug=_useDebug;
@property(nonatomic) _Bool loopWeexSwitch; // @synthesize loopWeexSwitch=_loopWeexSwitch;
@property(nonatomic) long long loopSUSValidTime; // @synthesize loopSUSValidTime=_loopSUSValidTime;
@property(copy, nonatomic) NSString *carouselAdWeexUrl; // @synthesize carouselAdWeexUrl=_carouselAdWeexUrl;
@property(nonatomic) _Bool useWeex; // @synthesize useWeex=_useWeex;
@property(nonatomic) double pressAdAl; // @synthesize pressAdAl=_pressAdAl;
@property(readonly, nonatomic) NSArray *disabledAdTypes; // @synthesize disabledAdTypes=_disabledAdTypes;
@property(nonatomic) _Bool splashDateCheck; // @synthesize splashDateCheck=_splashDateCheck;
@property(nonatomic) _Bool adpOff; // @synthesize adpOff=_adpOff;
@property(nonatomic) _Bool splashOff; // @synthesize splashOff=_splashOff;
@property(nonatomic) _Bool offlineAdOff; // @synthesize offlineAdOff=_offlineAdOff;
@property(nonatomic) _Bool pauseOff; // @synthesize pauseOff=_pauseOff;
@property(nonatomic) _Bool cornerOff; // @synthesize cornerOff=_cornerOff;
@property(nonatomic) _Bool customOff; // @synthesize customOff=_customOff;
@property(nonatomic) _Bool pressOff; // @synthesize pressOff=_pressOff;
@property(nonatomic) _Bool midOff; // @synthesize midOff=_midOff;
@property(nonatomic) long long pspOff; // @synthesize pspOff=_pspOff;
@property(nonatomic) long long launchExpireTime; // @synthesize launchExpireTime=_launchExpireTime;
@property(nonatomic) long long offlineExposeInvokeType; // @synthesize offlineExposeInvokeType=_offlineExposeInvokeType;
@property(nonatomic) long long exposeInvokeType; // @synthesize exposeInvokeType=_exposeInvokeType;
@property(nonatomic) long long splashInvokeType; // @synthesize splashInvokeType=_splashInvokeType;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long invokeType; // @synthesize invokeType=_invokeType;
@property(nonatomic) double customAdAdvanceRequestTime; // @synthesize customAdAdvanceRequestTime=_customAdAdvanceRequestTime;
@property(nonatomic) double pressAdAdvanceRequestTime; // @synthesize pressAdAdvanceRequestTime=_pressAdAdvanceRequestTime;
@property(nonatomic) int homeDelay; // @synthesize homeDelay=_homeDelay;
@property(nonatomic) int adCount; // @synthesize adCount=_adCount;
@property(nonatomic) _Bool asyncSplash; // @synthesize asyncSplash=_asyncSplash;
@property(nonatomic) double advTimeout; // @synthesize advTimeout=_advTimeout;
@property(nonatomic) double cacheTimeout; // @synthesize cacheTimeout=_cacheTimeout;
@property(nonatomic) double adpTimeout; // @synthesize adpTimeout=_adpTimeout;
@property(nonatomic) double adpInterval; // @synthesize adpInterval=_adpInterval;
- (void).cxx_destruct;
- (_Bool)isAdTypeDisabled:(long long)arg1;
- (void)loadDefaultCfg:(_Bool)arg1;
- (void)loadConfigFromDict:(id)arg1 updateAy:(_Bool)arg2;
- (id)loadFromContent:(id)arg1;
- (id)loadFromOrange:(id)arg1 withKey:(id)arg2;
- (void)load;
- (void)loadGlobalConfig;
- (id)init;

@end

