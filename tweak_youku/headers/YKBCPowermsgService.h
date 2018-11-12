//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface YKBCPowermsgService : NSObject
{
    NSString *_userName;
    NSString *_userId;
    long long lastTimestamp;
    long long _currentEnv;
    NSString *_appKey;
    NSString *_appSecret;
    id <YKBCPowermsgServiceDelegate> _delegate;
    NSMutableDictionary *_envDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *envDict; // @synthesize envDict=_envDict;
@property(nonatomic) __weak id <YKBCPowermsgServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(nonatomic) long long currentEnv; // @synthesize currentEnv=_currentEnv;
- (void).cxx_destruct;
- (void)output10000xmsg:(id)arg1 timestamp:(long long)arg2 messageId:(id)arg3;
- (void)outputLine:(id)arg1;
- (void)textMessageAction:(id)arg1 internalMessageId:(id)arg2 namspace:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)artcConnectAction:(id)arg1 users:(id)arg2 isEnter:(_Bool)arg3 topic:(id)arg4 namspace:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)playControlMessageAction:(id)arg1 topic:(id)arg2 namspace:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)textMessageAction:(id)arg1 senderType:(int)arg2 internalMessageId:(id)arg3 topic:(id)arg4 namspace:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)removeMsgAction:(id)arg1 internalMessageId:(id)arg2 topic:(id)arg3 namspace:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)voiceMessageAction:(id)arg1 internalMessageId:(id)arg2 topic:(id)arg3 namspace:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)generateMessageId;
- (void)digAction:(id)arg1 namspace:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)topicStatsAction:(id)arg1 namspace:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)userListAction:(id)arg1 namspace:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)unsubscribe:(id)arg1 namspace:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)subscribe:(id)arg1 namspace:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)messageArrive:(id)arg1 error:(id)arg2;
- (id)userName;
- (id)userId;
- (void)registerUserName:(id)arg1;
- (void)registerUserId:(id)arg1;
- (void)startService;
- (id)init;
- (id)appKeyGet;

@end
