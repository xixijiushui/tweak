//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEngineRequestItem.h"

@class NSDictionary, NSString;

@interface YTEngineYoukuAdRequestItem : YTEngineRequestItem
{
}

- (void)parserWithResponseDictionary:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)parserWithResponseData:(id)arg1;
- (void)parserResponseData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) NSDictionary *cookie;
@property(retain, nonatomic) NSDictionary *headerParameters;
@property(retain, nonatomic) NSDictionary *parameterDict;
@property(copy, nonatomic) NSString *requestMethod;
@property(copy, nonatomic) NSString *url;

@end

