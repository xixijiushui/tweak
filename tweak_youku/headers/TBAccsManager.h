//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccsProtocol.h"

@class DataChannel, NSString, TBAccsConfiguration, TBAccsReceiveAndCallBackCenter, TBAccsRequestQueue;

@interface TBAccsManager : NSObject <AccsProtocol>
{
    DataChannel *_dataChannel;
    _Bool _bindApp;
    _Bool _bindService;
    _Bool _supportLocalDNS;
    _Bool _userCustomHost;
    TBAccsReceiveAndCallBackCenter *_accsReceiveAndCallBackCenter;
    TBAccsRequestQueue *_accsRequestQueue;
    NSString *_host;
    TBAccsConfiguration *_configuration;
}

+ (_Bool)isNetworkReachable;
+ (id)responseDataabnormal:(id)arg1 serviceID:(id)arg2 parameters:(id)arg3;
+ (_Bool)isChannelError:(int)arg1 extP:(id)arg2;
+ (id)accsManagerByHost:(id)arg1;
+ (void)bindServiceWithId:(id)arg1 callBack:(CDUnknownBlockType)arg2 receviceDataBlock:(CDUnknownBlockType)arg3;
+ (id)centerAccsManager;
+ (void)initializeCallback;
+ (id)currentDefaultAccsHost;
+ (void)setCenterHost:(id)arg1;
+ (void)registerNotificationCallback:(id)arg1 withClassName:(id)arg2;
@property(nonatomic) _Bool userCustomHost; // @synthesize userCustomHost=_userCustomHost;
@property(nonatomic) _Bool supportLocalDNS; // @synthesize supportLocalDNS=_supportLocalDNS;
@property(readonly, nonatomic) TBAccsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) TBAccsRequestQueue *accsRequestQueue; // @synthesize accsRequestQueue=_accsRequestQueue;
@property(readonly, nonatomic) TBAccsReceiveAndCallBackCenter *accsReceiveAndCallBackCenter; // @synthesize accsReceiveAndCallBackCenter=_accsReceiveAndCallBackCenter;
- (void).cxx_destruct;
- (void)serverRealUNBindServiceID:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)serverRealBindServiceID:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)cancelRequestByDataID:(id)arg1;
- (id)sendRequestWithContext:(id)arg1 error:(id *)arg2;
- (id)sendRequestWithData:(id)arg1 serviceId:(id)arg2 userId:(id)arg3 routID:(id)arg4 timeout:(double)arg5 callBack:(CDUnknownBlockType)arg6;
- (id)sendRequestWithData:(id)arg1 serviceId:(id)arg2 userId:(id)arg3 routID:(id)arg4 otherParameters:(id)arg5 callBack:(CDUnknownBlockType)arg6 error:(id *)arg7;
- (id)sendRequestWithData:(id)arg1 serviceId:(id)arg2 userId:(id)arg3 routID:(id)arg4 otherParameters:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)unbindServiceWithServiceId:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)bindServiceWithServiceId:(id)arg1 callBack:(CDUnknownBlockType)arg2 receviceDataBlock:(CDUnknownBlockType)arg3 syn:(_Bool)arg4;
- (void)bindServiceWithServiceId:(id)arg1 callBack:(CDUnknownBlockType)arg2 receviceDataBlock:(CDUnknownBlockType)arg3;
- (void)unbindUserWithUserId:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)bindUserWithUserId:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)unbindAppWithResultsBlock:(CDUnknownBlockType)arg1;
- (void)bindAppWithAppleToken:(id)arg1 callBack:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool canRequest;
- (void)startAccs;
- (void)dealloc;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

