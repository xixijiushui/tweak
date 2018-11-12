//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AILPIKeyboardTracker.h"

@class NSString, UIResponder<UITextInput>, UIView;

@interface AILPIKeyboardNotificationTracker : NSObject <AILPIKeyboardTracker>
{
    _Bool isLandscape;
    _Bool _keyboardTracking;
    long long displayType;
    UIResponder<UITextInput> *textInput;
    UIView *hostView;
    id <AILPIKeyboardTrackerDelegate> delegate;
    UIView *_inputView;
    struct CGRect _hostViewBounds;
}

@property(nonatomic) struct CGRect hostViewBounds; // @synthesize hostViewBounds=_hostViewBounds;
@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) _Bool keyboardTracking; // @synthesize keyboardTracking=_keyboardTracking;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape;
@property(nonatomic) __weak id <AILPIKeyboardTrackerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView;
@property(nonatomic) __weak UIResponder<UITextInput> *textInput; // @synthesize textInput;
@property(nonatomic) long long displayType; // @synthesize displayType;
- (void).cxx_destruct;
- (double)keyboardDismissPosition;
- (double)_keyboardTimeDurationFromPosition:(double)arg1 toPosition:(double)arg2;
- (void)_textInputResignFirstResponder;
- (void)_textInputBecomeFirstResponder;
- (void)_stopKeyboardTracker;
- (void)_startKeyboardTracker;
- (void)_didHideKeyboard;
- (void)_shouldShowKeyboardWithDuration:(double)arg1;
- (void)_shouldChangeFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2 visible:(_Bool)arg3 duration:(double)arg4;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)_dismissInputView:(id)arg1 duration:(double)arg2 complete:(CDUnknownBlockType)arg3;
- (void)_displayInputView:(id)arg1 duration:(double)arg2 hostView:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)dismissKeyboard;
- (void)displayKeyboard;
- (void)displayInputView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

