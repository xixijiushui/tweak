//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFModelRequestPagingPO;

@interface YKFStararrivalDanmukuCommentListRO : YKFAPIModel
{
    long long _danmuId;
    YKFModelRequestPagingPO *_page;
    long long _starArrivalId;
}

@property(nonatomic) long long starArrivalId; // @synthesize starArrivalId=_starArrivalId;
@property(retain, nonatomic) YKFModelRequestPagingPO *page; // @synthesize page=_page;
@property(nonatomic) long long danmuId; // @synthesize danmuId=_danmuId;
- (void).cxx_destruct;

@end

