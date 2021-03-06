//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIControl, UIImageView, UILabel;

@interface ChildEmptyView : UIView
{
    id <ChildErrorViewDelegate> _delegate;
    UIButton *_backBtn;
    UIControl *_clickControl;
    UIView *_contentView;
    UIImageView *_imageView;
    UIView *_retryBtnView;
    UILabel *_retryTitle;
    UIControl *_retryBtnCtr;
    long long _errorType;
}

@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(retain, nonatomic) UIControl *retryBtnCtr; // @synthesize retryBtnCtr=_retryBtnCtr;
@property(retain, nonatomic) UILabel *retryTitle; // @synthesize retryTitle=_retryTitle;
@property(retain, nonatomic) UIView *retryBtnView; // @synthesize retryBtnView=_retryBtnView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIControl *clickControl; // @synthesize clickControl=_clickControl;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(nonatomic) __weak id <ChildErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onBackClick:(id)arg1;
- (void)onRetryClick:(id)arg1;
- (void)setupNavBar;
- (void)setupSubviews;
- (void)setNeedShowBackButton:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

