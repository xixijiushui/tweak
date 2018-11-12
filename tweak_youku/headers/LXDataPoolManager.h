//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AIACMsgListenerProtocol.h"
#import "LSMtopServiceProtocol.h"

@class AIACMsgHandler, AIASLiveSession, LSLiveInfoModel, LSLivePlayNewController, LSMtopService, NSMutableArray, NSMutableDictionary, NSString, UIImageView, WXSDKInstance, YKJSONClient;

@interface LXDataPoolManager : NSObject <AIACMsgListenerProtocol, LSMtopServiceProtocol>
{
    _Bool _landScape;
    NSMutableArray *_wordLiveDelegates;
    WXSDKInstance *_wxInstance;
    YKJSONClient *_jsonClient;
    LSMtopService *_mtopService;
    AIACMsgHandler *_msgHandler;
    NSMutableDictionary *_mtopParsers;
    NSMutableDictionary *_mtopRequest;
    UIImageView *_imageView;
    LSLiveInfoModel *_fullInfo;
    LSLivePlayNewController *_vc;
    NSString *_liveid;
    AIASLiveSession *_aiaSession;
}

@property(retain, nonatomic) AIASLiveSession *aiaSession; // @synthesize aiaSession=_aiaSession;
@property(copy, nonatomic) NSString *liveid; // @synthesize liveid=_liveid;
@property(nonatomic) __weak LSLivePlayNewController *vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool landScape; // @synthesize landScape=_landScape;
@property(retain, nonatomic) LSLiveInfoModel *fullInfo; // @synthesize fullInfo=_fullInfo;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSMutableDictionary *mtopRequest; // @synthesize mtopRequest=_mtopRequest;
@property(retain, nonatomic) NSMutableDictionary *mtopParsers; // @synthesize mtopParsers=_mtopParsers;
@property(retain, nonatomic) AIACMsgHandler *msgHandler; // @synthesize msgHandler=_msgHandler;
@property(retain, nonatomic) LSMtopService *mtopService; // @synthesize mtopService=_mtopService;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(nonatomic) __weak WXSDKInstance *wxInstance; // @synthesize wxInstance=_wxInstance;
@property(retain, nonatomic) NSMutableArray *wordLiveDelegates; // @synthesize wordLiveDelegates=_wordLiveDelegates;
- (void).cxx_destruct;
- (void)removeWordLiveDelegate:(id)arg1;
- (void)addWordLiveDelegate:(id)arg1;
- (void)clearCache;
- (void)sendChat:(id)arg1;
- (void)sendShareToChat;
- (void)msgArrive:(id)arg1;
- (void)pmsgUnintialize;
- (void)pmsgInitialize:(id)arg1 wxInstance:(id)arg2;
- (void)mtopUnintialize;
- (void)mtopInitialize;
- (void)mtopRegisterParser:(id)arg1 parserClass:(Class)arg2;
- (id)mtopRequestFullInfoSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)mtopRequestFullInfo:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)mtopRequestFullInfo:(id)arg1 force:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)mtopRequestWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)requestWithParams:(id)arg1 sucess:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

