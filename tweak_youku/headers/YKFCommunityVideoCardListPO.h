//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityCardItemPO>, NSString;

@interface YKFCommunityVideoCardListPO : YKFAPIModel
{
    _Bool _hasMore;
    NSArray<YKFCommunityCardItemPO> *_items;
    long long _page;
    NSString *_reqId;
}

@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSArray<YKFCommunityCardItemPO> *items; // @synthesize items=_items;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;

@end

