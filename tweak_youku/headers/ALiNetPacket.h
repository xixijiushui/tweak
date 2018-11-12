//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALiNetPacket : NSObject
{
    long long _netType;
    unsigned long long _retryTime;
    long long _priority;
    unsigned long long _retryCount;
    long long _status;
    CDUnknownBlockType _successAction;
    CDUnknownBlockType _failAction;
}

@property(copy, nonatomic) CDUnknownBlockType failAction; // @synthesize failAction=_failAction;
@property(copy, nonatomic) CDUnknownBlockType successAction; // @synthesize successAction=_successAction;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long retryTime; // @synthesize retryTime=_retryTime;
@property(nonatomic) long long netType; // @synthesize netType=_netType;
- (void).cxx_destruct;
- (void)trackActionSuccess:(_Bool)arg1 error:(id)arg2 duration:(double)arg3;
- (_Bool)sendPacket;
- (_Bool)isValued;
- (_Bool)filterNewPacket:(id)arg1;
- (_Bool)conbineWaitingPacket:(id)arg1;
- (void)retryAction:(unsigned long long)arg1;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)init;

@end
