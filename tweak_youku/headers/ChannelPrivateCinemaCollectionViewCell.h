//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "CardVideoViewDelegate.h"

@class CMSCardVideo, ChannelVideoView, NSString, UIImageView, UILabel;

@interface ChannelPrivateCinemaCollectionViewCell : UICollectionViewCell <CardVideoViewDelegate>
{
    _Bool _isShowScore;
    CMSCardVideo *_brandVideo;
    id <ChannelPrivateCinemaCollectionViewCellDelegate> _delegate;
    UIImageView *_imageView;
    ChannelVideoView *_videoView;
    UIImageView *_changeImageView;
    UILabel *_changeLabel;
    UILabel *_changeLabel2;
    UILabel *_vipLabel;
    UILabel *_scoreLabelLeft;
    UILabel *_scoreLabelRight;
    struct CGRect _textFrame;
}

@property(retain, nonatomic) UILabel *scoreLabelRight; // @synthesize scoreLabelRight=_scoreLabelRight;
@property(retain, nonatomic) UILabel *scoreLabelLeft; // @synthesize scoreLabelLeft=_scoreLabelLeft;
@property(retain, nonatomic) UILabel *vipLabel; // @synthesize vipLabel=_vipLabel;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(retain, nonatomic) UILabel *changeLabel2; // @synthesize changeLabel2=_changeLabel2;
@property(retain, nonatomic) UILabel *changeLabel; // @synthesize changeLabel=_changeLabel;
@property(retain, nonatomic) UIImageView *changeImageView; // @synthesize changeImageView=_changeImageView;
@property(retain, nonatomic) ChannelVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <ChannelPrivateCinemaCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowScore; // @synthesize isShowScore=_isShowScore;
@property(retain, nonatomic) CMSCardVideo *brandVideo; // @synthesize brandVideo=_brandVideo;
- (void).cxx_destruct;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)changeAnother:(id)arg1;
- (void)showShadow:(_Bool)arg1;
- (void)showBlackBackgroundColor:(_Bool)arg1;
- (void)setupWithCardVideo:(id)arg1 change:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

