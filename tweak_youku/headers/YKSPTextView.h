//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextView;

@interface YKSPTextView : UIView <UITextViewDelegate>
{
    unsigned long long _wordLimit;
    NSString *_placeHolderString;
    UITextView *_textView;
    id <YKSPTextViewDelegate> _delegate;
    UILabel *_placeHolderLabel;
}

@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(nonatomic) __weak id <YKSPTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *placeHolderString; // @synthesize placeHolderString=_placeHolderString;
@property(nonatomic) unsigned long long wordLimit; // @synthesize wordLimit=_wordLimit;
- (void).cxx_destruct;
- (void)textViewDidChangeEX:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)togglePlaceHolder;
@property(retain, nonatomic) NSString *text;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

