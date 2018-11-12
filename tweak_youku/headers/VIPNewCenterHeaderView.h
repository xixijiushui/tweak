//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIImageView, UIScrollView, VIPNCContentModel, VIPNCHeadUserInfoView, VIPNewCenterMainCardView, VIPNewCenterModel;

@interface VIPNewCenterHeaderView : UIView <UIScrollViewDelegate>
{
    VIPNewCenterModel *_drawer;
    NSString *_navBgColor;
    UIScrollView *_imageScrollView;
    UIImageView *_imgScrollBgImgView;
    UIImageView *_cardBgImgView;
    UIImageView *_bottomBgImageView;
    UIScrollView *_cardScrollView;
    VIPNCHeadUserInfoView *_userInfoView;
    VIPNewCenterMainCardView *_oneCardView;
    UIView *_mainView;
    VIPNCContentModel *_currentModel;
    NSMutableArray *_cardMArr;
}

@property(retain, nonatomic) NSMutableArray *cardMArr; // @synthesize cardMArr=_cardMArr;
@property(retain, nonatomic) VIPNCContentModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) VIPNewCenterMainCardView *oneCardView; // @synthesize oneCardView=_oneCardView;
@property(retain, nonatomic) VIPNCHeadUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) UIScrollView *cardScrollView; // @synthesize cardScrollView=_cardScrollView;
@property(retain, nonatomic) UIImageView *bottomBgImageView; // @synthesize bottomBgImageView=_bottomBgImageView;
@property(retain, nonatomic) UIImageView *cardBgImgView; // @synthesize cardBgImgView=_cardBgImgView;
@property(retain, nonatomic) UIImageView *imgScrollBgImgView; // @synthesize imgScrollBgImgView=_imgScrollBgImgView;
@property(retain, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(retain, nonatomic) NSString *navBgColor; // @synthesize navBgColor=_navBgColor;
- (void).cxx_destruct;
- (void)changeBgimg:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)applyTheme;
- (void)createOneCardUI:(id)arg1 withMemberInfo:(id)arg2;
- (void)setVIPCenterHeaderData:(id)arg1;
- (void)layoutHeaderViewForScrollViewOffset:(struct CGPoint)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

