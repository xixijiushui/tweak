//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class HYUserSDKInputValidator;

@interface HYUserSDKTextField : UITextField
{
    id _nextResponderControl;
    HYUserSDKInputValidator *_validator;
}

@property(retain, nonatomic) HYUserSDKInputValidator *validator; // @synthesize validator=_validator;
@property(nonatomic) __weak id nextResponderControl; // @synthesize nextResponderControl=_nextResponderControl;
- (void).cxx_destruct;
- (void)setKeyboardType:(long long)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (id)validateInput;

@end

