//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKPIWhiteCardView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField, YKPISendMessageButton;

@interface YKPIBindPhoneContent : YKPIWhiteCardView <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UITextField *_phoneTextField;
    UITextField *_verifyCodeTextField;
    UITextField *_passwordTextField;
    YKPISendMessageButton *_sendButton;
    UIButton *_cancelButton;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) YKPISendMessageButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UITextField *verifyCodeTextField; // @synthesize verifyCodeTextField=_verifyCodeTextField;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)layoutSubviews;
- (id)createButton;
- (id)createTextField;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

