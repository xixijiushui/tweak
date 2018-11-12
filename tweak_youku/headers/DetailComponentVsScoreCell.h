//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class DetailCardsController, NSArray, NSString, UIImageView, UILabel;

@interface DetailComponentVsScoreCell : UITableViewCell
{
    DetailCardsController *_cardsController;
    UIImageView *_bgImageView;
    UIImageView *_leftImageView;
    UILabel *_leftTitleView;
    UIImageView *_rightImageView;
    UILabel *_rightTitleView;
    UILabel *_centerTimeView;
    UILabel *_centerScoreView;
    UILabel *_centerCountView;
    NSArray *_cardVideos;
    NSString *_bgImgUrl;
}

@property(retain, nonatomic) NSString *bgImgUrl; // @synthesize bgImgUrl=_bgImgUrl;
@property(retain, nonatomic) NSArray *cardVideos; // @synthesize cardVideos=_cardVideos;
@property(retain, nonatomic) UILabel *centerCountView; // @synthesize centerCountView=_centerCountView;
@property(retain, nonatomic) UILabel *centerScoreView; // @synthesize centerScoreView=_centerScoreView;
@property(retain, nonatomic) UILabel *centerTimeView; // @synthesize centerTimeView=_centerTimeView;
@property(retain, nonatomic) UILabel *rightTitleView; // @synthesize rightTitleView=_rightTitleView;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *leftTitleView; // @synthesize leftTitleView=_leftTitleView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
- (void).cxx_destruct;
- (void)setupCardHeaderHiden:(_Bool)arg1;
- (void)setupWithCardVideos:(id)arg1 bgImgUrl:(id)arg2;
- (void)tapAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
