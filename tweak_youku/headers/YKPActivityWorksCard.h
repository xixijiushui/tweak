//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKPBaseCard.h"

#import "YKPHorizontalListsViewDelegate.h"

@class NSArray, NSString, YKPHorizontalListsView;

@interface YKPActivityWorksCard : YKPBaseCard <YKPHorizontalListsViewDelegate>
{
    YKPHorizontalListsView *_listsView;
    NSArray *_tabsArray;
}

+ (float)heightWithContext:(id)arg1;
@property(retain, nonatomic) NSArray *tabsArray; // @synthesize tabsArray=_tabsArray;
@property(retain, nonatomic) YKPHorizontalListsView *listsView; // @synthesize listsView=_listsView;
- (void).cxx_destruct;
- (void)listsView:(id)arg1 didScrollToIndex:(unsigned long long)arg2;
- (id)listsView:(id)arg1 viewForIndex:(unsigned long long)arg2;
- (unsigned long long)viewCountsForListsView:(id)arg1;
- (id)currentCollectionView;
- (void)setupWithContext:(id)arg1;
- (void)layoutSubviews;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

