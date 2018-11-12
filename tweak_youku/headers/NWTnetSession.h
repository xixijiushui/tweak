//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWSessionAuthenticationProtocol.h"

@class NSArray, NSMutableArray, NSMutableString, NSRecursiveLock, NSString, NWHostUrl, NWPointConnStat, NWSPDYSession, NWSessionConfiguration, NWTimer;

@interface NWTnetSession : NSObject <NWSessionAuthenticationProtocol>
{
    unsigned long long _policyIndx;
    int _sessionStatus;
    NWSPDYSession *_session;
    NSMutableArray *_wastes;
    NSMutableArray *_watings;
    NSMutableArray *_sendings;
    unsigned long long _netStatus;
    NSRecursiveLock *_lock;
    NWPointConnStat *_uts;
    double _createTimeGroup;
    double _createTimeSession;
    double _beginAuthTime;
    int _retryTimes;
    NWTimer *_timer;
    _Bool _stopped;
    NSMutableString *_errorTrace;
    id <NWTetSessionDelegate> _delegate;
    NWSessionConfiguration *_configuration;
    NWHostUrl *_hostUrl;
    unsigned long long _timeoutCount;
    NSArray *_policies;
}

+ (void)initialize;
@property(retain) NSArray *policies; // @synthesize policies=_policies;
@property unsigned long long timeoutCount; // @synthesize timeoutCount=_timeoutCount;
@property(retain, nonatomic) NWHostUrl *hostUrl; // @synthesize hostUrl=_hostUrl;
@property(retain, nonatomic) NWSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <NWTetSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didloadFinishing;
- (void)didLoadData:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (void)onAuthResponseError;
- (void)onAuthRequestError:(id)arg1;
- (void)onAuthSuccess;
- (_Bool)sendAuthRequest:(id)arg1;
- (id)scheme;
- (id)host;
- (void)reportOpenSessionStatus:(id)arg1 error:(id)arg2;
- (void)reachabilityChanged;
- (_Bool)sendCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3 sslIndex:(unsigned int)arg4;
- (void)waitingHandleFail:(id)arg1;
- (void)waitingHandleSuccess:(id)arg1;
- (void)removeURLConnection:(id)arg1;
- (void)issueURLConnection:(id)arg1;
- (void)processSessionFailureEvent:(id)arg1 withError:(id)arg2;
- (void)processSessionSuccessEvent:(id)arg1;
- (void)recvCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3;
- (void)close:(id)arg1 error:(id)arg2;
- (void)onConnFail:(id)arg1 error:(id)arg2;
- (void)onConnect:(id)arg1;
- (id)createPolicyWithLocalDNS;
- (void)resetUTData;
- (void)resetPoliciesWithLocalDNS:(_Bool)arg1;
- (_Bool)vaildSession;
- (id)currentIP;
- (id)currentPolicy;
- (id)nextAvailablePolicy;
- (void)createSessionWithPolicy:(id)arg1 withScene:(id)arg2 withRandownDelay:(unsigned int)arg3;
- (void)createSessionWithPolicy:(id)arg1 withScene:(id)arg2;
- (void)createSessionWithScene:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)stop:(id)arg1;
- (void)start;
- (void)onConnectTimeout;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
- (id)initWithHostUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
