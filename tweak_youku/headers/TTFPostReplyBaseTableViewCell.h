//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "YKFPraiseButtonDelegate.h"

@class NSLayoutConstraint, NSString, TTFPostReplyViewModel, TTFReplyerView, UILabel, UIView, YKFCommentButton, YKFGrayPraiseButton, YKFRichTextLabel;

@interface TTFPostReplyBaseTableViewCell : UITableViewCell <YKFPraiseButtonDelegate>
{
    _Bool _usedBounds;
    id <TTFPostReplyBaseTableViewCellDelegate> _delegate;
    TTFPostReplyViewModel *_postReplyViewModel;
    TTFReplyerView *_replierView;
    UIView *_postContentView;
    UIView *_postReplyOptionContainerView;
    NSLayoutConstraint *_contentConstraint;
    UIView *_postReplyContentView;
    NSLayoutConstraint *_postReplyConstraint;
    YKFGrayPraiseButton *_likeButton;
    YKFCommentButton *_commentButton;
    YKFRichTextLabel *_commentLabel;
    YKFRichTextLabel *_postContentLabel;
    UILabel *_postContentMoreLabel;
}

@property(retain, nonatomic) UILabel *postContentMoreLabel; // @synthesize postContentMoreLabel=_postContentMoreLabel;
@property(retain, nonatomic) YKFRichTextLabel *postContentLabel; // @synthesize postContentLabel=_postContentLabel;
@property(retain, nonatomic) YKFRichTextLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(nonatomic) _Bool usedBounds; // @synthesize usedBounds=_usedBounds;
@property(retain, nonatomic) YKFCommentButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) YKFGrayPraiseButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak NSLayoutConstraint *postReplyConstraint; // @synthesize postReplyConstraint=_postReplyConstraint;
@property(nonatomic) __weak UIView *postReplyContentView; // @synthesize postReplyContentView=_postReplyContentView;
@property(nonatomic) __weak NSLayoutConstraint *contentConstraint; // @synthesize contentConstraint=_contentConstraint;
@property(nonatomic) __weak UIView *postReplyOptionContainerView; // @synthesize postReplyOptionContainerView=_postReplyOptionContainerView;
@property(nonatomic) __weak UIView *postContentView; // @synthesize postContentView=_postContentView;
@property(nonatomic) __weak TTFReplyerView *replierView; // @synthesize replierView=_replierView;
@property(retain, nonatomic) TTFPostReplyViewModel *postReplyViewModel; // @synthesize postReplyViewModel=_postReplyViewModel;
@property(nonatomic) __weak id <TTFPostReplyBaseTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)postContentMoreLabelTapped:(id)arg1;
- (void)replyContentTapped:(id)arg1;
- (void)buildComent;
- (void)buildContent;
- (void)configureWithViewModel:(id)arg1 needToHideOperationButton:(_Bool)arg2;
- (void)configureWithViewModel:(id)arg1 showPostReply:(_Bool)arg2;
- (void)bindViewModel:(id)arg1;
- (void)updateCommentButton;
- (void)updateLikeButton;
- (void)handleAnimationWhenSuccess:(_Bool)arg1;
- (void)handleCommentButton:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
