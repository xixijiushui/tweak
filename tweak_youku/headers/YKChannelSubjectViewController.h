//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

#import "ChannelNavBarDelegate.h"
#import "DYKURLRouterViewControllerProtocol.h"
#import "YKChannelSubectCardsControllerDelegate.h"

@class ChannelNavBarSubjectView, NSString, YKChannelPageItem, YKChannelSubectCardsController;

@interface YKChannelSubjectViewController : UIBaseViewController <ChannelNavBarDelegate, YKChannelSubectCardsControllerDelegate, DYKURLRouterViewControllerProtocol>
{
    YKChannelSubectCardsController *_cardsController;
    ChannelNavBarSubjectView *_navBarView;
    YKChannelPageItem *_pageItem;
    NSString *_imagePath;
}

@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) YKChannelPageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(retain, nonatomic) ChannelNavBarSubjectView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) YKChannelSubectCardsController *cardsController; // @synthesize cardsController=_cardsController;
- (void).cxx_destruct;
- (void)didRequestSuccess;
- (void)sendShareStatistics;
- (void)didClickNavBar:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateWithSubjectId:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

