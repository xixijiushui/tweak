//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, YKPLoopPlayerPlayButton, YKUGradientView;

@interface YKPARPlayerCell : UITableViewCell
{
    int _from;
    YKUGradientView *_gradientView;
    UIImageView *_coverImgView;
    UIImageView *_activityBgView;
    UILabel *_activityIconView;
    UILabel *_activityLabel;
    UILabel *_titleLabel;
    UIImageView *_avatarView;
    UILabel *_timeLabel;
    UIButton *_shareBtn;
    UILabel *_shareLabel;
    YKPLoopPlayerPlayButton *_playBtn;
    UIButton *_downloadBtn;
    UILabel *_playLabel;
    YKUGradientView *_bootomGrayView;
    CDUnknownBlockType _touchAvartarActionBlock;
    CDUnknownBlockType _playActionBlock;
    CDUnknownBlockType _shareActionBlock;
    CDUnknownBlockType _downloadActionBlock;
    CDUnknownBlockType _visitActivityActionBlock;
}

+ (id)reuseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType visitActivityActionBlock; // @synthesize visitActivityActionBlock=_visitActivityActionBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadActionBlock; // @synthesize downloadActionBlock=_downloadActionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareActionBlock; // @synthesize shareActionBlock=_shareActionBlock;
@property(copy, nonatomic) CDUnknownBlockType playActionBlock; // @synthesize playActionBlock=_playActionBlock;
@property(copy, nonatomic) CDUnknownBlockType touchAvartarActionBlock; // @synthesize touchAvartarActionBlock=_touchAvartarActionBlock;
@property(retain, nonatomic) YKUGradientView *bootomGrayView; // @synthesize bootomGrayView=_bootomGrayView;
@property(retain, nonatomic) UILabel *playLabel; // @synthesize playLabel=_playLabel;
@property(retain, nonatomic) UIButton *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(retain, nonatomic) YKPLoopPlayerPlayButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UILabel *activityIconView; // @synthesize activityIconView=_activityIconView;
@property(retain, nonatomic) UIImageView *activityBgView; // @synthesize activityBgView=_activityBgView;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void).cxx_destruct;
- (void)touchInAvatarArea;
- (void)downloadAction;
- (void)shareAction;
- (void)playAction;
- (void)visitActivity;
- (void)removeBindPlayerView:(id)arg1;
- (void)bindPlayerView:(id)arg1;
- (void)setupWithModel:(id)arg1 from:(int)arg2 needLayout:(_Bool)arg3;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
