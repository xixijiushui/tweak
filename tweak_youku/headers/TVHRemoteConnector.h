//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"
#import "TVHBaseDataConnectorDelegate.h"

@class NSMutableData, NSMutableDictionary, NSString, TVHBaseDataConnector;

@interface TVHRemoteConnector : NSObject <TVHBaseDataConnectorDelegate, NSStreamDelegate>
{
    _Bool _isConnectedWithDev;
    _Bool _isHasSendLogin;
    _Bool _isControlMode;
    int _startInputActionID;
    NSString *_startInputText;
    long long _mediaProjectionPort;
    NSString *_remoteDevUuid;
    NSString *_remoteDevModel;
    NSString *_remoteDevOS;
    NSString *_remoteAirplayPubName;
    long long _connKey;
    long long _version;
    long long _heartBeatSeq;
    NSMutableDictionary *_onlineModules;
    NSMutableDictionary *_moduleStateDelegates;
    NSMutableDictionary *_packageInfoRespDelegates;
    NSMutableDictionary *_categoryModuleStateDelegates;
    long long _reqCmdId;
    NSString *_logTag;
    TVHBaseDataConnector *_baseDataConnector;
    NSMutableData *_lastDataBuf;
    long long _curConnectCategory;
    long long _connectMagicValue;
    id <TVHRemoteConnectorDelegate> _connectorDelegate;
}

@property(nonatomic) __weak id <TVHRemoteConnectorDelegate> connectorDelegate; // @synthesize connectorDelegate=_connectorDelegate;
@property(nonatomic) long long connectMagicValue; // @synthesize connectMagicValue=_connectMagicValue;
@property(nonatomic) long long curConnectCategory; // @synthesize curConnectCategory=_curConnectCategory;
@property(retain, nonatomic) NSMutableData *lastDataBuf; // @synthesize lastDataBuf=_lastDataBuf;
@property(retain, nonatomic) TVHBaseDataConnector *baseDataConnector; // @synthesize baseDataConnector=_baseDataConnector;
@property(nonatomic) _Bool isControlMode; // @synthesize isControlMode=_isControlMode;
@property(retain, nonatomic) NSString *logTag; // @synthesize logTag=_logTag;
@property(nonatomic) long long reqCmdId; // @synthesize reqCmdId=_reqCmdId;
@property(retain, nonatomic) NSMutableDictionary *categoryModuleStateDelegates; // @synthesize categoryModuleStateDelegates=_categoryModuleStateDelegates;
@property(retain, nonatomic) NSMutableDictionary *packageInfoRespDelegates; // @synthesize packageInfoRespDelegates=_packageInfoRespDelegates;
@property(retain, nonatomic) NSMutableDictionary *moduleStateDelegates; // @synthesize moduleStateDelegates=_moduleStateDelegates;
@property(retain, nonatomic) NSMutableDictionary *onlineModules; // @synthesize onlineModules=_onlineModules;
@property(nonatomic) long long heartBeatSeq; // @synthesize heartBeatSeq=_heartBeatSeq;
@property(nonatomic) _Bool isHasSendLogin; // @synthesize isHasSendLogin=_isHasSendLogin;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long connKey; // @synthesize connKey=_connKey;
@property(nonatomic) _Bool isConnectedWithDev; // @synthesize isConnectedWithDev=_isConnectedWithDev;
@property(retain) NSString *remoteAirplayPubName; // @synthesize remoteAirplayPubName=_remoteAirplayPubName;
@property(retain) NSString *remoteDevOS; // @synthesize remoteDevOS=_remoteDevOS;
@property(retain) NSString *remoteDevModel; // @synthesize remoteDevModel=_remoteDevModel;
@property(retain) NSString *remoteDevUuid; // @synthesize remoteDevUuid=_remoteDevUuid;
@property(readonly, nonatomic) long long mediaProjectionPort; // @synthesize mediaProjectionPort=_mediaProjectionPort;
@property(nonatomic) int startInputActionID; // @synthesize startInputActionID=_startInputActionID;
@property(retain) NSString *startInputText; // @synthesize startInputText=_startInputText;
- (void).cxx_destruct;
- (void)sendHeartbeat;
- (long long)queryRemoteSystemPropInfo:(id)arg1 defaultValue:(id)arg2;
- (long long)queryRemoteFilePathInfo:(id)arg1;
- (long long)fetchScreenImage:(long long)arg1 imageW:(long long)arg2 imageH:(long long)arg3 ratio:(double)arg4;
- (long long)queryRemotePackageInfo:(id)arg1;
- (void)sendDataToRemoteModule:(id)arg1 sendData:(id)arg2;
- (void)removeModuleById:(long long)arg1 removeType:(long long)arg2;
- (void)addModuleByName:(id)arg1 moduleInfo:(id)arg2;
- (void)notifyAllModuleOfflineForCategoryIf:(id)arg1;
- (void)notifyAllModuleOnlineForCategoryIf:(id)arg1;
- (void)disconnectRemoteModule:(long long)arg1;
- (void)notifyAllModulesOffline;
- (void)notifyModuleOffline:(id)arg1 removeType:(long long)arg2;
- (void)connectRemoteModule:(long long)arg1;
- (void)notifyModuleOnline:(id)arg1;
- (id)getModuleInfoByID:(long long)arg1;
- (id)getModuleInfo:(id)arg1;
- (_Bool)isModuleOnline:(id)arg1;
- (void)closeRemoteModulesByCategory:(id)arg1;
- (void)openRemoteModulesByCategory:(id)arg1 delgate:(id)arg2;
- (void)closeRemoteModule:(id)arg1;
- (void)openRemoteModule:(id)arg1 delgate:(id)arg2;
- (void)remoteLaunch:(int)arg1 launchAction:(id)arg2 extraStr:(id)arg3;
- (void)sendTapEvent;
- (void)sendKeyEvent:(long long)arg1;
- (void)updateTextInput:(id)arg1 curCursorPos:(long long)arg2;
- (void)finishTextInput;
- (_Bool)isLanType;
- (long long)getRemoteControlVersion;
- (id)getAirplayPubName;
- (id)getConnectedDevOS;
- (id)getConnectedDevModel;
- (id)getConnectedDevUuid;
- (_Bool)isConnected:(id)arg1;
- (_Bool)isConnected;
- (void)sendLoginPacket;
- (void)connectToServer;
- (id)createResponsePacket:(int)arg1;
- (void)processForIme:(_Bool)arg1 remoteText:(id)arg2 hintText:(id)arg3 inputType:(int)arg4;
- (void)processForIme:(_Bool)arg1;
- (void)updateName:(id)arg1;
- (void)processMessage:(struct tagTVHRemoteControlPacket *)arg1;
- (void)notifyConnectStateToMainThread:(long long)arg1 name:(id)arg2;
- (void)onSendHeartBeatPacket;
- (void)onProcessInputData:(id)arg1;
- (void)onCloseStream;
- (void)onOpenStream;
- (void)onHandleStreamEvent:(unsigned long long)arg1 isInput:(_Bool)arg2;
- (int)getDstPort;
- (id)getDstIP;
- (void)sendPacket:(id)arg1;
- (void)startConnectForInfo:(id)arg1 withPort:(int)arg2;
- (void)startConnectForInfo:(id)arg1;
- (void)startConnectEx:(id)arg1 withCategory:(long long)arg2 withMagicValue:(long long)arg3;
- (void)stopConnect;
- (void)reconnect;
- (void)startConnect:(id)arg1 withPort:(int)arg2;
- (void)startConnect:(id)arg1;
- (void)dealloc;
- (void)innerInit:(id)arg1;
- (id)initWithDataConnector:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

