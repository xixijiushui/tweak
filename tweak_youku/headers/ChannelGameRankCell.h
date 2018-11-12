//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CMSCardVideo, ChannelRankIndicatorView, UIImageView, UILabel;

@interface ChannelGameRankCell : UITableViewCell
{
    id <ChannelGameRankCellDelegate> _delegate;
    UIImageView *_videoImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_avatarImageView;
    UILabel *_nickLabel;
    CMSCardVideo *_cardVideo;
    ChannelRankIndicatorView *_indicatorView;
}

@property(retain, nonatomic) ChannelRankIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) CMSCardVideo *cardVideo; // @synthesize cardVideo=_cardVideo;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(nonatomic) __weak id <ChannelGameRankCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoTapAction:(id)arg1;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 maxLine:(long long)arg4;
- (struct CGSize)sizeWithLabel:(id)arg1 maxWidth:(double)arg2;
- (void)setAvatarImageWithPath:(id)arg1;
- (void)setVideoImageWithPath:(id)arg1;
- (void)setupWithCardVideo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
