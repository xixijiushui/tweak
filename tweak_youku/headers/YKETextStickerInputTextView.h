//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UITextViewDelegate.h"

@class NSAttributedString, NSString, UIColor, UIFont, UILabel;

@interface YKETextStickerInputTextView : UITextView <UITextViewDelegate>
{
    NSString *_placeholder;
    UIColor *_placeholderColor;
    NSAttributedString *_attributedPlaceholder;
    UIFont *_placeholderFont;
    unsigned long long _maxNumberOfLines;
    long long _maxTextW;
    long long _minTextW;
    long long _minTextH;
    UILabel *_limitedLabel;
    UIColor *_fillColor;
    UIColor *_outlineColor;
    double _outlineWidth;
    CDUnknownBlockType _textChangedBlock;
    CDUnknownBlockType _OnDidChangeText;
    CDUnknownBlockType _OnDidReturnKeyPress;
    unsigned long long _cornerRadius;
    UITextView *_placeholderView;
    long long _textH;
    long long _textW;
    long long _maxTextH;
}

@property(nonatomic) long long maxTextH; // @synthesize maxTextH=_maxTextH;
@property(nonatomic) long long textW; // @synthesize textW=_textW;
@property(nonatomic) long long textH; // @synthesize textH=_textH;
@property(nonatomic) __weak UITextView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(nonatomic) unsigned long long cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) CDUnknownBlockType OnDidReturnKeyPress; // @synthesize OnDidReturnKeyPress=_OnDidReturnKeyPress;
@property(copy, nonatomic) CDUnknownBlockType OnDidChangeText; // @synthesize OnDidChangeText=_OnDidChangeText;
@property(copy, nonatomic) CDUnknownBlockType textChangedBlock; // @synthesize textChangedBlock=_textChangedBlock;
@property(nonatomic) double outlineWidth; // @synthesize outlineWidth=_outlineWidth;
@property(retain, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UILabel *limitedLabel; // @synthesize limitedLabel=_limitedLabel;
@property(nonatomic) long long minTextH; // @synthesize minTextH=_minTextH;
@property(nonatomic) long long minTextW; // @synthesize minTextW=_minTextW;
@property(nonatomic) long long maxTextW; // @synthesize maxTextW=_maxTextW;
@property(nonatomic) unsigned long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholder; // @synthesize attributedPlaceholder=_attributedPlaceholder;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)textViewDidChange:(id)arg1;
- (void)textDidChange;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)textValueDidChanged:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

