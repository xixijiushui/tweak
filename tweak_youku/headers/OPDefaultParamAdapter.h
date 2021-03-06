//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OPParamAdapterProtocol.h"

@class NSString;

@interface OPDefaultParamAdapter : NSObject <OPParamAdapterProtocol>
{
}

- (void)updateConfigDsByPlugin:(id)arg1;
- (id)iconfontImageWithUnicodeKey:(id)arg1 fontSize:(double)arg2 color:(id)arg3;
- (id)iconFontUnicodeMapDict;
- (id)iconFontName;
- (id)dicOfHistory:(id)arg1 playingVideo:(id)arg2;
- (id)playHistory:(id)arg1 playingVideo:(id)arg2;
- (id)getadpoints:(id)arg1;
- (id)getSeqsinorder:(id)arg1;
- (id)getAdseqsinorder:(id)arg1;
- (id)getDownloadVideoTaskfrom:(id)arg1 bycutid:(id)arg2;
- (id)getadvidby:(id)arg1 index:(long long)arg2;
- (long long)getadstarttimeby:(id)arg1 index:(long long)arg2;
- (id)videoseqinorder:(id)arg1;
- (void)updatePlayingVideoWithCache:(id)arg1 qualityString:(id)arg2 isCachingPlay:(_Bool)arg3 playingVideo:(id)arg4;
- (void)updatePlayingVideoWithCache:(id)arg1 qualityString:(id)arg2 playingVideo:(id)arg3;
- (long long)findAllFinishedVideosCountByPlugin:(id)arg1;
- (_Bool)playUpdatePlayingVideoWithCacheVideoByPlugin:(id)arg1;
- (void)updateUpsInCacheVideoByPlugin:(id)arg1;
- (unsigned long long)filesizeByPath:(id)arg1;
- (void)reportLocalVideoPlayErrorByPlugin:(id)arg1;
- (id)findCacheVideo:(id)arg1 playingVideo:(id)arg2;
- (_Bool)isDebug;
- (_Bool)isLogin;
- (long long)memberType;
- (_Bool)isVipUser;
- (id)userId;
- (_Bool)isHaveUser;
- (id)hevcWhitelist;
- (id)playTipsContent;
- (id)adCookieValue;
- (id)adext;
- (id)defaultAdvParams;
- (id)getUtdid;
- (id)OpenUDID;
- (void)setServerTime:(long long)arg1;
- (long long)serverTime;
- (long long)serverDifference;
- (id)defaultTrackerParameters;
- (id)adUserAgent;
- (id)userAgent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

