//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEngineRequestItem.h"

@class NSDictionary, NSString;

@interface YTEngineYoukuNewLiveReuqestItem : YTEngineRequestItem
{
    NSString *url;
    NSDictionary *parameterDict;
    NSDictionary *headerParameters;
    NSString *requestMethod;
    double timeOut;
    long long timestamp;
    long long preferedSequeue;
}

@property(nonatomic) long long preferedSequeue; // @synthesize preferedSequeue;
@property(nonatomic) long long timestamp; // @synthesize timestamp;
@property(nonatomic) double timeOut; // @synthesize timeOut;
@property(copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod;
@property(retain, nonatomic) NSDictionary *headerParameters; // @synthesize headerParameters;
@property(retain, nonatomic) NSDictionary *parameterDict; // @synthesize parameterDict;
@property(copy, nonatomic) NSString *url; // @synthesize url;
- (id)parserWithResponseData:(id)arg1;
- (void)parserResponseData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

