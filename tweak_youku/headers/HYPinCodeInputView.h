//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIKeyInput.h"

@class NSMutableArray, NSString, UIColor;

@interface HYPinCodeInputView : UIView <UIKeyInput>
{
    unsigned long long _pinCodeCount;
    CDUnknownBlockType _pinCodeChange;
    UIColor *_pinBGColor;
    UIColor *_textColor;
    UIColor *_borderColor;
    NSMutableArray *_labelArray;
    NSMutableArray *_stackArray;
    NSMutableArray *_queueArray;
}

@property(retain, nonatomic) NSMutableArray *queueArray; // @synthesize queueArray=_queueArray;
@property(retain, nonatomic) NSMutableArray *stackArray; // @synthesize stackArray=_stackArray;
@property(retain, nonatomic) NSMutableArray *labelArray; // @synthesize labelArray=_labelArray;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *pinBGColor; // @synthesize pinBGColor=_pinBGColor;
@property(copy, nonatomic) CDUnknownBlockType pinCodeChange; // @synthesize pinCodeChange=_pinCodeChange;
@property(nonatomic) unsigned long long pinCodeCount; // @synthesize pinCodeCount=_pinCodeCount;
- (void).cxx_destruct;
- (_Bool)completedInput;
- (void)handleTap:(id)arg1;
- (void)updatePinCode;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) NSString *pinCode;
- (void)reset;
- (void)resignAndUpdate;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (_Bool)canBecomeFirstResponder;
- (void)layoutPinLabel;
- (void)createCodeLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

