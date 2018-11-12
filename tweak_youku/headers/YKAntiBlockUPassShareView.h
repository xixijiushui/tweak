//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface YKAntiBlockUPassShareView : UIWindow
{
    UIView *_maskView;
    UIView *_contentView;
    UIButton *_cancelBtn;
    UIButton *_pasteBtn;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_lineView;
    UIImageView *_uPassImageView;
    id <YKAntiUPassBlockShareViewDelegate> _delegate;
    NSString *_shareUPassStr;
}

@property(copy, nonatomic) NSString *shareUPassStr; // @synthesize shareUPassStr=_shareUPassStr;
@property(nonatomic) __weak id <YKAntiUPassBlockShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *uPassImageView; // @synthesize uPassImageView=_uPassImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *pasteBtn; // @synthesize pasteBtn=_pasteBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissAntiUPassBlockShareView;
- (double)getTextHeight:(id)arg1 subTitleWidth:(double)arg2 font:(id)arg3;
- (void)privateLayout:(struct CGRect)arg1 shareUPassStr:(id)arg2;
- (void)showAntiUPassBlockShareView:(_Bool)arg1;
- (void)platformClickAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shareUPassStr:(id)arg2 delegate:(id)arg3;

@end

