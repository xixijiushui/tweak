//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AIACMsgListenerProtocol.h"

@class AIACMsgHandler, LSLivePlayerDataManager, LSThreadSafeArray, NSArray, NSMutableArray, NSString, NSTimer;

@interface LSBulletManager : NSObject <AIACMsgListenerProtocol>
{
    _Bool _enabledReciveMessage;
    LSLivePlayerDataManager *_dataManager;
    NSMutableArray *_messages;
    NSArray *_comperes;
    NSTimer *_updateTimer;
    LSThreadSafeArray *_updatingMessages;
    AIACMsgHandler *_pmHandler;
}

@property(retain, nonatomic) AIACMsgHandler *pmHandler; // @synthesize pmHandler=_pmHandler;
@property(retain, nonatomic) LSThreadSafeArray *updatingMessages; // @synthesize updatingMessages=_updatingMessages;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) _Bool enabledReciveMessage; // @synthesize enabledReciveMessage=_enabledReciveMessage;
@property(retain, nonatomic) NSArray *comperes; // @synthesize comperes=_comperes;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)clearAllMessage;
- (void)sendMessageImmediatelyDisplay:(id)arg1;
- (void)msgArrive:(id)arg1;
- (void)unregisterPowermsg;
- (void)registerPowermsg:(id)arg1;
- (void)loadMessage;
- (void)updateCurrentUserInfo:(id)arg1;
- (void)beginReceiveMessage;
- (void)stopReceiveMessage;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

