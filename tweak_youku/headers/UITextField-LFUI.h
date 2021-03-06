//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class LFUIKeyboardManager;

@interface UITextField (LFUI)
- (void)keyboardDidChangeFrameWithUserInfo:(id)arg1;
- (void)keyboardDidHideWithUserInfo:(id)arg1;
- (void)keyboardDidShowWithUserInfo:(id)arg1;
- (void)keyboardWillChangeFrameWithUserInfo:(id)arg1;
- (void)keyboardWillHideWithUserInfo:(id)arg1;
- (void)keyboardWillShowWithUserInfo:(id)arg1;
- (void)initKeyboardManagerIfNeeded;
@property(readonly, nonatomic) LFUIKeyboardManager *lf_keyboardManager;
- (void)setLf_keyboardManager:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType lf_keyboardDidChangeFrameNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType lf_keyboardWillChangeFrameNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType lf_keyboardDidHideNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType lf_keyboardWillHideNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType lf_keyboardDidShowNotificationBlock;
@property(copy, nonatomic) CDUnknownBlockType lf_keyboardWillShowNotificationBlock;
@property(readonly, nonatomic) struct _NSRange lf_selectedRange;
@end

