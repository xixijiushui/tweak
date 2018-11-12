//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSCommentCell1.h"

#import "YKSCommentViewActionDelegate.h"

@class NSMutableArray, NSString, UIView, YKSCommentMoreView;

@interface YKSCommentCell2 : YKSCommentCell1 <YKSCommentViewActionDelegate>
{
    UIView *_separatorView;
    YKSCommentMoreView *_moreView;
    UIView *_replyBackgroundView;
    NSMutableArray *_cellArray;
    NSMutableArray *_reuseCell;
}

@property(retain, nonatomic) NSMutableArray *reuseCell; // @synthesize reuseCell=_reuseCell;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UIView *replyBackgroundView; // @synthesize replyBackgroundView=_replyBackgroundView;
@property(retain, nonatomic) YKSCommentMoreView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (void).cxx_destruct;
- (void)bindReply;
- (void)didClickUserNameWithComment:(id)arg1 reply:(id)arg2 commentView:(id)arg3;
- (void)tapReplyGestureAction:(id)arg1;
- (void)setupWithModel:(id)arg1 videoUid:(long long)arg2 videoId:(id)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

