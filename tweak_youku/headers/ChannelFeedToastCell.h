//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface ChannelFeedToastCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIView *_bgColorView;
}

@property(retain, nonatomic) UIView *bgColorView; // @synthesize bgColorView=_bgColorView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)bindData;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

