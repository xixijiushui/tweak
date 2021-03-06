//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class BaseLoadingView, PLAddVideoHintView, UIView;

@interface PLCollectionTableView : UITableView
{
    PLAddVideoHintView *_addVideoHint;
    UIView *_errorHint;
    BaseLoadingView *_loadingView;
}

@property(retain, nonatomic) BaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *errorHint; // @synthesize errorHint=_errorHint;
@property(retain, nonatomic) PLAddVideoHintView *addVideoHint; // @synthesize addVideoHint=_addVideoHint;
- (void).cxx_destruct;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)hideErrorView;
- (void)showNoContentView:(id)arg1;
- (void)showNetworkErrorViewWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)showDeletedView;
- (void)showAddHintWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)layoutSubviews;

@end

