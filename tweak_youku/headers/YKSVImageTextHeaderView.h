//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class M13BadgeView, NSDictionary, UIImageView, UILabel, YKSVButton;

@interface YKSVImageTextHeaderView : UIView
{
    NSDictionary *_titleLabelAttributes;
    double _currentHeight;
    id <YKSVImageTextHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIView *_authorContainerView;
    UIImageView *_authorAvatarImageView;
    UILabel *_authorNameLabel;
    UIImageView *_videosImageView;
    YKSVButton *_videosButton;
    M13BadgeView *_badgeView;
}

@property(retain, nonatomic) M13BadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) YKSVButton *videosButton; // @synthesize videosButton=_videosButton;
@property(retain, nonatomic) UIImageView *videosImageView; // @synthesize videosImageView=_videosImageView;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) UIImageView *authorAvatarImageView; // @synthesize authorAvatarImageView=_authorAvatarImageView;
@property(retain, nonatomic) UIView *authorContainerView; // @synthesize authorContainerView=_authorContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <YKSVImageTextHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
- (void).cxx_destruct;
- (void)clickVideoButton;
- (double)heightWithModel:(id)arg1;
- (id)dateStringWithData:(id)arg1;
- (void)refreshUIWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

