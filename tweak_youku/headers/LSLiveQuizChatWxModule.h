//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "AIACMsgListenerProtocol.h"

@class AIACMsgHandler, LSLiveInfoModel, LSLiveSimpleChatView, NSString;

@interface LSLiveQuizChatWxModule : WXComponent <AIACMsgListenerProtocol>
{
    _Bool _isDisplayChatHistory;
    NSString *_liveId;
    NSString *_liveUUID;
    AIACMsgHandler *_msgHandler;
    LSLiveInfoModel *_baseFullInfo;
    LSLiveSimpleChatView *_chatView;
    long long _width;
    long long _height;
}

@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) LSLiveSimpleChatView *chatView; // @synthesize chatView=_chatView;
@property(retain, nonatomic) LSLiveInfoModel *baseFullInfo; // @synthesize baseFullInfo=_baseFullInfo;
@property(retain, nonatomic) AIACMsgHandler *msgHandler; // @synthesize msgHandler=_msgHandler;
@property(copy, nonatomic) NSString *liveUUID; // @synthesize liveUUID=_liveUUID;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) _Bool isDisplayChatHistory; // @synthesize isDisplayChatHistory=_isDisplayChatHistory;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillUnload;
- (void)shareToEnterChat:(id)arg1;
- (void)chartMsgArrive:(id)arg1;
- (void)msgArrive:(id)arg1;
- (id)loadView;
- (void)connect:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)requestFullInfo:(id)arg1:(CDUnknownBlockType)arg2:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1:(CDUnknownBlockType)arg2:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
