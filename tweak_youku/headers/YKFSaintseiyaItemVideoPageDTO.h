//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFSaintseiyaHomePageDataDTO>;

@interface YKFSaintseiyaItemVideoPageDTO : YKFAPIModel
{
    _Bool _hasMore;
    NSArray<YKFSaintseiyaHomePageDataDTO> *_pageResult;
}

@property(retain, nonatomic) NSArray<YKFSaintseiyaHomePageDataDTO> *pageResult; // @synthesize pageResult=_pageResult;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;

@end

