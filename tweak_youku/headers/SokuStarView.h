//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKRankView, UIImageView, UILabel, VT17PersonModel;

@interface SokuStarView : UIView
{
    UIImageView *_headIcon;
    UIImageView *_circleIcon;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    SKRankView *_rankView;
    UILabel *_vote;
    VT17PersonModel *_personModel;
}

@property(retain, nonatomic) VT17PersonModel *personModel; // @synthesize personModel=_personModel;
@property(retain, nonatomic) UILabel *vote; // @synthesize vote=_vote;
@property(retain, nonatomic) SKRankView *rankView; // @synthesize rankView=_rankView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *circleIcon; // @synthesize circleIcon=_circleIcon;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

