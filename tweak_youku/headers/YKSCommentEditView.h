//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UIColor, UILabel, UITextView, UIViewController;

@interface YKSCommentEditView : UIView <UITextViewDelegate>
{
    float _keyboardHeight;
    _Bool _isEditing;
    float _containerHeight;
    UIViewController *_controller;
    id <YKSCommentEditViewDelegate> _delegate;
    NSString *_defaultPlaceholder;
    UIColor *_defaultColor;
    UIColor *_editingColor;
    UITextView *_editView;
    UILabel *_placeholderLabel;
    UIButton *_editBtn;
}

@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextView *editView; // @synthesize editView=_editView;
@property(nonatomic) float containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) UIColor *editingColor; // @synthesize editingColor=_editingColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) NSString *defaultPlaceholder; // @synthesize defaultPlaceholder=_defaultPlaceholder;
@property(nonatomic) __weak id <YKSCommentEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)resizeTextHeight:(_Bool)arg1;
- (float)minViewHeight;
- (float)minTextEditHeightEditing;
- (float)minTextEditHeight;
- (float)heightForString:(id)arg1 andWidth:(float)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)keyboardWillBeHiden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)didTextChange;
- (void)clean;
- (void)hidden;
- (void)show;
- (_Bool)isActive;
@property(retain, nonatomic) NSString *text;
- (void)editClickAction;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

