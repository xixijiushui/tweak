//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKCardsController.h"

@class SKSearchNoResultViewController, UIView;

@interface SKSearchNoResultCardsController : SKCardsController
{
    _Bool _isForbiddenWord;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isForbiddenWord; // @synthesize isForbiddenWord=_isForbiddenWord;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)parseSKCardContext:(id)arg1 cardType:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)bindSearchVideoNewNoresultData;
- (void)bindDataOfNormalCondition;
- (void)bindDataOfRequestErrorCondition;
- (void)bindData:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(nonatomic) __weak SKSearchNoResultViewController *superViewController; // @dynamic superViewController;

@end
