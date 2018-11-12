//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LSCMSHomeModel.h"

#import "LSCMSHomeMorePaging.h"
#import "LSParser.h"

@class NSArray, NSString;

@interface LSCMSHomeChannelModel : LSCMSHomeModel <LSCMSHomeMorePaging, LSParser>
{
    _Bool _hasNext;
    long long _total;
    long long _pageCount;
    long long _page;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) long long total; // @synthesize total=_total;
- (void).cxx_destruct;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
