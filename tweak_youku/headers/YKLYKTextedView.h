//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, UIButton, UIImage, UILabel, UITextView, YKLYKLimitView;

@interface YKLYKTextedView : UIView
{
    struct CGRect __currentBounds;
    UIImage *_gambitBackImage;
    struct CGSize __gambitSize;
    _Bool _hasGambit;
    long long _layoutType;
    UIButton *_gambitButton;
    UITextView *_textInput;
    UILabel *_placeholderLabel;
    UIButton *_sendButton;
    YKLYKLimitView *_limitView;
    CAGradientLayer *_gambitLayer;
    UIView *_splitLineView;
    UIView *_inputBackView;
}

@property(nonatomic) _Bool hasGambit; // @synthesize hasGambit=_hasGambit;
@property(retain, nonatomic) UIView *inputBackView; // @synthesize inputBackView=_inputBackView;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) CAGradientLayer *gambitLayer; // @synthesize gambitLayer=_gambitLayer;
@property(retain, nonatomic) YKLYKLimitView *limitView; // @synthesize limitView=_limitView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextView *textInput; // @synthesize textInput=_textInput;
@property(retain, nonatomic) UIButton *gambitButton; // @synthesize gambitButton=_gambitButton;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
- (void).cxx_destruct;
- (void)_setupSendButton;
- (void)_setupLimitView;
- (void)_setupPlaceholderLabel;
- (void)_setupInputView;
- (void)_setupGambitButton;
- (void)_setupSplitLineView;
- (void)_landscapeLayoutWithRect:(struct CGRect)arg1;
- (void)_portraitLayouWithRect:(struct CGRect)arg1;
- (void)_landscapeLayouForGambitWithRect:(struct CGRect)arg1;
- (void)_portraitLayouForGambitWithRect:(struct CGRect)arg1;
- (void)_layoutWithRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)relayout;
- (void)updateGambigContent:(id)arg1 displaySize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

