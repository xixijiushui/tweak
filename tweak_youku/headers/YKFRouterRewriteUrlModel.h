//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKFRouterRewriteUrlModel : NSObject
{
    _Bool _rewriteValid;
    NSString *_startVersion;
    NSString *_endVersion;
    NSString *_oldUrl;
    NSString *_rewriteUrl;
    NSString *_abTestUrl;
    NSString *_component;
    NSString *_module;
}

@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(nonatomic) _Bool rewriteValid; // @synthesize rewriteValid=_rewriteValid;
@property(copy, nonatomic) NSString *abTestUrl; // @synthesize abTestUrl=_abTestUrl;
@property(copy, nonatomic) NSString *rewriteUrl; // @synthesize rewriteUrl=_rewriteUrl;
@property(copy, nonatomic) NSString *oldUrl; // @synthesize oldUrl=_oldUrl;
@property(copy, nonatomic) NSString *endVersion; // @synthesize endVersion=_endVersion;
@property(copy, nonatomic) NSString *startVersion; // @synthesize startVersion=_startVersion;
- (void).cxx_destruct;
- (_Bool)isValid;
@property(readonly, nonatomic) _Bool abTestEnable;
- (id)initWithDictionary:(id)arg1;

@end

