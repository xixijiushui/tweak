//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKBCParser.h"

@class NSArray, NSString;

@interface BCRoomInfo : NSObject <YKBCParser>
{
    NSString *_powermsgTopic;
    long long _roomId;
    long long _operated;
    long long _participantCount;
    NSArray *_messages;
    long long _owner;
    long long _owner_star;
    NSString *_owner_utdid;
    long long _owner_ytid;
    NSString *_playStatus;
    long long _currentVideoId;
    long long _progress;
}

@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(nonatomic) long long currentVideoId; // @synthesize currentVideoId=_currentVideoId;
@property(retain, nonatomic) NSString *playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) long long owner_ytid; // @synthesize owner_ytid=_owner_ytid;
@property(retain, nonatomic) NSString *owner_utdid; // @synthesize owner_utdid=_owner_utdid;
@property(nonatomic) long long owner_star; // @synthesize owner_star=_owner_star;
@property(nonatomic) long long owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) long long participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) long long operated; // @synthesize operated=_operated;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *powermsgTopic; // @synthesize powermsgTopic=_powermsgTopic;
- (void).cxx_destruct;
- (void)parseObject:(id)arg1;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

