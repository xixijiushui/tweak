//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFTaskPageNotifyPO : YKFAPIModel
{
    NSString *_content;
    NSString *_tdescription;
    long long _expireTime;
    long long _loginState;
    NSString *_notifyId;
    NSString *_notifyType;
    long long _serverTime;
    long long _startTime;
    long long _times;
}

@property(nonatomic) long long times; // @synthesize times=_times;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSString *notifyType; // @synthesize notifyType=_notifyType;
@property(retain, nonatomic) NSString *notifyId; // @synthesize notifyId=_notifyId;
@property(nonatomic) long long loginState; // @synthesize loginState=_loginState;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
