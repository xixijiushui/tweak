//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityRecommendRO : YKFAPIModel
{
    long long _pullType;
    NSString *_userTrack;
}

@property(retain, nonatomic) NSString *userTrack; // @synthesize userTrack=_userTrack;
@property(nonatomic) long long pullType; // @synthesize pullType=_pullType;
- (void).cxx_destruct;

@end
