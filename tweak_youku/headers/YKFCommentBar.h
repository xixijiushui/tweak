//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTFToolbar, UILabel, YKFCommentBarViewModel, YKFReplyTextView;

@interface YKFCommentBar : UIView
{
    YKFCommentBarViewModel *_viewModel;
    TTFToolbar *_toolBar;
    YKFReplyTextView *_textView;
    UILabel *_tipLabel;
}

+ (double)heightOfCommentBar;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) YKFReplyTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) TTFToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) YKFCommentBarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)updateTipLabelIfHasContent:(_Bool)arg1;
- (void)showReplyTool;
- (void)layoutSubviews;
- (void)_initialize;
- (id)initWithViewModel:(id)arg1;
- (id)init;

@end

