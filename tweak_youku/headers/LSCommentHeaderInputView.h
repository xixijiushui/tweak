//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class CAGradientLayer, LSCommentInputWindow, NSString, UIButton, UIImageView, UILabel, UITextView;

@interface LSCommentHeaderInputView : UIView <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _landScape;
    _Bool _containerHasMonitored;
    _Bool _isAddKVO;
    _Bool _iskvoEnable;
    id <LSCommentHeaderInputViewDelegate> _delegate;
    LSCommentInputWindow *_inputWindow;
    NSString *_gambitStr;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UITextView *_contentTextView;
    UIImageView *_InputBackgroundImageView;
    UIImageView *_InputLineImageView;
    UIImageView *_bgImageView;
    UIImageView *_gambitImageView;
    UILabel *_wordsLimitLabel;
    UILabel *_gambitLabel;
    UIView *_keyboardContainer;
    UIButton *_sendBtn;
    CAGradientLayer *_maskLayer;
    UIImageView *_numberImageView;
}

@property(nonatomic) _Bool iskvoEnable; // @synthesize iskvoEnable=_iskvoEnable;
@property(nonatomic) _Bool isAddKVO; // @synthesize isAddKVO=_isAddKVO;
@property(retain, nonatomic) UIImageView *numberImageView; // @synthesize numberImageView=_numberImageView;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool containerHasMonitored; // @synthesize containerHasMonitored=_containerHasMonitored;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(nonatomic) __weak UIView *keyboardContainer; // @synthesize keyboardContainer=_keyboardContainer;
@property(retain, nonatomic) UILabel *gambitLabel; // @synthesize gambitLabel=_gambitLabel;
@property(retain, nonatomic) UILabel *wordsLimitLabel; // @synthesize wordsLimitLabel=_wordsLimitLabel;
@property(retain, nonatomic) UIImageView *gambitImageView; // @synthesize gambitImageView=_gambitImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *InputLineImageView; // @synthesize InputLineImageView=_InputLineImageView;
@property(retain, nonatomic) UIImageView *InputBackgroundImageView; // @synthesize InputBackgroundImageView=_InputBackgroundImageView;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool landScape; // @synthesize landScape=_landScape;
@property(retain, nonatomic) NSString *gambitStr; // @synthesize gambitStr=_gambitStr;
@property(nonatomic) __weak LSCommentInputWindow *inputWindow; // @synthesize inputWindow=_inputWindow;
@property(nonatomic) __weak id <LSCommentHeaderInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gambitAction;
- (void)sendChatAction:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unmonitorKeyboardFrameChangeWithKeyboard;
- (void)monitorKeyboardFrameChangeWithKeyboard;
- (id)getKeyboardContainerOfBaseView:(id)arg1;
- (double)keyboardHeight;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onSystemInterrupt;
- (void)addUIKeyboardNotification;
- (id)setTextLayerWithString:(id)arg1;
- (void)calculateRemainingWords:(id)arg1;
- (void)setCommentContentNull;
- (void)showCommentKeyBoard;
- (_Bool)isBlankString:(id)arg1;
- (double)getTheStringWidth:(id)arg1 setFont:(double)arg2 withHeight:(double)arg3;
- (void)dismissKeyBorad;
- (void)standardLayout:(double)arg1;
- (void)uprightLayout:(double)arg1;
- (void)relayoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

