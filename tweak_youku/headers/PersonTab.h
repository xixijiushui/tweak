//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSString;

@interface PersonTab : ViewTypeBaseModel
{
    _Bool _is_default;
    _Bool _hasMoreData;
    long long _count;
    NSString *_title;
    NSString *_key;
    long long _pageIndex;
}

@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool is_default; // @synthesize is_default=_is_default;
- (void).cxx_destruct;
- (_Bool)isPointNews;
- (id)initWithDic:(id)arg1;

@end
