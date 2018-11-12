//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface YKFTagView : UIView
{
    UIButton *_button;
    UILabel *_label;
    id <YKFTagViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YKFTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)setTextShadowOffset:(struct CGSize)arg1;
- (void)setTextShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBorderColor:(struct CGColor *)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)updateWithString:(id)arg1 font:(id)arg2 constrainedToWidth:(double)arg3 padding:(struct CGSize)arg4 minimumWidth:(double)arg5;
- (id)init;

@end
