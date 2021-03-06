//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class OPPaymentVideoModel, OPPaymentVideoPlayerEndTabBar, OPPaymentVideoPlayerEndWeexView;

@interface OPPaymentVideoPlayerEndContainerView : UIView
{
    OPPaymentVideoPlayerEndWeexView *_vContentView;
    OPPaymentVideoPlayerEndTabBar *_tabBar;
    id <OPPaymentVideoPlayerEndDelegate> _delegate;
    long long _screenMode;
    OPPaymentVideoModel *_videoModel;
}

@property(retain, nonatomic) OPPaymentVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) long long screenMode; // @synthesize screenMode=_screenMode;
@property(nonatomic) __weak id <OPPaymentVideoPlayerEndDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupWeexEvent;
- (void)setupSubviews;
- (void)expose;
- (void)loginAction;
- (void)replayAction;
- (void)layoutSubviews;
- (void)updateWeexViewData:(id)arg1;
- (void)refreshWithModel:(id)arg1 screenModel:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 videoModel:(id)arg2 screenModel:(long long)arg3;

@end

