//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LFCardAvatarView, LFCardUIConfig, LFUIFollowButton, LFUILinearLayoutView, UIButton, UILabel;

@interface LFLiveHouseCardView : UIView
{
    UIView *_backgroundView;
    LFCardAvatarView *_avatarView;
    UIButton *_feedbackButton;
    UILabel *_nameLabel;
    UILabel *_journalLabel;
    UILabel *_followingNumberLabel;
    UIView *_lineView;
    UILabel *_fansNumberLabel;
    LFUILinearLayoutView *_layoutView;
    LFUIFollowButton *_followButton;
    UIButton *_homepageButton;
    LFCardUIConfig *_cardConfig;
    CDUnknownBlockType _feedbackButtonClick;
    CDUnknownBlockType _followButtonClick;
    CDUnknownBlockType _homePageButtonClick;
}

@property(copy, nonatomic) CDUnknownBlockType homePageButtonClick; // @synthesize homePageButtonClick=_homePageButtonClick;
@property(copy, nonatomic) CDUnknownBlockType followButtonClick; // @synthesize followButtonClick=_followButtonClick;
@property(copy, nonatomic) CDUnknownBlockType feedbackButtonClick; // @synthesize feedbackButtonClick=_feedbackButtonClick;
@property(retain, nonatomic) LFCardUIConfig *cardConfig; // @synthesize cardConfig=_cardConfig;
- (void).cxx_destruct;
- (void)buttonDidClick:(id)arg1;
- (void)settingBottomButtonsLayout;
- (void)settingFansNumberLabelLayout;
- (void)settingLineViewLayout;
- (void)settingFollowingNumberLabelLayout;
- (void)settingJournalLabelLayout;
- (void)settingNameLabelLayout;
- (void)settingFeedbackButtonLayout;
- (void)settingAvatarViewLayout;
- (void)settingBackgroundViewLayout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

