//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYUserBaseViewController.h"

#import "HYUserSDKInputCellDelegate.h"

@class HYUserNicknameInfo, HYUserSDKNicknameInputTableViewCell, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface HYModifyNickNameViewController : HYUserBaseViewController <HYUserSDKInputCellDelegate>
{
    HYUserNicknameInfo *_info;
    unsigned long long _viewType;
    HYUserSDKNicknameInputTableViewCell *_nicknameCell;
    UILabel *_tipLabel;
    NSLayoutConstraint *_actionButtonLeadingConstraint;
    NSLayoutConstraint *_actionButtonTrailingConstraint;
    UIImageView *_statusImageView;
    UILabel *_nicknameLabel;
    UILabel *_reasonLabel;
    UILabel *_statusLabel;
}

+ (unsigned long long)viewTypeWithNicknameInfo:(id)arg1;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(nonatomic) __weak UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(nonatomic) __weak UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) __weak NSLayoutConstraint *actionButtonTrailingConstraint; // @synthesize actionButtonTrailingConstraint=_actionButtonTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *actionButtonLeadingConstraint; // @synthesize actionButtonLeadingConstraint=_actionButtonLeadingConstraint;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) HYUserSDKNicknameInputTableViewCell *nicknameCell; // @synthesize nicknameCell=_nicknameCell;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) HYUserNicknameInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)controlNameWithInputTableViewCell:(id)arg1;
- (id)spmWithInputTableViewCell:(id)arg1;
- (id)spm;
- (id)pageName;
- (void)inputCellDidEndEditing:(id)arg1;
- (void)modifyAction:(id)arg1;
- (void)refreshSubviewsContent;
- (void)closeSelf;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
