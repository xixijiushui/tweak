//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, VIPCubeMainViewController;

@interface VIPCubeTopView : UIView
{
    UIImageView *_backgroundView;
    UIButton *_channelButton;
    VIPCubeMainViewController *_homeViewController;
    id <VIPCubeTopViewDelegate> _delegate;
}

@property(nonatomic) __weak id <VIPCubeTopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak VIPCubeMainViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
- (void).cxx_destruct;
- (void)cmsExposeWithModelArray:(id)arg1;
- (void)channelsExpose;
- (void)channelMenuAction;
- (void)setupTheme;
- (void)refreshToolView;
- (void)hideMessageCenterRedPoint;
- (void)showMessageCenterRedPoint;
- (void)refreshSubviews;
- (void)setupSubviews;
- (void)dealloc;

@end
