//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface VIPChannelListMoreView : UICollectionViewCell
{
    struct CGSize _titleSize;
    id <VIPChannelListMoreViewDelegate> _delegate;
    UIImageView *_bgView;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <VIPChannelListMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1;
- (void)tapGesture;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

