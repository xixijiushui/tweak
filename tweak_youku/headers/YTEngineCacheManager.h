//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTCorePlayer, YTEngineCacheLightItemQueue, YTEngineRequestUpsModule;

@interface YTEngineCacheManager : NSObject
{
    YTCorePlayer *_corePlayer;
    YTEngineRequestUpsModule *_upsModule;
    YTEngineCacheLightItemQueue *_cacheLightItemQueue;
    long long _preloadSize;
}

+ (int)hdFlagFromQuality:(id)arg1;
+ (id)playUrlWithItem:(id)arg1;
+ (long long)cancelPreloadUrlWithIndex:(long long)arg1;
+ (long long)preloadUrl:(id)arg1 totalDration:(long long)arg2;
+ (id)sharedInstance;
@property(nonatomic) long long preloadSize; // @synthesize preloadSize=_preloadSize;
@property(retain, nonatomic) YTEngineCacheLightItemQueue *cacheLightItemQueue; // @synthesize cacheLightItemQueue=_cacheLightItemQueue;
@property(retain, nonatomic) YTEngineRequestUpsModule *upsModule; // @synthesize upsModule=_upsModule;
@property(nonatomic) __weak YTCorePlayer *corePlayer; // @synthesize corePlayer=_corePlayer;
- (void).cxx_destruct;
- (id)lightVideoItemWithVid:(id)arg1;
- (void)p_addCacheItem:(id)arg1;
- (void)p_preloadSliceDataWithPlayUrl:(id)arg1;
- (void)p_preloadSliceDataWithItem:(id)arg1;
- (void)p_preloadWithVids:(id)arg1;
- (void)preloadWithVids:(id)arg1;
- (void)feedNetcachePreloadWithItems:(id)arg1;
- (void)feedPreloadWithPlayUrls:(id)arg1;
- (void)feedPreloadWithItems:(id)arg1;
- (long long)p_preAddDataSourceWithPlayUrl:(id)arg1;
- (long long)p_preAddDataSourceWithItem:(id)arg1;
- (long long)addPreloadTask:(id)arg1 preloadSize:(long long)arg2;
- (id)init;

@end
