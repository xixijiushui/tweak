//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface UploadAlbumNavigationBar : UIView
{
    UIView *_statusBarBgView;
    UILabel *_titleLabel;
    UIButton *_backButton;
    UIButton *_editButton;
    CDUnknownBlockType _OnBackButtonClick;
    CDUnknownBlockType _OnEditButtonClick;
}

@property(copy, nonatomic) CDUnknownBlockType OnEditButtonClick; // @synthesize OnEditButtonClick=_OnEditButtonClick;
@property(copy, nonatomic) CDUnknownBlockType OnBackButtonClick; // @synthesize OnBackButtonClick=_OnBackButtonClick;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *statusBarBgView; // @synthesize statusBarBgView=_statusBarBgView;
- (void).cxx_destruct;
- (void)configView:(id)arg1;
- (void)editButtonClick:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

