//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSArray<YKFAppjietuFandomInfoPO>, YKFAppjietuShareTemplatePO;

@interface YKFAppjietuGetEditInfoPO : YKFAPIModel
{
    NSArray<YKFAppjietuFandomInfoPO> *_recommendFandoms;
    YKFAppjietuShareTemplatePO *_shareTemplate;
    long long _sourceType;
    NSArray *_tagIds;
}

@property(retain, nonatomic) NSArray *tagIds; // @synthesize tagIds=_tagIds;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) YKFAppjietuShareTemplatePO *shareTemplate; // @synthesize shareTemplate=_shareTemplate;
@property(retain, nonatomic) NSArray<YKFAppjietuFandomInfoPO> *recommendFandoms; // @synthesize recommendFandoms=_recommendFandoms;
- (void).cxx_destruct;

@end

