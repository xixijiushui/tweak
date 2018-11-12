//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKCacheFileStorageProtocol.h"

@class AVFSCache, NSString;

@interface YKCacheFileStorageImpAliVFS : NSObject <YKCacheFileStorageProtocol>
{
    NSString *_path;
    AVFSCache *_cache;
}

@property(retain, nonatomic) AVFSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)cacheForKey:(id)arg1;
- (unsigned long long)totalCount;
- (void)removeAllCacheDataWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllCacheData;
- (void)removeCacheDataForDomain:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeCacheDataForDomain:(id)arg1;
- (void)removeCacheDataForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeCacheDataForKey:(id)arg1;
- (void)loadCacheDataForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)loadCacheDataForKey:(id)arg1;
- (_Bool)saveCacheData:(id)arg1 forKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)saveCacheData:(id)arg1 forKey:(id)arg2;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

