//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"
#import "YYKeyboardObserver.h"

@class LFInputTextTransition, LFUIPlaceHolderTextView, NSString;

@interface LFUIInputTextView : UIView <YYKeyboardObserver, UITextViewDelegate>
{
    _Bool _showing;
    _Bool _hiddenDidNoShowing;
    LFUIPlaceHolderTextView *_textView;
    id <LFUIInputTextViewDelegate> _delegate;
    LFInputTextTransition *_transition;
    UIView *_hostView;
    UIView *_inputView;
}

@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) LFInputTextTransition *transition; // @synthesize transition=_transition;
@property(nonatomic) __weak id <LFUIInputTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hiddenDidNoShowing; // @synthesize hiddenDidNoShowing=_hiddenDidNoShowing;
@property(nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) LFUIPlaceHolderTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)keyboardChangedWithTransition:(CDStruct_902a08d0)arg1;
- (struct CGRect)bottomOutFrameWithHeight:(double)arg1;
- (struct CGRect)inputFrameWithKeyboardFrame:(struct CGRect)arg1 visible:(_Bool)arg2;
- (void)textViewDidUpdateWithTransition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)makeupInputView:(id)arg1;
- (void)stopKeyboardTracker;
- (void)startKeyboardTracker;
- (id)initWithHostView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

