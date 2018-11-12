//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UIImageView, YYLabel;

@interface UIChildHomeTipView : UIView <UITextViewDelegate>
{
    _Bool _isCloseTip;
    UIImageView *_imageviewBg;
    UIButton *_closeBtn;
    YYLabel *_label;
}

@property(retain, nonatomic) YYLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *imageviewBg; // @synthesize imageviewBg=_imageviewBg;
@property(nonatomic) _Bool isCloseTip; // @synthesize isCloseTip=_isCloseTip;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)openParentManagerPage:(id)arg1;
- (void)closeClick:(id)arg1;
- (void)setUpTip;
- (void)delayMethod;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

