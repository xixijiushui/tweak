//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UIScrollView, YKSLoadingView;

@interface YKSHomePullUpFooter : UIView
{
    _Bool _isVisible;
    _Bool _hasMore;
    UIScrollView *_scrollView;
    double _height;
    CDUnknownBlockType _refreshingBlock;
    YKSLoadingView *_loadingView;
    UILabel *_stateLabel;
}

@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) YKSLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType refreshingBlock; // @synthesize refreshingBlock=_refreshingBlock;
@property(nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void).cxx_destruct;
- (void)hideFooter;
- (void)hideFooterWithAnimate:(_Bool)arg1;
- (void)showFooterWithHasMore:(_Bool)arg1;
- (id)init;

@end

