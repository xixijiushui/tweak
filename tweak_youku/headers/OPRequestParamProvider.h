//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YYMediaPlayerNetworkParamsDelegate.h"

@class NSString, OPPlayerCore, OPPlugin;

@interface OPRequestParamProvider : NSObject <YYMediaPlayerNetworkParamsDelegate>
{
    OPPlugin *_playCorePlugin;
    OPPlayerCore *_playerCore;
}

@property(nonatomic) __weak OPPlayerCore *playerCore; // @synthesize playerCore=_playerCore;
@property(nonatomic) __weak OPPlugin *playCorePlugin; // @synthesize playCorePlugin=_playCorePlugin;
- (void).cxx_destruct;
- (id)extraStatisticsInfoWithEvent:(id)arg1;
- (id)barrageStatisticsInfoWithVid:(id)arg1;
- (id)hevcWhitelist;
- (long long)subjectVideo;
- (id)autoPlay;
- (id)skipAdTitle;
- (_Bool)isVipUser;
- (id)userId;
- (long long)ctu;
- (id)adCookieValue;
- (id)adext;
- (id)adParams;
- (id)videoParams;
- (void)timestampInvalid:(long long)arg1;
- (long long)timestamp;
- (id)adUserAgent;
- (id)userAgent;
- (id)param;
- (id)adapter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

