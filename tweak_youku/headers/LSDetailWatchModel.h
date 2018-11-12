//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSParser.h"

@class NSString;

@interface LSDetailWatchModel : NSObject <LSParser>
{
    long long _liveId;
    NSString *_title;
    NSString *_videoId;
    NSString *_imgUrl;
    NSString *_startTime;
    NSString *_endTime;
    long long _duration;
    unsigned long long _playerType;
}

@property(nonatomic) unsigned long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (void)generate1;
- (void)generate0;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
