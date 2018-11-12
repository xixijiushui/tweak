//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKBCParser.h"

@class BCRoomParticipant, NSArray, NSDictionary, NSMutableArray, NSString;

@interface BCRoomCreateInfo : NSObject <YKBCParser>
{
    _Bool _relation_present;
    _Bool _relation_isOwner;
    _Bool _appoint;
    NSString *_my_avatar;
    NSString *_my_name;
    NSString *_my_utdid;
    long long _my_ytid;
    long long _my_owner;
    long long _my_star;
    NSString *_my_joinRoomMsg;
    long long _my_wcAttrType;
    long long _my_wcAttrValue;
    NSString *_powermsgTopic;
    long long _roomId;
    long long _operated;
    long long _participantCount;
    NSArray *_participants;
    NSMutableArray *_messages;
    NSDictionary *_roomConfig;
    long long _roomSize;
    long long _wcQsType;
    NSString *_weexUrl;
    BCRoomParticipant *_roomOwnerParticipant;
    NSString *_voiceChannelId;
    NSArray *_talkUtdidList;
    long long _chatType;
    NSString *_type;
    NSString *_playStatus;
    long long _currentVideoId;
    long long _progress;
    long long _appointCount;
    NSArray *_appointList;
    NSString *_status;
    NSString *_createRoomMsg;
    NSString *_joinRoomMsg;
    NSDictionary *_matchInfo;
}

@property(retain, nonatomic) NSDictionary *matchInfo; // @synthesize matchInfo=_matchInfo;
@property(copy, nonatomic) NSString *joinRoomMsg; // @synthesize joinRoomMsg=_joinRoomMsg;
@property(copy, nonatomic) NSString *createRoomMsg; // @synthesize createRoomMsg=_createRoomMsg;
@property(nonatomic) _Bool appoint; // @synthesize appoint=_appoint;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *appointList; // @synthesize appointList=_appointList;
@property(nonatomic) long long appointCount; // @synthesize appointCount=_appointCount;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(nonatomic) long long currentVideoId; // @synthesize currentVideoId=_currentVideoId;
@property(copy, nonatomic) NSString *playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) _Bool relation_isOwner; // @synthesize relation_isOwner=_relation_isOwner;
@property(nonatomic) _Bool relation_present; // @synthesize relation_present=_relation_present;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSArray *talkUtdidList; // @synthesize talkUtdidList=_talkUtdidList;
@property(copy, nonatomic) NSString *voiceChannelId; // @synthesize voiceChannelId=_voiceChannelId;
@property(retain, nonatomic) BCRoomParticipant *roomOwnerParticipant; // @synthesize roomOwnerParticipant=_roomOwnerParticipant;
@property(copy, nonatomic) NSString *weexUrl; // @synthesize weexUrl=_weexUrl;
@property(nonatomic) long long wcQsType; // @synthesize wcQsType=_wcQsType;
@property(nonatomic) long long roomSize; // @synthesize roomSize=_roomSize;
@property(retain, nonatomic) NSDictionary *roomConfig; // @synthesize roomConfig=_roomConfig;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(nonatomic) long long participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) long long operated; // @synthesize operated=_operated;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *powermsgTopic; // @synthesize powermsgTopic=_powermsgTopic;
@property(nonatomic) long long my_wcAttrValue; // @synthesize my_wcAttrValue=_my_wcAttrValue;
@property(nonatomic) long long my_wcAttrType; // @synthesize my_wcAttrType=_my_wcAttrType;
@property(copy, nonatomic) NSString *my_joinRoomMsg; // @synthesize my_joinRoomMsg=_my_joinRoomMsg;
@property(nonatomic) long long my_star; // @synthesize my_star=_my_star;
@property(nonatomic) long long my_owner; // @synthesize my_owner=_my_owner;
@property(nonatomic) long long my_ytid; // @synthesize my_ytid=_my_ytid;
@property(copy, nonatomic) NSString *my_utdid; // @synthesize my_utdid=_my_utdid;
@property(copy, nonatomic) NSString *my_name; // @synthesize my_name=_my_name;
@property(copy, nonatomic) NSString *my_avatar; // @synthesize my_avatar=_my_avatar;
- (void).cxx_destruct;
- (void)sortMessagesByTimestamp;
- (void)dupRemoveMessages;
- (void)parseObject:(id)arg1;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
