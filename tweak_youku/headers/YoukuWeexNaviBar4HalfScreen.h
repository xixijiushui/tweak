//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface YoukuWeexNaviBar4HalfScreen : UIView
{
    NSString *_title;
    CDUnknownBlockType _onCloseButtonDidClick;
    UILabel *_titleLabel;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onCloseButtonDidClick; // @synthesize onCloseButtonDidClick=_onCloseButtonDidClick;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onButtonClickClose:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

