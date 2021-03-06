//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEngineRequestItem.h"

@class NSDictionary, NSString;

@interface YTEngineYoukuLiveReuqestItem : YTEngineRequestItem
{
}

- (id)parserWithResponseData:(id)arg1;
- (void)parserResponseData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)p_getProtectedUrl:(id)arg1;
- (void)p_getLiveVideoInfo:(id *)arg1 fromResource:(id)arg2;
- (id)p_dencryptLiveInfos:(id)arg1;
- (id)p_parseJSONObject:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *headerParameters;
@property(retain, nonatomic) NSDictionary *parameterDict;
@property(copy, nonatomic) NSString *requestMethod;
@property(nonatomic) double timeOut;
@property(nonatomic) long long timestamp;
@property(copy, nonatomic) NSString *url;

@end

