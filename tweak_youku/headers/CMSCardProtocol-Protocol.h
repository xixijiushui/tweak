//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CardsController, NSArray, NSDictionary, NSString, UIView;

@protocol CMSCardProtocol

@optional
- (NSArray *)cardsController:(CardsController *)arg1 exposeStatisInfoForCardContentAtIndex:(long long)arg2;
- (_Bool)cardsController:(CardsController *)arg1 canBecomeFirstFocusForCardContentAtIndex:(long long)arg2;
- (void)cardsController:(CardsController *)arg1 didEndScrollingVisibleView:(UIView *)arg2 forCardContentAtIndex:(long long)arg3 params:(NSDictionary *)arg4;
- (void)cardsController:(CardsController *)arg1 didEndScrollingVisibleCardInContainerView:(UIView *)arg2 params:(NSDictionary *)arg3;
- (void)cardsController:(CardsController *)arg1 reuseView:(UIView *)arg2 forCardSpacingInContainerView:(UIView *)arg3;
- (UIView *)cardsController:(CardsController *)arg1 viewForCardSpacingInContainerView:(UIView *)arg2;
- (NSString *)cardsController:(CardsController *)arg1 reuseIdentifierForCardSpacingInContainerView:(UIView *)arg2;
- (_Bool)cardsController:(CardsController *)arg1 supportCollectionViewForCardSpacingInContainerView:(UIView *)arg2;
- (void)cardsController:(CardsController *)arg1 reuseView:(UIView *)arg2 forCardFooterInContainerView:(UIView *)arg3;
- (UIView *)cardsController:(CardsController *)arg1 viewForCardFooterInContainerView:(UIView *)arg2;
- (NSString *)cardsController:(CardsController *)arg1 reuseIdentifierForCardFooterInContainerView:(UIView *)arg2;
- (_Bool)cardsController:(CardsController *)arg1 supportCollectionViewForCardFooterInContainerView:(UIView *)arg2;
- (void)cardsController:(CardsController *)arg1 reuseView:(UIView *)arg2 forCardHeaderInContainerView:(UIView *)arg3;
- (UIView *)cardsController:(CardsController *)arg1 viewForCardHeaderInContainerView:(UIView *)arg2;
- (NSString *)cardsController:(CardsController *)arg1 reuseIdentifierForCardHeaderInContainerView:(UIView *)arg2;
- (_Bool)cardsController:(CardsController *)arg1 supportCollectionViewForCardHeaderInContainerView:(UIView *)arg2;
- (void)cardsController:(CardsController *)arg1 reuseView:(UIView *)arg2 forCardContentAtIndex:(long long)arg3;
- (UIView *)cardsController:(CardsController *)arg1 viewForCardContentAtIndex:(long long)arg2;
- (NSString *)cardsController:(CardsController *)arg1 reuseIdentifierForCardContentAtIndex:(long long)arg2;
- (double)cardsController:(CardsController *)arg1 viewHeightWithWidth:(double)arg2 forCardContentAtIndex:(long long)arg3;
- (_Bool)cardsController:(CardsController *)arg1 supportCollectionViewForCardContentAtIndex:(long long)arg2;
- (_Bool)cardsController:(CardsController *)arg1 respondsToSelector:(SEL)arg2 forCardContentAtIndex:(long long)arg3;
@end
