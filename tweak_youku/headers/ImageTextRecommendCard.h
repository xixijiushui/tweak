//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardController.h"

@class KKFeedRecommendComponent, NSMutableArray;

@interface ImageTextRecommendCard : CardController
{
    KKFeedRecommendComponent *_component;
    NSMutableArray *_exposureArray;
}

@property(retain, nonatomic) NSMutableArray *exposureArray; // @synthesize exposureArray=_exposureArray;
@property(retain, nonatomic) KKFeedRecommendComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (id)cardsController:(id)arg1 exposureforCardContentAtIndex:(long long)arg2;
- (_Bool)cardsController:(id)arg1 shouldShowCardFooterInTableView:(id)arg2;
- (double)cardsController:(id)arg1 heightForCardSpacingInTableView:(id)arg2;
- (void)cardsController:(id)arg1 didEndDisplayingCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (void)cardsController:(id)arg1 willDisplayCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (void)cardsController:(id)arg1 didSelectCardContentAtIndex:(long long)arg2;
- (id)cardsController:(id)arg1 cellIdentifierForCardContentAtIndex:(long long)arg2;
- (Class)cardsController:(id)arg1 cellClassForCardContentAtIndex:(long long)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (double)cardsController:(id)arg1 rowHeightForCardContentAtIndex:(long long)arg2;
- (long long)cardsController:(id)arg1 rowCountForCardContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInCardsController:(id)arg1;

@end

