//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RACDisposable, YKFCommunityExpViewServiceGetDaliyTaskPopoverAPI;

@interface YKFTodayTasksInfoViewModel : NSObject
{
    YKFCommunityExpViewServiceGetDaliyTaskPopoverAPI *_getDaliyTaskPopoverAPI;
    RACDisposable *_apiDisposable;
}

@property(retain, nonatomic) RACDisposable *apiDisposable; // @synthesize apiDisposable=_apiDisposable;
@property(retain, nonatomic) YKFCommunityExpViewServiceGetDaliyTaskPopoverAPI *getDaliyTaskPopoverAPI; // @synthesize getDaliyTaskPopoverAPI=_getDaliyTaskPopoverAPI;
- (void).cxx_destruct;
- (void)fetchTodayTaskInfoWithFandomId:(long long)arg1 complate:(CDUnknownBlockType)arg2;

@end

