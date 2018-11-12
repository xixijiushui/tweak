//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface SessionExpiredContext : NSObject <NSCopying>
{
    NSString *nick;
    NSString *msgCode;
    NSString *reason;
    NSString *apiName;
    NSString *apiVersion;
    NSString *timestamp;
    NSNumber *_errorCodeMsg;
    NSString *_serverDate;
}

@property(copy, nonatomic) NSString *serverDate; // @synthesize serverDate=_serverDate;
@property(retain, nonatomic) NSNumber *errorCodeMsg; // @synthesize errorCodeMsg=_errorCodeMsg;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName;
@property(retain, nonatomic) NSString *reason; // @synthesize reason;
@property(retain, nonatomic) NSString *msgCode; // @synthesize msgCode;
@property(retain, nonatomic) NSString *nick; // @synthesize nick;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asDictionary;
- (id)initWithNick:(id)arg1 msgCode:(id)arg2 reason:(id)arg3 apiName:(id)arg4 apiVersion:(id)arg5 errorCodeMsg:(id)arg6 date:(id)arg7;

@end

