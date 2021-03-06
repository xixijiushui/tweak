//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, UIButton, UILabel;

@interface NavBarView : UIView
{
    CALayer *dimNavBarLayer;
    _Bool _setTtileCenter;
    _Bool _customBut;
    NSString *_title;
    long long _titleLeftMargin;
    double _titleWidthMargin;
    id <NavBarViewDelegate> _delegate;
    UIButton *_closeBtn;
    UILabel *_titleLabel;
    UIButton *_rightButton;
    UIButton *_leftButton;
}

@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool customBut; // @synthesize customBut=_customBut;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) _Bool setTtileCenter; // @synthesize setTtileCenter=_setTtileCenter;
@property(nonatomic) __weak id <NavBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double titleWidthMargin; // @synthesize titleWidthMargin=_titleWidthMargin;
@property(nonatomic) long long titleLeftMargin; // @synthesize titleLeftMargin=_titleLeftMargin;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)updateRightButton:(id)arg1;
- (void)updateLeftButton:(id)arg1;
- (void)layoutSubviews;
- (void)close;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

