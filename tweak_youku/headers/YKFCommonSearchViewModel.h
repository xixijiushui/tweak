//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class YKFSearchHistoryListViewModel, YKFSearchHotWordsViewModel;

@interface YKFCommonSearchViewModel : ALMBaseViewModel
{
    YKFSearchHistoryListViewModel *_searchHistoryListViewModel;
    YKFSearchHotWordsViewModel *_searchHotWordsViewModel;
}

@property(retain, nonatomic) YKFSearchHotWordsViewModel *searchHotWordsViewModel; // @synthesize searchHotWordsViewModel=_searchHotWordsViewModel;
@property(retain, nonatomic) YKFSearchHistoryListViewModel *searchHistoryListViewModel; // @synthesize searchHistoryListViewModel=_searchHistoryListViewModel;
- (void).cxx_destruct;
- (id)loadData;
- (id)init;

@end
