//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFStarArrivalBaseCell.h"

@class NSArray, UIButton, UIImageView, UILabel, UIView, YKFStarArrivalTitleView, YKFStarArrivalWelfareViewModel;

@interface YKFStarArrivalWelfareCell : YKFStarArrivalBaseCell
{
    YKFStarArrivalTitleView *_shareTitleView;
    UILabel *_welfareDesLabel;
    NSArray *_userImageViews;
    NSArray *_userImageBackBorderView;
    NSArray *_userRankImageViews;
    UILabel *_moreIconLabel;
    UILabel *_zeroInfluenceLabel;
    UIImageView *_zeroInfluenceRankImageView;
    UIButton *_influenceButton;
    UIView *_seperateLine;
    UIButton *_userInfluenceButton;
    UIButton *_shareButton;
    UIView *_backView;
    YKFStarArrivalWelfareViewModel *_welfareViewModel;
}

+ (double)calculateHeight:(id)arg1;
+ (double)descHeight:(id)arg1;
+ (id)attributedStringFromStingWithFont:(id)arg1 withLineHeight:(double)arg2 text:(id)arg3;
@property(retain, nonatomic) YKFStarArrivalWelfareViewModel *welfareViewModel; // @synthesize welfareViewModel=_welfareViewModel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *userInfluenceButton; // @synthesize userInfluenceButton=_userInfluenceButton;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UIButton *influenceButton; // @synthesize influenceButton=_influenceButton;
@property(retain, nonatomic) UIImageView *zeroInfluenceRankImageView; // @synthesize zeroInfluenceRankImageView=_zeroInfluenceRankImageView;
@property(retain, nonatomic) UILabel *zeroInfluenceLabel; // @synthesize zeroInfluenceLabel=_zeroInfluenceLabel;
@property(retain, nonatomic) UILabel *moreIconLabel; // @synthesize moreIconLabel=_moreIconLabel;
@property(retain, nonatomic) NSArray *userRankImageViews; // @synthesize userRankImageViews=_userRankImageViews;
@property(retain, nonatomic) NSArray *userImageBackBorderView; // @synthesize userImageBackBorderView=_userImageBackBorderView;
@property(retain, nonatomic) NSArray *userImageViews; // @synthesize userImageViews=_userImageViews;
@property(retain, nonatomic) UILabel *welfareDesLabel; // @synthesize welfareDesLabel=_welfareDesLabel;
@property(retain, nonatomic) YKFStarArrivalTitleView *shareTitleView; // @synthesize shareTitleView=_shareTitleView;
- (void).cxx_destruct;
- (int)curStarcomingStatus;
- (id)influenceTitle:(id)arg1;
- (void)shareWelfare;
- (void)gotoRule:(id)arg1;
- (id)buildRankImageViews:(long long)arg1;
- (id)buildImageBackBorderViews:(long long)arg1;
- (id)buildImageViews:(long long)arg1;
- (id)buildUserImageView;
- (void)updateConstraints;
- (void)bindViewModel:(id)arg1;
- (id)init;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

