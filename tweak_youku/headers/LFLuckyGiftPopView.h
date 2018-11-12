//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIButton, UIImageView, UILabel;

@interface LFLuckyGiftPopView : UIView
{
    UIButton *_okButton;
    UILabel *_lblMessage;
    UIImageView *_bg;
    UIImageView *_icon;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *bg; // @synthesize bg=_bg;
@property(retain, nonatomic) UILabel *lblMessage; // @synthesize lblMessage=_lblMessage;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void).cxx_destruct;
- (id)getAttributedStringWithFirstStr:(id)arg1 andSize:(double)arg2 andColor:(id)arg3 WithSecondStr:(id)arg4 andSecondSize:(double)arg5 andSecondColor:(id)arg6;
- (void)dealloc;
- (void)stopTimer;
- (void)dismissView;
- (void)startTimer;
- (void)showAttributedMessageBox:(id)arg1 bigMsg:(id)arg2;
- (void)showMessageBox:(id)arg1;
- (void)tapOkButton:(id *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
