//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUserBarrageSendRequest.h"

@class NSNumber;

@interface YKLiveBarrageSendRequest : YKUserBarrageSendRequest
{
    NSNumber *_activityId;
    long long _liveChannelId;
}

@property(nonatomic) long long liveChannelId; // @synthesize liveChannelId=_liveChannelId;
@property(copy, nonatomic) NSNumber *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (id)toJsonDict;
- (id)init;

@end

