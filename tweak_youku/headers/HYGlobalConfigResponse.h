//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserResponse.h"

@class HYGlobalConfigs;

@interface HYGlobalConfigResponse : HYBaseUserResponse
{
    HYGlobalConfigs *_globalConfigs;
}

@property(retain, nonatomic) HYGlobalConfigs *globalConfigs; // @synthesize globalConfigs=_globalConfigs;
- (void).cxx_destruct;
- (void)mergeFromContentsDict:(id)arg1;

@end

