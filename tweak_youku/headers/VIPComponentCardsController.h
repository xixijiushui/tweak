//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComponentCardsController.h"

@interface VIPComponentCardsController : ComponentCardsController
{
    id <YKVIPPageViewProtocol> _pageDelegate;
}

@property(nonatomic) __weak id <YKVIPPageViewProtocol> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
- (void).cxx_destruct;
- (void)processRequestFailure:(id)arg1 errorCode:(long long)arg2 pageItem:(id)arg3;
- (void)processRequestSuccess:(id)arg1 pageItem:(id)arg2;
- (void)vipScrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldCollectPageEnd;
- (void)setupContentInset;
- (void)pageTitleViewToTop;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;

@end
