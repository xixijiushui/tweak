//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface YKPLDPreloadVideo : NSObject
{
    unsigned long long _limitCount;
    NSMutableArray *_ids;
    NSArray *_titles;
    NSMutableArray *_allVideos;
    NSArray *_finishedVideos;
    NSArray *_needCacheVideos;
}

@property(retain, nonatomic) NSArray *needCacheVideos; // @synthesize needCacheVideos=_needCacheVideos;
@property(retain, nonatomic) NSArray *finishedVideos; // @synthesize finishedVideos=_finishedVideos;
@property(retain, nonatomic) NSMutableArray *allVideos; // @synthesize allVideos=_allVideos;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableArray *ids; // @synthesize ids=_ids;
@property(nonatomic) unsigned long long limitCount; // @synthesize limitCount=_limitCount;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (void)clearVideos;
- (void)updateErrorVideo;
- (id)getVideo;
- (void)cache:(id)arg1 finished:(_Bool)arg2;
- (_Bool)checkIdExist:(id)arg1;
- (id)getList:(_Bool)arg1;
- (id)failedCacheVideos;
- (void)updateVideoList:(id)arg1;

@end
