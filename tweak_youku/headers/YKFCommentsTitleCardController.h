//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailCardController.h"

@class YKFCommentsTitleCardViewModel;

@interface YKFCommentsTitleCardController : DetailCardController
{
    YKFCommentsTitleCardViewModel *_viewModel;
}

@property(retain, nonatomic) YKFCommentsTitleCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (double)cardsController:(id)arg1 heightForCardSpacingInTableView:(id)arg2;
- (id)cardsController:(id)arg1 cellIdentifierForCardContentAtIndex:(long long)arg2;
- (Class)cardsController:(id)arg1 cellClassForCardContentAtIndex:(long long)arg2;
- (double)cardsController:(id)arg1 rowHeightForCardContentAtIndex:(long long)arg2;
- (long long)cardsController:(id)arg1 rowCountForCardContentInTableView:(id)arg2;
- (void)initTitleViewData;
- (void)cardsController:(id)arg1 didReceiveCardsInfo:(id)arg2;
- (void)didFinishInitConfigurationInCardsController:(id)arg1;
- (id)init;

@end
