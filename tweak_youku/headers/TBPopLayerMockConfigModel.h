//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary;

@interface TBPopLayerMockConfigModel : TBJSONModel
{
    _Bool _enable;
    NSDictionary *_config;
}

@property(copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;

@end

