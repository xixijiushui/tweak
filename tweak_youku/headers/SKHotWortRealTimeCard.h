//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKViewTypeBaseCard.h"

#import "SearchHotWordsCellDelegate.h"
#import "SearchHotWordsHeaderCellDelegate.h"

@class NSArray, NSString, SKSearchHotWordsMoreModel, SearchRecommandCardsController;

@interface SKHotWortRealTimeCard : SKViewTypeBaseCard <SearchHotWordsCellDelegate, SearchHotWordsHeaderCellDelegate>
{
    NSArray *_hotsWordsArray;
    SKSearchHotWordsMoreModel *_moreModel;
}

@property(retain, nonatomic) SKSearchHotWordsMoreModel *moreModel; // @synthesize moreModel=_moreModel;
@property(retain, nonatomic) NSArray *hotsWordsArray; // @synthesize hotsWordsArray=_hotsWordsArray;
- (void).cxx_destruct;
- (void)cardsController:(id)arg1 didSelectCardHeaderInTableView:(id)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardHeaderInTableView:(id)arg3;
- (id)cardsController:(id)arg1 cellIdentifierForCardHeaderInTableView:(id)arg2;
- (Class)cardsController:(id)arg1 cellClassForCardHeaderInTableView:(id)arg2;
- (double)cardsController:(id)arg1 heightForCardHeaderInTableView:(id)arg2;
- (_Bool)cardsController:(id)arg1 shouldShowCardHeaderInTableView:(id)arg2;
- (void)notifyHotWordsMoreClicked:(id)arg1;
- (void)notifyHotWordsClicked:(id)arg1 index:(long long)arg2;
- (void)cardsController:(id)arg1 didSelectCardContentAtIndex:(long long)arg2;
- (id)cardsController:(id)arg1 cellIdentifierForCardContentAtIndex:(long long)arg2;
- (Class)cardsController:(id)arg1 cellClassForCardContentAtIndex:(long long)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (double)cardsController:(id)arg1 rowHeightForCardContentAtIndex:(long long)arg2;
- (long long)cardsController:(id)arg1 rowCountForCardContentInTableView:(id)arg2;
- (void)reloadSelfData:(id)arg1;
- (void)dealloc;
- (void)setCardContext:(id)arg1;

// Remaining properties
@property(nonatomic) __weak SearchRecommandCardsController *cardsController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
