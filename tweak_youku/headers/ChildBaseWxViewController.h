//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXViewController.h"

#import "ChildErrorViewDelegate.h"

@class ChildEmptyView, ChildLoadingView;

@interface ChildBaseWxViewController : WXViewController <ChildErrorViewDelegate>
{
    _Bool _needShowBackButtonOnLoadingAndError;
    _Bool _isLoadingShow;
    _Bool _isHorizon;
    _Bool _isVCForeground;
    ChildLoadingView *_loadingIndicator;
    ChildEmptyView *_emptyFailedView;
}

@property(nonatomic) _Bool isVCForeground; // @synthesize isVCForeground=_isVCForeground;
@property(nonatomic) _Bool isHorizon; // @synthesize isHorizon=_isHorizon;
@property(nonatomic) _Bool isLoadingShow; // @synthesize isLoadingShow=_isLoadingShow;
@property(retain, nonatomic) ChildEmptyView *emptyFailedView; // @synthesize emptyFailedView=_emptyFailedView;
@property(retain, nonatomic) ChildLoadingView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) _Bool needShowBackButtonOnLoadingAndError; // @synthesize needShowBackButtonOnLoadingAndError=_needShowBackButtonOnLoadingAndError;
- (void).cxx_destruct;
- (_Bool)wxNavbarIsHidden;
- (void)wxHidePageLoadingIndicator;
- (void)wxShowPageLoadingIndicator:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onRetryClick;
- (void)handleCallback;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)wxNavigationController;
- (id)initWithNavigatorURL:(id)arg1 withViewController:(id)arg2 withPageOptions:(id)arg3 isHorzion:(_Bool)arg4;

@end

