//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface ASKScheduleListViewBattleCell : UITableViewCell
{
    UIView *_bgView;
    UILabel *_typeDescriptionLabel;
    UILabel *_timeLabel;
    UIImageView *_leftTeamImageView;
    UIImageView *_competitionStatusImageView;
    UIImageView *_leftTeamBgView;
    UIImageView *_rightTeamBgView;
    UIImageView *_rightTeamImageView;
    UILabel *_leftTeamNameLabel;
    UILabel *_rightTeamNameLabel;
    UILabel *_competitiomNameLabel;
    UILabel *_competitionRealNameLabel;
    UILabel *_competitionRoundLabel;
    UILabel *_competitionScoreLabel;
    UILabel *_competitionStatusLabel;
    UILabel *_chargeLabel;
    UILabel *_leftNameLabel;
    NSLayoutConstraint *_lightPointLabelHeightConstrant;
    NSLayoutConstraint *_competitionStateNameLabelBottonConstrant;
    UILabel *_lightPointLabel;
    UIView *_lineView;
}

+ (double)cellHeightForCompetetion:(id)arg1;
+ (id)scoreTextWithCompetition:(id)arg1;
+ (void)configStatusLabel:(id)arg1 statusImageView:(id)arg2 withCompetition:(id)arg3;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *lightPointLabel; // @synthesize lightPointLabel=_lightPointLabel;
@property(nonatomic) __weak NSLayoutConstraint *competitionStateNameLabelBottonConstrant; // @synthesize competitionStateNameLabelBottonConstrant=_competitionStateNameLabelBottonConstrant;
@property(nonatomic) __weak NSLayoutConstraint *lightPointLabelHeightConstrant; // @synthesize lightPointLabelHeightConstrant=_lightPointLabelHeightConstrant;
@property(nonatomic) __weak UILabel *leftNameLabel; // @synthesize leftNameLabel=_leftNameLabel;
@property(nonatomic) __weak UILabel *chargeLabel; // @synthesize chargeLabel=_chargeLabel;
@property(nonatomic) __weak UILabel *competitionStatusLabel; // @synthesize competitionStatusLabel=_competitionStatusLabel;
@property(nonatomic) __weak UILabel *competitionScoreLabel; // @synthesize competitionScoreLabel=_competitionScoreLabel;
@property(nonatomic) __weak UILabel *competitionRoundLabel; // @synthesize competitionRoundLabel=_competitionRoundLabel;
@property(nonatomic) __weak UILabel *competitionRealNameLabel; // @synthesize competitionRealNameLabel=_competitionRealNameLabel;
@property(nonatomic) __weak UILabel *competitiomNameLabel; // @synthesize competitiomNameLabel=_competitiomNameLabel;
@property(nonatomic) __weak UILabel *rightTeamNameLabel; // @synthesize rightTeamNameLabel=_rightTeamNameLabel;
@property(nonatomic) __weak UILabel *leftTeamNameLabel; // @synthesize leftTeamNameLabel=_leftTeamNameLabel;
@property(nonatomic) __weak UIImageView *rightTeamImageView; // @synthesize rightTeamImageView=_rightTeamImageView;
@property(nonatomic) __weak UIImageView *rightTeamBgView; // @synthesize rightTeamBgView=_rightTeamBgView;
@property(nonatomic) __weak UIImageView *leftTeamBgView; // @synthesize leftTeamBgView=_leftTeamBgView;
@property(nonatomic) __weak UIImageView *competitionStatusImageView; // @synthesize competitionStatusImageView=_competitionStatusImageView;
@property(nonatomic) __weak UIImageView *leftTeamImageView; // @synthesize leftTeamImageView=_leftTeamImageView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *typeDescriptionLabel; // @synthesize typeDescriptionLabel=_typeDescriptionLabel;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)configNameWithCompetition:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

