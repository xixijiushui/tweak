//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YoukuWeexViewController.h"

#import "WXViewControllerProtocol.h"
#import "YKPageDelegate.h"
#import "YKVIPPageViewProtocol.h"
#import "YoukuWXViewControllerDelegate.h"

@class NSString, UIScrollView, UIViewController, VIPHomePageItem;

@interface YKVIPWXChannelViewController : YoukuWeexViewController <WXViewControllerProtocol, YoukuWXViewControllerDelegate, YKPageDelegate, YKVIPPageViewProtocol>
{
    UIViewController *_superViewController;
    VIPHomePageItem *_pageItem;
    UIScrollView *_tableView;
    id <YKVIPPageViewProtocol> _pageDelegate;
    UIScrollView *_errorScroll;
}

@property(retain, nonatomic) UIScrollView *errorScroll; // @synthesize errorScroll=_errorScroll;
@property(nonatomic) __weak id <YKVIPPageViewProtocol> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(retain, nonatomic) UIScrollView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak VIPHomePageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)getSub:(id)arg1 andLevel:(int)arg2;
- (void)refreshPage;
- (void)pageTitleViewToTop;
- (void)weexFinishRenderInstance;
- (void)vipScrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pageWillDeactivateInPagesManager:(id)arg1;
- (void)pageWillActivateInPagesManager:(id)arg1;
- (void)pageDidDeactivateInPagesManager:(id)arg1;
- (void)pageDidActivateInPagesManager:(id)arg1;
- (void)pageBeginReuseInPagesManager:(id)arg1;
- (void)wxFailCreateInstance;
- (void)updateWeexViewFrame;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)customHideErrorViewPluginInvoke;
- (_Bool)customShowErrorViewPluginInvoke:(id)arg1 rootView:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

