//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKVIPVipexclusive, YKVIPVipinfo;

@interface YKVIPUserinfo : NSObject
{
    _Bool _isCache;
    YKVIPVipinfo *_vipInfo;
    YKVIPVipexclusive *_vipExclusive;
}

+ (id)initModelWithDict:(id)arg1;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) YKVIPVipexclusive *vipExclusive; // @synthesize vipExclusive=_vipExclusive;
@property(retain, nonatomic) YKVIPVipinfo *vipInfo; // @synthesize vipInfo=_vipInfo;
- (void).cxx_destruct;

@end

