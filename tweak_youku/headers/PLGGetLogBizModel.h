//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLGBaseModel.h"

@class NSString;

@interface PLGGetLogBizModel : PLGBaseModel
{
    NSString *_showKind;
    NSString *_category;
    unsigned long long _pageNum;
    unsigned long long _pageLength;
    long long _sortType;
}

@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) unsigned long long pageLength; // @synthesize pageLength=_pageLength;
@property(nonatomic) unsigned long long pageNum; // @synthesize pageNum=_pageNum;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *showKind; // @synthesize showKind=_showKind;
- (void).cxx_destruct;
- (id)init;

@end

