//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKFeedStartPlayingViewDelegate.h"
#import "YKFeedViewProtocol.h"

@class CAGradientLayer, NSString, UIImageView, UILabel, YKFeedModel, YKFeedStartPlayingView;

@interface YKFeedChannelBodyView : UIView <YKFeedStartPlayingViewDelegate, YKFeedViewProtocol>
{
    id <YKFeedViewDelegate> _delegate;
    YKFeedModel *_model;
    UIImageView *_videoImageView;
    UIImageView *_videoImageViewShadow;
    YKFeedStartPlayingView *_startPlayingView;
    UILabel *_titleLabel;
    UILabel *_playCountLabel;
    CAGradientLayer *_topShadow;
    double _selfWidthCache;
    UILabel *_timeLabel;
    CAGradientLayer *_bottomShadow;
    struct CGSize _titleSizeCache;
}

+ (double)heightForWidth:(double)arg1 model:(id)arg2;
@property(retain, nonatomic) CAGradientLayer *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) struct CGSize titleSizeCache; // @synthesize titleSizeCache=_titleSizeCache;
@property(nonatomic) double selfWidthCache; // @synthesize selfWidthCache=_selfWidthCache;
@property(retain, nonatomic) CAGradientLayer *topShadow; // @synthesize topShadow=_topShadow;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YKFeedStartPlayingView *startPlayingView; // @synthesize startPlayingView=_startPlayingView;
@property(retain, nonatomic) UIImageView *videoImageViewShadow; // @synthesize videoImageViewShadow=_videoImageViewShadow;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) YKFeedModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <YKFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startPlayingViewDidClickPlay:(id)arg1;
- (void)relayoutSubviewsWithModel:(id)arg1;
- (void)fillTimeLabelWithModel:(id)arg1;
- (void)fillVideoFrontWithModel:(id)arg1;
- (void)fillPlayCountLabelWithModel:(id)arg1;
- (void)fillTitleLabelWithModel:(id)arg1;
- (void)fillSubviewsModel:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

