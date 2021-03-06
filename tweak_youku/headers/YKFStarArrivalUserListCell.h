//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView, YKFStarArrivalUsersRankItemModel;

@interface YKFStarArrivalUserListCell : UITableViewCell
{
    id <YKFStarArrivalUserListCellDelegate> _delegate;
    UIView *_ownerView;
    UILabel *_ownerLevelLabel;
    UIImageView *_ownerHeaderImageView;
    UILabel *_nickNameLabel;
    UILabel *_ownerAbilityLabel;
    YKFStarArrivalUsersRankItemModel *_rankItemModel;
}

+ (double)calculateHeight;
@property(retain, nonatomic) YKFStarArrivalUsersRankItemModel *rankItemModel; // @synthesize rankItemModel=_rankItemModel;
@property(retain, nonatomic) UILabel *ownerAbilityLabel; // @synthesize ownerAbilityLabel=_ownerAbilityLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *ownerHeaderImageView; // @synthesize ownerHeaderImageView=_ownerHeaderImageView;
@property(retain, nonatomic) UILabel *ownerLevelLabel; // @synthesize ownerLevelLabel=_ownerLevelLabel;
@property(retain, nonatomic) UIView *ownerView; // @synthesize ownerView=_ownerView;
@property(nonatomic) __weak id <YKFStarArrivalUserListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpToPersonalPage;
- (void)configCellContent:(id)arg1;

@end

