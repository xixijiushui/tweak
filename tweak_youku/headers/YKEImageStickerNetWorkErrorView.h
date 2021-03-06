//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface YKEImageStickerNetWorkErrorView : UIView
{
    int _buttonType;
    CDUnknownBlockType _reloadButtonClick;
    CDUnknownBlockType _goNextButtonClick;
    UIImageView *_errorLogo;
    UILabel *_errorDscLabel;
    UIButton *_errorButton;
}

@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(retain, nonatomic) UILabel *errorDscLabel; // @synthesize errorDscLabel=_errorDscLabel;
@property(retain, nonatomic) UIImageView *errorLogo; // @synthesize errorLogo=_errorLogo;
@property(copy, nonatomic) CDUnknownBlockType goNextButtonClick; // @synthesize goNextButtonClick=_goNextButtonClick;
@property(copy, nonatomic) CDUnknownBlockType reloadButtonClick; // @synthesize reloadButtonClick=_reloadButtonClick;
- (void).cxx_destruct;
- (void)errorButtonClick:(id)arg1;
- (void)hideNetWorkErrorView;
- (void)showNetWorkErrorView:(int)arg1 insertView:(id)arg2 viewFrame:(struct CGRect)arg3;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

