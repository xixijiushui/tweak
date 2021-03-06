//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface RemoteDebugMessagePacket : NSObject
{
    NSString *_type;
    NSString *_version;
    NSMutableDictionary *_headers;
    NSMutableDictionary *_data;
    NSDictionary *_forward;
}

@property(copy, nonatomic) NSDictionary *forward; // @synthesize forward=_forward;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extraInfo;
@property(copy, nonatomic) NSDictionary *tokenInfo;
@property(copy, nonatomic) NSString *tokenType;
@property(copy, nonatomic) NSString *uploadId;
@property(copy, nonatomic) NSString *debugType;
@property(copy, nonatomic) NSString *bizType;
@property(copy, nonatomic) NSString *platform;
@property(copy, nonatomic) NSString *requestId;
@property(copy, nonatomic) NSString *sessionId;
@property(copy, nonatomic) NSString *deviceId;
@property(copy, nonatomic) NSString *opCode;
@property(copy, nonatomic) NSString *appId;
@property(copy, nonatomic) NSString *appKey;
- (id)serializeToJSONString;
- (id)initWithJson:(id)arg1;
- (id)init;

@end

