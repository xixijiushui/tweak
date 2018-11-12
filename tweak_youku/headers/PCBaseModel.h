//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface PCBaseModel : TBJSONModel
{
    _Bool _forcePopRespectingPriority;
    _Bool _enqueue;
    NSString *_layerType;
    NSString *_domain;
    NSArray *_uris;
    long long _priority;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool enqueue; // @synthesize enqueue=_enqueue;
@property(nonatomic) _Bool forcePopRespectingPriority; // @synthesize forcePopRespectingPriority=_forcePopRespectingPriority;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *layerType; // @synthesize layerType=_layerType;
- (void).cxx_destruct;

@end
