//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface YKShorVideoImageTextDataSource : NSObject
{
    _Bool _hasMore;
    NSString *_pageNum;
    NSString *_pageCount;
    NSArray *_articleList;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *articleList; // @synthesize articleList=_articleList;
@property(retain, nonatomic) NSString *pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NSString *pageNum; // @synthesize pageNum=_pageNum;
- (void).cxx_destruct;
- (void)setDataaArray:(id)arg1;
- (id)initWithItemDatas:(id)arg1;

@end
