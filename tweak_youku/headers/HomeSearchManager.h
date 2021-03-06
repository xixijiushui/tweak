//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UIView<HomeSearchView>, YKHomeToolModel;

@interface HomeSearchManager : NSObject
{
    UIView<HomeSearchView> *_view;
    YKHomeToolModel *_model;
    NSMutableDictionary *_searchIndexDic;
    NSString *_searchString;
}

@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSMutableDictionary *searchIndexDic; // @synthesize searchIndexDic=_searchIndexDic;
@property(retain, nonatomic) YKHomeToolModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIView<HomeSearchView> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)updateKeywordWithRotated:(_Bool)arg1;
- (void)updateModel:(id)arg1;
- (id)keyword:(_Bool)arg1;
- (void)gotoSearch;

@end

