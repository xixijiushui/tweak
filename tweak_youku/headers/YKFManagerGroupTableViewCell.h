//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel, UIView, YKFManagerGroupGroupModel;

@interface YKFManagerGroupTableViewCell : UITableViewCell
{
    _Bool _recallButtonIsSelected;
    id <YKFManagerGroupTableViewCellDelegate> _delegate;
    UILabel *_groupNameLabel;
    UIButton *_recallButton;
    UIButton *_applyButton;
    UIView *_masterView;
    UIView *_memberListView;
    UIView *_sepratorLineView;
    long long _column;
    long long _itemCount;
    YKFManagerGroupGroupModel *_groupViewModel;
}

+ (double)heightWithViewModel:(id)arg1;
@property(retain, nonatomic) YKFManagerGroupGroupModel *groupViewModel; // @synthesize groupViewModel=_groupViewModel;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) long long column; // @synthesize column=_column;
@property(nonatomic) _Bool recallButtonIsSelected; // @synthesize recallButtonIsSelected=_recallButtonIsSelected;
@property(retain, nonatomic) UIView *sepratorLineView; // @synthesize sepratorLineView=_sepratorLineView;
@property(retain, nonatomic) UIView *memberListView; // @synthesize memberListView=_memberListView;
@property(retain, nonatomic) UIView *masterView; // @synthesize masterView=_masterView;
@property(retain, nonatomic) UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) UIButton *recallButton; // @synthesize recallButton=_recallButton;
@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(nonatomic) __weak id <YKFManagerGroupTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadMasterItemView;
- (void)addDeleteButtonOnMemberViewWithIndex:(long long)arg1;
- (void)updateMemberSubviewsFrameWithIndex:(long long)arg1;
- (void)loadMemberSubviewsWithIndex:(long long)arg1 model:(id)arg2;
- (void)removeSubviewsOfMemberListView;
- (void)applyTouched:(id)arg1;
- (void)avatarTouched:(id)arg1;
- (void)deleteTouched:(id)arg1;
- (void)deposeTouched:(id)arg1;
- (void)layoutSubviews;
- (void)clearContentView;
- (void)updateCellWithViewModel:(id)arg1;

@end
