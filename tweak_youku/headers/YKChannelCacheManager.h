//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YKChannelCacheManager : NSObject
{
    NSMutableArray *_noCacheCidArray;
    NSMutableArray *_deleteCachePaths;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *deleteCachePaths; // @synthesize deleteCachePaths=_deleteCachePaths;
@property(retain, nonatomic) NSMutableArray *noCacheCidArray; // @synthesize noCacheCidArray=_noCacheCidArray;
- (void).cxx_destruct;
- (_Bool)containsInNoCache:(id)arg1;
- (void)deleteCacheFile:(id)arg1;
- (void)cleanCacheFile;
- (void)getCacheSwith;
- (id)init;

@end
