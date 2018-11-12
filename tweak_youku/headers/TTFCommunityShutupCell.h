//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, TTFPersonalLevelImageView, UIButton, UIImageView, UILabel, UIView, YKFCommunityShutupModel;

@interface TTFCommunityShutupCell : UITableViewCell
{
    id <TTFCommunityShutupCellDelegate> _delegate;
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
    TTFPersonalLevelImageView *_medalImageView;
    UIButton *_unShutUpButton;
    UILabel *_adminLabel;
    UILabel *_adminNameLabel;
    UILabel *_shutUpDaysLabel;
    UILabel *_shutUpTimeLabel;
    UIView *_separatorLineView;
    NSLayoutConstraint *_separatorLineViewHeightConstraint;
    YKFCommunityShutupModel *_userModel;
}

@property(retain, nonatomic) YKFCommunityShutupModel *userModel; // @synthesize userModel=_userModel;
@property(nonatomic) __weak NSLayoutConstraint *separatorLineViewHeightConstraint; // @synthesize separatorLineViewHeightConstraint=_separatorLineViewHeightConstraint;
@property(nonatomic) __weak UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(nonatomic) __weak UILabel *shutUpTimeLabel; // @synthesize shutUpTimeLabel=_shutUpTimeLabel;
@property(nonatomic) __weak UILabel *shutUpDaysLabel; // @synthesize shutUpDaysLabel=_shutUpDaysLabel;
@property(nonatomic) __weak UILabel *adminNameLabel; // @synthesize adminNameLabel=_adminNameLabel;
@property(nonatomic) __weak UILabel *adminLabel; // @synthesize adminLabel=_adminLabel;
@property(nonatomic) __weak UIButton *unShutUpButton; // @synthesize unShutUpButton=_unShutUpButton;
@property(nonatomic) __weak TTFPersonalLevelImageView *medalImageView; // @synthesize medalImageView=_medalImageView;
@property(nonatomic) __weak UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <TTFCommunityShutupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapAdminName:(id)arg1;
- (void)handlerUnShutUpButtonClick:(id)arg1;
- (void)jumpToPersonalPage:(id)arg1;
- (void)configCellContent:(id)arg1;
- (void)setup;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
