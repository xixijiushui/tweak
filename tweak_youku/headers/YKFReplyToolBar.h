//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKFCommonReplyToolBarProtocol.h"
#import "YKFPraiseButtonDelegate.h"

@class NSLayoutConstraint, NSString, RACCommand, UIButton, UILabel, YKFGrayPraiseButton, YKFMarkButton, YKFReplyToolBarViewModel<YKFCommonReplyToolBarViewModelProtocol>;

@interface YKFReplyToolBar : UIView <YKFPraiseButtonDelegate, YKFCommonReplyToolBarProtocol>
{
    YKFReplyToolBarViewModel<YKFCommonReplyToolBarViewModelProtocol> *_viewModel;
    NSString *_commentTip;
    UILabel *_commentLabel;
    UIButton *_commentButton;
    YKFGrayPraiseButton *_praiseButton;
    YKFMarkButton *_shareButton;
    UIButton *_switchButton;
    RACCommand *_updateCommentCountLabelCommand;
    NSLayoutConstraint *_shareWidthConstraints;
}

@property(nonatomic) __weak NSLayoutConstraint *shareWidthConstraints; // @synthesize shareWidthConstraints=_shareWidthConstraints;
@property(retain, nonatomic) RACCommand *updateCommentCountLabelCommand; // @synthesize updateCommentCountLabelCommand=_updateCommentCountLabelCommand;
@property(nonatomic) __weak UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(nonatomic) __weak YKFMarkButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak YKFGrayPraiseButton *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(nonatomic) __weak UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(nonatomic) __weak UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) NSString *commentTip; // @synthesize commentTip=_commentTip;
@property(retain, nonatomic) YKFReplyToolBarViewModel<YKFCommonReplyToolBarViewModelProtocol> *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)handleAnimationWhenSuccess:(_Bool)arg1;
- (void)config;
- (void)_init;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

