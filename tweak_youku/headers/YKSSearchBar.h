//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, YKSSearchTextField;

@interface YKSSearchBar : UIView <UITextFieldDelegate>
{
    YKSSearchTextField *_textField;
    UIButton *_cancelButton;
    id <YKSSearchBarDelegate> _delegate;
    UIImageView *_leftImageView;
}

@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) __weak id <YKSSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) YKSSearchTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)p_handleTextDidChangeNotification:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)handleCancelAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
