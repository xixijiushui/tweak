//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPAdapterProtocol.h"

@class NSDictionary, NSString, OPPlugin, OPVideo, UIColor, UIImage, YYMediaPlayerHistory;

@protocol OPParamAdapterProtocol <OPAdapterProtocol>
- (UIImage *)iconfontImageWithUnicodeKey:(NSString *)arg1 fontSize:(double)arg2 color:(UIColor *)arg3;
- (NSDictionary *)iconFontUnicodeMapDict;
- (NSString *)iconFontName;
- (NSDictionary *)dicOfHistory:(NSString *)arg1 playingVideo:(OPVideo *)arg2;
- (YYMediaPlayerHistory *)playHistory:(NSString *)arg1 playingVideo:(OPVideo *)arg2;
- (OPVideo *)findCacheVideo:(NSString *)arg1 playingVideo:(OPVideo *)arg2;
- (void)updateUpsInCacheVideoByPlugin:(OPPlugin *)arg1;
- (void)reportLocalVideoPlayErrorByPlugin:(OPPlugin *)arg1;
- (long long)findAllFinishedVideosCountByPlugin:(OPPlugin *)arg1;
- (_Bool)playUpdatePlayingVideoWithCacheVideoByPlugin:(OPPlugin *)arg1;
- (void)updateConfigDsByPlugin:(OPPlugin *)arg1;
- (_Bool)isDebug;
- (_Bool)isLogin;
- (long long)memberType;
- (_Bool)isVipUser;
- (NSString *)userId;
- (_Bool)isHaveUser;
- (NSString *)hevcWhitelist;
- (NSString *)playTipsContent;
- (NSDictionary *)adCookieValue;
- (NSString *)adext;
- (NSDictionary *)defaultAdvParams;
- (NSString *)getUtdid;
- (NSString *)OpenUDID;
- (void)setServerTime:(long long)arg1;
- (long long)serverTime;
- (long long)serverDifference;
- (NSDictionary *)defaultTrackerParameters;
- (NSString *)adUserAgent;
- (NSString *)userAgent;
@end

