//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVModelObject.h"

@class NSString;

@interface WVConfigModel : WVModelObject
{
    NSString *_version;
    unsigned long long _env;
}

+ (id)keyPathsForProperties;
@property(readonly, nonatomic) unsigned long long env; // @synthesize env=_env;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)dumpProperty:(id)arg1 withValue:(id)arg2 maxLength:(unsigned long long)arg3;
- (void)setEnv:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (id)init;

@end

