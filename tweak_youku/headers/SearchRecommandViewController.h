//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKUIBaseViewController.h"

@class SearchRecommandCardsController, SearchViewController;

@interface SearchRecommandViewController : SKUIBaseViewController
{
    _Bool _gameSwitch;
    _Bool _didBack;
    SearchRecommandCardsController *_recommandCards;
    id <SearchRecommandViewControllerDelegate> _delegate;
    SearchViewController *_searchVC;
}

@property(nonatomic) _Bool didBack; // @synthesize didBack=_didBack;
@property(nonatomic) _Bool gameSwitch; // @synthesize gameSwitch=_gameSwitch;
@property(nonatomic) __weak SearchViewController *searchVC; // @synthesize searchVC=_searchVC;
@property(nonatomic) __weak id <SearchRecommandViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SearchRecommandCardsController *recommandCards; // @synthesize recommandCards=_recommandCards;
- (void).cxx_destruct;
- (void)swipeBackWithSender:(id)arg1;
- (void)hideKeyBoard;
- (void)searchRecommandViewDidClick:(id)arg1;
- (void)notifyViewDidAppear;
- (void)notifyBindCards;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;

@end
