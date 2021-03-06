//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UIImageGIFView, UIImageView, UILabel, YKVIPUserinfo;

@interface YKVIPWelfareView : UIView
{
    UIImageView *_titleLogoImgView;
    UILabel *_titleLab;
    UIView *_welfareMainView;
    UIImageGIFView *_welfareBigView;
    UIImageGIFView *_welfareSmallView;
    UIView *_iconMainView;
    UIImageView *_lockImgView;
    UIButton *_loginBtn;
    _Bool _hasOpen;
    _Bool _animationFinish;
    NSMutableArray *_iconViewsArr;
    id <YKVIPWelfareViewDelegate> _delegate;
    UILabel *_arrowLabel;
    UIButton *_arrowBtn;
    YKVIPUserinfo *_currentUserInfo;
}

@property(retain, nonatomic) YKVIPUserinfo *currentUserInfo; // @synthesize currentUserInfo=_currentUserInfo;
@property(retain, nonatomic) UIButton *arrowBtn; // @synthesize arrowBtn=_arrowBtn;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(nonatomic) __weak id <YKVIPWelfareViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapBigImgAction:(id)arg1;
- (void)loginEvent;
- (_Bool)isNeedFirstAnimation;
- (void)reloadUIWithWelfareBigView:(id)arg1;
- (void)createTimer;
- (void)reloadUI:(id)arg1;
- (void)exposeForAction:(id)arg1;
- (void)startAnimationWithWelfare;
- (void)unOpenWelfare;
- (void)openWelfare;
- (void)firstAnimation;
- (void)getDefaultUI;
- (void)getDefaultType;
- (id)initWithFrame:(struct CGRect)arg1;

@end

