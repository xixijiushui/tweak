//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, YTEngineYoukuPlayerVideoAdEmbedInstanceItem;

@protocol YTEngineStatisticsModuleDataSource <NSObject>
- (NSString *)preloadInfo;
- (NSDictionary *)getVpmCDNInfos;
- (NSDictionary *)playLiveTimeInfos;
- (NSDictionary *)freeVideoInfomationsFromEvent:(NSString *)arg1;
- (long long)offlineAdTimeOut;
- (double)playbackSpeedST;
- (long long)dropFrameCounts;
- (NSString *)getCurrentKeyUrl;
- (NSString *)getIsPlayFromCacheStr;
- (NSDictionary *)getCoreSoftNotifyMsgInfo;
- (_Bool)isRtmpe;
- (NSDictionary *)extraStatisticsInfoWithEvent:(NSString *)arg1;
- (NSString *)ClientIP;
- (NSString *)PSID;
- (NSString *)corePlayerType;
- (NSString *)isHappendError;
- (NSDictionary *)vvCacheInfo;
- (NSDictionary *)barrageStatisticsInfoWithVid:(NSString *)arg1;
- (long long)cdnType;
- (_Bool)needOpenLastVPM;
- (_Bool)isP2pPlayST;
- (_Bool)isLiveVideoST;
- (NSDictionary *)videoInfomations;
- (double)sourceToRenderDelay;
- (double)cdnToRenderDelay;
- (long long)videoInitialState;
- (NSString *)litePlayer;
- (_Bool)statisticsCacheVideoCompleted;
- (double)videoTailTime;
- (NSString *)isRtmpeSTStr;
- (NSString *)dolbyTypeST;
- (NSString *)qualityForRequesting;
- (long long)videoQualityTypeST;
- (NSString *)videoQualityKey;
- (long long)videoQualityVV;
- (NSString *)networkSpeedInfo;
- (int)pendingThreshold;
- (void)videoEndWithUcStatistics:(NSDictionary *)arg1;
- (void)videoEndWithViewedSeconds:(long long)arg1;
- (NSString *)preAdReqid;
- (YTEngineYoukuPlayerVideoAdEmbedInstanceItem *)embeddedAdItem;
- (NSString *)platformManagerQuality;
- (NSString *)playlistid;
- (long long)videoOrientation;
- (_Bool)offlineAd;
- (_Bool)trueviewAd;
- (unsigned long long)preVideoAdCount;
- (_Bool)sightEnhancementSwitchStatus;
- (_Bool)languageChanging;
- (NSString *)engineDecodeScheme;
- (NSString *)coreDecodeScheme;
- (unsigned long long)decodeScheme;
- (double)videoDuration;
- (NSString *)videoLanguage;
- (_Bool)fullscreen;
- (double)videoPlayedTime;
- (id)videoItem;
- (double)videoInitialPlayTime;
- (NSString *)videoFormat;
- (_Bool)firstPlay;
- (_Bool)localPlay;
- (NSString *)utdid;
- (NSString *)userid;
- (unsigned long long)state;
- (NSString *)showid_yka;
- (NSString *)showid;
- (NSString *)sessionid;
- (NSString *)videoid;
- (NSString *)videoid_yka;
- (NSArray *)stdAdItems;
- (NSArray *)postAdItems;
- (NSArray *)midAdItems;
- (NSArray *)preAdItems;
- (NSArray *)pauseAdItems;
- (NSArray *)footerAdItems;
- (long long)currentAdIndex;
- (id)currentAdItem;
@end

