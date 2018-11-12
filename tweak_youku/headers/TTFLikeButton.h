//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, TTFPostLikeViewModel, UIImageView, UILabel;

@interface TTFLikeButton : UIButton
{
    _Bool _isUseForTool;
    _Bool _isPost;
    _Bool _isLiked;
    NSString *_ttpodxmid;
    long long _likeButtonType;
    long long _itemId;
    long long _likeCount;
    UILabel *_likeIconLabel;
    UILabel *_likeCountLabel;
    UIImageView *_praiseImageView;
    TTFPostLikeViewModel *_postLikeViewModel;
    CDUnknownBlockType _complete;
}

@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) TTFPostLikeViewModel *postLikeViewModel; // @synthesize postLikeViewModel=_postLikeViewModel;
@property(retain, nonatomic) UIImageView *praiseImageView; // @synthesize praiseImageView=_praiseImageView;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UILabel *likeIconLabel; // @synthesize likeIconLabel=_likeIconLabel;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(nonatomic) _Bool isPost; // @synthesize isPost=_isPost;
@property(nonatomic) long long likeButtonType; // @synthesize likeButtonType=_likeButtonType;
@property(nonatomic) _Bool isUseForTool; // @synthesize isUseForTool=_isUseForTool;
@property(retain, nonatomic) NSString *ttpodxmid; // @synthesize ttpodxmid=_ttpodxmid;
- (void).cxx_destruct;
- (void)adjustLikeCountDisplay;
- (_Bool)userHasLoggedIn;
- (id)scaleAnimation;
- (void)unlikeRefresh;
- (void)likeRefresh;
- (void)completeWithSuccess:(_Bool)arg1 withType:(long long)arg2;
- (void)changeLikeButton;
- (void)likeButtonAction:(id)arg1;
- (void)didMoveToSuperview;
- (void)setLikeButtonWithType:(long long)arg1 isPost:(_Bool)arg2 itemId:(long long)arg3 isLiked:(_Bool)arg4 likeCount:(long long)arg5 complete:(CDUnknownBlockType)arg6;

@end

