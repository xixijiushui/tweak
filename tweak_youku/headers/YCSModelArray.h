//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray;

@interface YCSModelArray : NSObject
{
    _Bool _pullToRefreshFlag;
    _Bool _isRefreshing;
    _Bool _more;
    _Bool _isRefreshed;
    NSMutableArray *_data;
    unsigned long long _page;
    unsigned long long _total;
    unsigned long long _pageSize;
    unsigned long long _last_item_id;
    unsigned long long _newItemIndex;
    long long _newItemCount;
    long long _arrayInSection;
    NSError *_error;
    CDUnknownBlockType _appendingObjectCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType appendingObjectCallBack; // @synthesize appendingObjectCallBack=_appendingObjectCallBack;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isRefreshed; // @synthesize isRefreshed=_isRefreshed;
@property(nonatomic) long long arrayInSection; // @synthesize arrayInSection=_arrayInSection;
@property(nonatomic) long long newItemCount; // @synthesize newItemCount=_newItemCount;
@property(nonatomic) unsigned long long newItemIndex; // @synthesize newItemIndex=_newItemIndex;
@property(nonatomic) unsigned long long last_item_id; // @synthesize last_item_id=_last_item_id;
@property(nonatomic, getter=hasMoreResult) _Bool more; // @synthesize more=_more;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) _Bool pullToRefreshFlag; // @synthesize pullToRefreshFlag=_pullToRefreshFlag;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)parserPageInfo:(unsigned long long)arg1;
- (id)appendingObjects:(id)arg1;
- (void)removeAllObjects;
- (id)init;

@end

