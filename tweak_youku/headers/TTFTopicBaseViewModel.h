//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@interface TTFTopicBaseViewModel : NSObject
{
    _Bool _hasMore;
    NSError *_error;
    NSArray *_topics;
    NSString *_searchString;
    long long _fandomId;
    long long _pages;
}

@property(nonatomic) long long pages; // @synthesize pages=_pages;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)addTestModel;
- (void)loadData;
- (void)loadMoreData;
- (void)refreshData;
- (id)init;

@end

