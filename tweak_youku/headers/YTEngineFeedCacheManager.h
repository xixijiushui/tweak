//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTEngineFeedCacheManager : NSObject
{
    float _preloadDelayTime;
    NSObject *_prepareToken;
}

@property(retain) NSObject *prepareToken; // @synthesize prepareToken=_prepareToken;
@property(nonatomic) float preloadDelayTime; // @synthesize preloadDelayTime=_preloadDelayTime;
- (void).cxx_destruct;
- (void)stop;
- (void)feedNetcachePreloadWithItems:(id)arg1;
- (void)feedPreloadWithPlayUrls:(id)arg1;
- (void)feedPreloadWithItems:(id)arg1;
- (id)init;
- (id)msgProcessQueue;

@end
