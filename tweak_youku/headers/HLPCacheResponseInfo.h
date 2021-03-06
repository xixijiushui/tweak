//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HLPCacheMatchInfo, NSDictionary, NSMutableURLRequest, NSString, NSURLResponse;

@interface HLPCacheResponseInfo : NSObject
{
    NSString *_source;
    double _timeStamp;
    NSString *_key;
    long long _type;
    HLPCacheMatchInfo *_mathInfo;
    NSDictionary *_responseDic;
    NSString *_responseString;
    NSURLResponse *_response;
    NSMutableURLRequest *_request;
}

+ (id)createWithRequestInfo:(id)arg1 responseDic:(id)arg2 responseString:(id)arg3 response:(id)arg4 request:(id)arg5;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSDictionary *responseDic; // @synthesize responseDic=_responseDic;
@property(retain, nonatomic) HLPCacheMatchInfo *mathInfo; // @synthesize mathInfo=_mathInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)init;

@end

