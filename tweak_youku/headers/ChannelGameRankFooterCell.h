//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface ChannelGameRankFooterCell : UITableViewCell
{
    UILabel *_label;
    UIImageView *_imageView;
    UIView *_bgView;
    id <ChannelGameRankFooterCellDelegate> _delegate;
}

@property(nonatomic) __weak id <ChannelGameRankFooterCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapAction;
- (void)setFoldState:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

