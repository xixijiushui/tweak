//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface YKShortVideoPreloadImpl : NSObject
{
    NSMutableDictionary *_tempPlistDic;
    NSMutableSet *_cachedPlistKey;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableSet *cachedPlistKey; // @synthesize cachedPlistKey=_cachedPlistKey;
@property(retain, nonatomic) NSMutableDictionary *tempPlistDic; // @synthesize tempPlistDic=_tempPlistDic;
- (void).cxx_destruct;
- (void)prefetchImg:(id)arg1;
- (void)preloadPlayList:(id)arg1;
- (id)init;

@end

