//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPPostBaseCell.h"

#import "UITextViewDelegate.h"

@class NSString, YKFRichTextLabel;

@interface APPPostTextCell : APPPostBaseCell <UITextViewDelegate>
{
    double mViewHeight;
    YKFRichTextLabel *_richTextView;
}

+ (double)calculateHeight:(id)arg1;
@property(retain, nonatomic) YKFRichTextLabel *richTextView; // @synthesize richTextView=_richTextView;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (void)updateConstraints;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

