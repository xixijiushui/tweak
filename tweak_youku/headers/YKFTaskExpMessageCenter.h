//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RACDisposable, YKFCommunityExpActionServiceGetExpMessageAPI, YKFCommunityPostServiceWatchVideoPostAPI;

@interface YKFTaskExpMessageCenter : NSObject
{
    long long _currentPlayPostId;
    long long _currentFandomId;
    YKFCommunityExpActionServiceGetExpMessageAPI *_getExpMessageAPI;
    RACDisposable *_apiDisposable;
    YKFCommunityPostServiceWatchVideoPostAPI *_watchVideoPostAPI;
}

+ (id)defaultCenter;
@property(retain, nonatomic) YKFCommunityPostServiceWatchVideoPostAPI *watchVideoPostAPI; // @synthesize watchVideoPostAPI=_watchVideoPostAPI;
@property(retain, nonatomic) RACDisposable *apiDisposable; // @synthesize apiDisposable=_apiDisposable;
@property(retain, nonatomic) YKFCommunityExpActionServiceGetExpMessageAPI *getExpMessageAPI; // @synthesize getExpMessageAPI=_getExpMessageAPI;
@property(nonatomic) long long currentFandomId; // @synthesize currentFandomId=_currentFandomId;
@property(nonatomic) long long currentPlayPostId; // @synthesize currentPlayPostId=_currentPlayPostId;
- (void).cxx_destruct;
- (void)sendInfoToServer4WatchVideoPost:(long long)arg1 fandomId:(long long)arg2;
- (void)fetchExpMessageWithFandomId:(long long)arg1 uniqueKey:(id)arg2 type:(long long)arg3;
- (void)_handleExpMessageResult:(id)arg1;

@end

