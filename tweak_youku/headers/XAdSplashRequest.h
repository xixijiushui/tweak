//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAdJSONRequest.h"

@class NSString;

@interface XAdSplashRequest : XAdJSONRequest
{
    _Bool _isColdStart;
    _Bool _asyncSplash;
    NSString *_adext;
    NSString *_cachedNames;
}

@property(copy, nonatomic) NSString *cachedNames; // @synthesize cachedNames=_cachedNames;
@property(copy, nonatomic) NSString *adext; // @synthesize adext=_adext;
@property(nonatomic) _Bool asyncSplash; // @synthesize asyncSplash=_asyncSplash;
@property(nonatomic) _Bool isColdStart; // @synthesize isColdStart=_isColdStart;
- (void).cxx_destruct;
- (id)method;
- (id)url;
- (id)parameters;

@end

