//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VELine : NSObject
{
    long long _tag;
    double _scrollTime;
    double _startTime;
    double _endTime;
    double _duration;
    double _recordDuration;
    NSString *_string;
}

@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) double recordDuration; // @synthesize recordDuration=_recordDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double scrollTime; // @synthesize scrollTime=_scrollTime;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

@end

