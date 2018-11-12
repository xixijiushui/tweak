//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTCollectionViewCell.h"

@class HistoryPlaylistCoverView, UIImage, UIImageView, UILabel, UIView, YKPCCachePreviewHorizontalView;

@interface YKPCHistoryHorizontalCell : PSTCollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UIImageView *_imgView;
    UIImageView *_shadowImageView;
    YKPCCachePreviewHorizontalView *_downloadingView;
    HistoryPlaylistCoverView *_playlistCoverView;
    UIImage *_videoPlaceholderImage;
    UIView *_imageContentView;
}

@property(retain, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(retain, nonatomic) UIImage *videoPlaceholderImage; // @synthesize videoPlaceholderImage=_videoPlaceholderImage;
@property(retain, nonatomic) HistoryPlaylistCoverView *playlistCoverView; // @synthesize playlistCoverView=_playlistCoverView;
@property(retain, nonatomic) YKPCCachePreviewHorizontalView *downloadingView; // @synthesize downloadingView=_downloadingView;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)videoDefaultImage;
- (void)reloadCacheData:(id)arg1 isDownloading:(_Bool)arg2 downloadingCount:(unsigned long long)arg3;
- (void)reloadData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

