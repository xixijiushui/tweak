//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSaintseiyaBasePageDataDTO.h"

@class NSArray, NSArray<YKFSaintseiyaSearchItemDTO>, YKFSaintseiyaGlobalContextDTO;

@interface YKFSaintseiyaSearchListPageDTO : YKFSaintseiyaBasePageDataDTO
{
    _Bool _hasMore;
    YKFSaintseiyaGlobalContextDTO *_context;
    NSArray<YKFSaintseiyaSearchItemDTO> *_items;
    NSArray *_keywords;
}

@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSArray<YKFSaintseiyaSearchItemDTO> *items; // @synthesize items=_items;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) YKFSaintseiyaGlobalContextDTO *context; // @synthesize context=_context;
- (void).cxx_destruct;

@end
