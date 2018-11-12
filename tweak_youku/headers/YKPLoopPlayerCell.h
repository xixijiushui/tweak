//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, YKPLoopPlayerPlayButton, YKUGradientView;

@interface YKPLoopPlayerCell : UITableViewCell
{
    int _from;
    YKUGradientView *_gradientView;
    UIImageView *_coverImgView;
    UIImageView *_activityBgView;
    UIImageView *_activityIconView;
    UILabel *_activityLabel;
    UILabel *_titleLabel;
    UIImageView *_avatarView;
    UIButton *_likeBtn;
    UILabel *_likeCountLabel;
    UIButton *_commentBtn;
    UILabel *_commentCountLabel;
    UIButton *_shareBtn;
    YKPLoopPlayerPlayButton *_playBtn;
    UIButton *_downloadBtn;
    UIImageView *_materialImgView;
    CDUnknownBlockType _touchAvartarActionBlock;
    CDUnknownBlockType _playActionBlock;
    CDUnknownBlockType _likeActionBlock;
    CDUnknownBlockType _viewPostActionBlock;
    CDUnknownBlockType _shareActionBlock;
    CDUnknownBlockType _downloadActionBlock;
    CDUnknownBlockType _visitActivityActionBlock;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType visitActivityActionBlock; // @synthesize visitActivityActionBlock=_visitActivityActionBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadActionBlock; // @synthesize downloadActionBlock=_downloadActionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareActionBlock; // @synthesize shareActionBlock=_shareActionBlock;
@property(copy, nonatomic) CDUnknownBlockType viewPostActionBlock; // @synthesize viewPostActionBlock=_viewPostActionBlock;
@property(copy, nonatomic) CDUnknownBlockType likeActionBlock; // @synthesize likeActionBlock=_likeActionBlock;
@property(copy, nonatomic) CDUnknownBlockType playActionBlock; // @synthesize playActionBlock=_playActionBlock;
@property(copy, nonatomic) CDUnknownBlockType touchAvartarActionBlock; // @synthesize touchAvartarActionBlock=_touchAvartarActionBlock;
@property(retain, nonatomic) UIImageView *materialImgView; // @synthesize materialImgView=_materialImgView;
@property(retain, nonatomic) UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(retain, nonatomic) YKPLoopPlayerPlayButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UIImageView *activityIconView; // @synthesize activityIconView=_activityIconView;
@property(retain, nonatomic) UIImageView *activityBgView; // @synthesize activityBgView=_activityBgView;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void).cxx_destruct;
- (void)downloadAction;
- (void)shareAction;
- (void)viewPostAction;
- (void)likeAction;
- (void)playAction;
- (void)touchInAvatarArea;
- (void)visitActivity;
- (void)removeBindPlayerView:(id)arg1;
- (void)bindPlayerView:(id)arg1;
- (void)setupWithModel:(id)arg1 from:(int)arg2 needLayout:(_Bool)arg3;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

