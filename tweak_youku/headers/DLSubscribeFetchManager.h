//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DLSubscribeManager, YKJSONClient;

@interface DLSubscribeFetchManager : NSObject
{
    YKJSONClient *_jsonClient;
    DLSubscribeManager *_subscribeManager;
}

+ (id)sharedManager;
@property(retain, nonatomic) DLSubscribeManager *subscribeManager; // @synthesize subscribeManager=_subscribeManager;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (void)fetchSubscribedVideosImmediately:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldFetchSubscribedVideos;
- (id)init;

@end
