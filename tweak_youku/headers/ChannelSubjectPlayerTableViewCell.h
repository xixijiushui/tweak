//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class EmbedPlayer, NSString, UIImageView, UILabel, UIView;

@interface ChannelSubjectPlayerTableViewCell : UITableViewCell
{
    EmbedPlayer *_embedPlayer;
    id <ChannelSubjectPlayerTableViewCellDelegate> _delegate;
    UIImageView *_backgroudView;
    UIView *_backgroudColorView;
    UIImageView *_playerBackgroundView;
    UILabel *_titleLabel;
    UIView *_view;
    NSString *_videoVid;
    UIImageView *_titleImageView;
}

@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(copy, nonatomic) NSString *videoVid; // @synthesize videoVid=_videoVid;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playerBackgroundView; // @synthesize playerBackgroundView=_playerBackgroundView;
@property(retain, nonatomic) UIView *backgroudColorView; // @synthesize backgroudColorView=_backgroudColorView;
@property(retain, nonatomic) UIImageView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(nonatomic) __weak id <ChannelSubjectPlayerTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EmbedPlayer *embedPlayer; // @synthesize embedPlayer=_embedPlayer;
- (void).cxx_destruct;
- (void)clickOn:(id)arg1;
- (void)setShouldShowPlayEndView:(_Bool)arg1;
- (void)setCardView:(id)arg1 backgroundImage:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

