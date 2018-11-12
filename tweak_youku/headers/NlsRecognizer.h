//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NlsAsrConnectorDelegate.h"
#import "NlsVoiceDetectorDelegate.h"
#import "NlsVoiceRecorderDelegate.h"

@class NSDate, NSMutableData, NSString, NlsAsrConnector, NlsAsrPacketEncoder, NlsReachability, NlsRequest, NlsVoiceDetector, NlsVoiceLogger, NlsVoiceRecorder;

@interface NlsRecognizer : NSObject <NlsVoiceRecorderDelegate, NlsAsrConnectorDelegate, NlsVoiceDetectorDelegate>
{
    struct dispatch_queue_s *_bufferQueue;
    _Bool _cancelOnAppEntersBackground;
    _Bool _enableUserCancelCallback;
    _Bool _enableVoiceLog;
    _Bool _enableSSL;
    int _mode;
    float _minimalSpeechLength;
    int _state;
    id <NlsRecognizerDelegate> _delegate;
    NlsRequest *_nlsRequest;
    NSString *_appKey;
    NSString *_server;
    NlsVoiceRecorder *_voiceRecorder;
    NlsVoiceDetector *_voiceDetector;
    NlsAsrConnector *_asrConnector;
    NSDate *_lastStartTime;
    NlsVoiceLogger *_logger;
    NSMutableData *_recordedData;
    NlsAsrPacketEncoder *_packetBuffer;
    NlsReachability *_reachability;
}

+ (_Bool)isServiceAvailableWithServiceName:(id)arg1;
+ (_Bool)isServiceAvailable;
+ (void)configureAppKeys:(id)arg1 appSecrets:(id)arg2 serviceURL:(id)arg3 statusURL:(id)arg4 deviceId:(id)arg5;
+ (void)configureAppKey:(id)arg1 appSecret:(id)arg2 serviceURL:(id)arg3 statusURL:(id)arg4 deviceId:(id)arg5;
+ (void)configureAppKey:(id)arg1 appSecret:(id)arg2 serviceURL:(id)arg3;
+ (void)configureAppKey:(id)arg1 appSecret:(id)arg2;
+ (void)configureAppKeys:(id)arg1;
+ (void)configureAppKey:(id)arg1;
+ (void)configure;
@property(retain, nonatomic) NlsReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NlsAsrPacketEncoder *packetBuffer; // @synthesize packetBuffer=_packetBuffer;
@property(retain, nonatomic) NSMutableData *recordedData; // @synthesize recordedData=_recordedData;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NlsVoiceLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSDate *lastStartTime; // @synthesize lastStartTime=_lastStartTime;
@property(retain, nonatomic) NlsAsrConnector *asrConnector; // @synthesize asrConnector=_asrConnector;
@property(retain, nonatomic) NlsVoiceDetector *voiceDetector; // @synthesize voiceDetector=_voiceDetector;
@property(retain, nonatomic) NlsVoiceRecorder *voiceRecorder; // @synthesize voiceRecorder=_voiceRecorder;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NlsRequest *nlsRequest; // @synthesize nlsRequest=_nlsRequest;
@property(nonatomic) float minimalSpeechLength; // @synthesize minimalSpeechLength=_minimalSpeechLength;
@property(nonatomic) _Bool enableSSL; // @synthesize enableSSL=_enableSSL;
@property(nonatomic) _Bool enableVoiceLog; // @synthesize enableVoiceLog=_enableVoiceLog;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool enableUserCancelCallback; // @synthesize enableUserCancelCallback=_enableUserCancelCallback;
@property(nonatomic) _Bool cancelOnAppEntersBackground; // @synthesize cancelOnAppEntersBackground=_cancelOnAppEntersBackground;
@property(nonatomic) __weak id <NlsRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_invokeDelegateDidCompleteRecognizingWithResult:(id)arg1 error:(id)arg2;
- (id)_createInvocationWithTarget:(id)arg1 selector:(SEL)arg2 retainArguments:(_Bool)arg3;
- (void)voiceDetected:(id)arg1;
- (void)voiceDidStop:(id)arg1;
- (void)voiceDidStart;
- (void)connectorDidFailWithError:(id)arg1;
- (void)connectorDidStopRecieveTTSData;
- (void)connectorDidStartRecieveTTSData;
- (void)connectorDidCompleteWithVoiceData:(id)arg1;
- (void)connectorDidCompleteWithResult:(id)arg1;
- (void)voiceDidFail:(id)arg1;
- (void)voiceRecorded:(id)arg1;
- (void)recorderDidStop;
- (void)recorderDidStart;
- (void)didStopRecieveTTSData;
- (void)didStartRecieveTTSData;
- (void)_completeWithVoiceData:(id)arg1 error:(id)arg2;
- (void)_completeWithResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)sendText;
- (_Bool)isStarted;
- (void)cancel;
- (void)stop;
- (_Bool)start;
- (void)_appEnterForeground:(id)arg1;
- (void)_appResignActive:(id)arg1;
- (void)_unregisterForBackgroundNotifications;
- (void)_registerForBackgroundNotifications;
- (void)setAudioSessionActiveApiEnable:(_Bool)arg1;
- (void)setVadAutoStopTimeInterval:(double)arg1;
- (void)setMaxRecordTime:(double)arg1;
- (void)setMinRecordTime:(double)arg1;
- (void)setVad:(_Bool)arg1;
- (id)initWithAppkey:(id)arg1 appSecret:(id)arg2;
- (id)initWithNlsRequest:(id)arg1 svcURL:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

