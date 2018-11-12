//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YKFStarArrivalUserListCellDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UITableView, YKFStarArrivalUsersRankViewModel;

@interface YKFStarArrivalUsersRankView : UIView <YKFStarArrivalUserListCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UIView *_blackgroundView;
    UIView *_containerView;
    UITableView *_tableView;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    UIView *_headerView;
    UILabel *_titleLabel;
    UILabel *_desTextLabel;
    UIView *_separatorLineView;
    UIView *_ownerView;
    UILabel *_ownerLevelLabel;
    UIImageView *_ownerHeaderImageView;
    UILabel *_nickNameLabel;
    UILabel *_ownerAbilityLabel;
    UIView *_rankHeaderView;
    UIView *_leftDotLine;
    UILabel *_rankTitleLabel;
    UIView *_rightDotLine;
    UIView *_tableViewHeader;
    YKFStarArrivalUsersRankViewModel *_rankViewModel;
}

+ (void)drawDashLine:(id)arg1 lineLength:(int)arg2 lineSpacing:(int)arg3 lineColor:(id)arg4;
@property(retain, nonatomic) YKFStarArrivalUsersRankViewModel *rankViewModel; // @synthesize rankViewModel=_rankViewModel;
@property(retain, nonatomic) UIView *tableViewHeader; // @synthesize tableViewHeader=_tableViewHeader;
@property(retain, nonatomic) UIView *rightDotLine; // @synthesize rightDotLine=_rightDotLine;
@property(retain, nonatomic) UILabel *rankTitleLabel; // @synthesize rankTitleLabel=_rankTitleLabel;
@property(retain, nonatomic) UIView *leftDotLine; // @synthesize leftDotLine=_leftDotLine;
@property(retain, nonatomic) UIView *rankHeaderView; // @synthesize rankHeaderView=_rankHeaderView;
@property(retain, nonatomic) UILabel *ownerAbilityLabel; // @synthesize ownerAbilityLabel=_ownerAbilityLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *ownerHeaderImageView; // @synthesize ownerHeaderImageView=_ownerHeaderImageView;
@property(retain, nonatomic) UILabel *ownerLevelLabel; // @synthesize ownerLevelLabel=_ownerLevelLabel;
@property(retain, nonatomic) UIView *ownerView; // @synthesize ownerView=_ownerView;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UILabel *desTextLabel; // @synthesize desTextLabel=_desTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *blackgroundView; // @synthesize blackgroundView=_blackgroundView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)jumpToPersonalPage:(id)arg1;
- (void)ownerJumpToPersonalPage;
- (void)cancelButtonTouched:(id)arg1;
- (void)refreshTableView;
- (void)showUserRankListView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

