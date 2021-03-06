//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface VICHttpRequest : NSObject
{
    _Bool _cache;
    NSString *_url;
    NSString *_method;
    NSDictionary *_parameters;
    NSDictionary *_headers;
    double _timeout;
}

@property(nonatomic) _Bool cache; // @synthesize cache=_cache;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

