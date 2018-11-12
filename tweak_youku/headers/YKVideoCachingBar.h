//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVideoCellView.h"

@class DownloadTaskModel, NSMutableArray, UIImageView, UILabel, UIView, YKGradientProgressView;

@interface YKVideoCachingBar : YKVideoCellView
{
    UILabel *_videoDescLb;
    UILabel *_sizeDescLb;
    YKGradientProgressView *_progressView;
    NSMutableArray *_baseSpeeds;
    NSMutableArray *_extraSpeeds;
    double _baseSpeed;
    double _extraSpeed;
    long long _badgeValue;
    UIView *_maskView;
    UIView *_downloadingView;
    UIImageView *_downloadImageView;
    UILabel *_downloadingLabel;
    DownloadTaskModel *_taskModel;
}

+ (id)newFromCell:(id)arg1;
+ (id)viewFromCell:(id)arg1;
@property(retain, nonatomic) DownloadTaskModel *taskModel; // @synthesize taskModel=_taskModel;
@property(retain, nonatomic) UILabel *downloadingLabel; // @synthesize downloadingLabel=_downloadingLabel;
@property(retain, nonatomic) UIImageView *downloadImageView; // @synthesize downloadImageView=_downloadImageView;
@property(retain, nonatomic) UIView *downloadingView; // @synthesize downloadingView=_downloadingView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (void)refreshDownloadAverageSpeedWithDownloadTaskModel:(id)arg1;
- (id)beautySpeedWithBytes:(double)arg1;
- (_Bool)isUploadFinished;
- (id)progressView;
- (id)sizeDescLb;
- (id)videoDescLb;
- (void)layoutSubviews;
- (void)settingDownloadingCount:(unsigned long long)arg1;
- (id)fileTotalSize;
- (id)currentDownloadedSize;
- (void)reloadDesc;
- (void)reloadTitle;
- (void)reloadProgressView;
- (void)reloadDownloadState:(id)arg1;
- (void)reloadDownloadStateWithVideo:(id)arg1 taskModel:(id)arg2;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1;

@end

