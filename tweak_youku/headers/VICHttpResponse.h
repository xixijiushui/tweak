//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@interface VICHttpResponse : NSObject
{
    int _httpResponseCode;
    NSError *_error;
    NSDictionary *_json;
}

@property(retain, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
- (void).cxx_destruct;

@end

