//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalPostPO>, YKFModelResponsePagingPO;

@interface YKFStararrivalStarActivityPostPO : YKFAPIModel
{
    NSArray<YKFStararrivalPostPO> *_list;
    YKFModelResponsePagingPO *_pagingVO;
}

@property(retain, nonatomic) YKFModelResponsePagingPO *pagingVO; // @synthesize pagingVO=_pagingVO;
@property(retain, nonatomic) NSArray<YKFStararrivalPostPO> *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

