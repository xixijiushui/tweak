//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalStarActivityPO>;

@interface YKFStararrivalStarActivityListPO : YKFAPIModel
{
    NSArray<YKFStararrivalStarActivityPO> *_activities;
    long long _gmtLastTime;
}

@property(nonatomic) long long gmtLastTime; // @synthesize gmtLastTime=_gmtLastTime;
@property(retain, nonatomic) NSArray<YKFStararrivalStarActivityPO> *activities; // @synthesize activities=_activities;
- (void).cxx_destruct;

@end
