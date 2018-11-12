//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVIPBaseCache.h"

@interface YKVIPFileCache : YKVIPBaseCache
{
}

- (void)totalCountWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)totalCount;
- (id)allkeys;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 skipMemory:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1 skipMemory:(_Bool)arg2;
- (id)objectForKey:(id)arg1;
- (void)containsObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)containsObjectForKey:(id)arg1;
- (id)fileCache;

@end

