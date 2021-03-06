//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class SKTitleViewWithHeadIconB, SKVideoView, SKWebViewDelegate, SokuOutSourceTitle, UGCSubtitleInfoView, UILabel, ViewTypeBUGCModel;

@interface ViewTypeBUGCell : SKTableViewCell
{
    ViewTypeBUGCModel *_ugcModel;
    SKVideoView *_videoView;
    UILabel *_keyword_label;
    SKTitleViewWithHeadIconB *_titleLabelHeadIcon;
    UGCSubtitleInfoView *_subTitleInfo;
    SokuOutSourceTitle *_outSource;
    UILabel *_publishTime;
    SKWebViewDelegate *_webDelegate;
}

+ (float)getCellHeight;
@property(retain, nonatomic) SKWebViewDelegate *webDelegate; // @synthesize webDelegate=_webDelegate;
@property(retain, nonatomic) UILabel *publishTime; // @synthesize publishTime=_publishTime;
@property(retain, nonatomic) SokuOutSourceTitle *outSource; // @synthesize outSource=_outSource;
@property(retain, nonatomic) UGCSubtitleInfoView *subTitleInfo; // @synthesize subTitleInfo=_subTitleInfo;
@property(retain, nonatomic) SKTitleViewWithHeadIconB *titleLabelHeadIcon; // @synthesize titleLabelHeadIcon=_titleLabelHeadIcon;
@property(retain, nonatomic) UILabel *keyword_label; // @synthesize keyword_label=_keyword_label;
@property(retain, nonatomic) SKVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) ViewTypeBUGCModel *ugcModel; // @synthesize ugcModel=_ugcModel;
- (void).cxx_destruct;
- (void)jump_ugc_zhibo_dType:(int)arg1;
- (_Bool)checkMyStr:(id)arg1;
- (_Bool)hasValidCmd;
- (void)clickJumpWithdType:(int)arg1;
- (void)postNoticeForRecommend;
- (void)jump_ugc_guess_dType:(int)arg1;
- (void)jump_topic_spread_dType:(int)arg1;
- (void)jump_sptopic_dType:(int)arg1;
- (void)jump_UC_dType:(int)arg1;
- (void)sendClickLogWith_dType:(int)arg1;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

