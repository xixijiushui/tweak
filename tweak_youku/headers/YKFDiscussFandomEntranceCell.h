//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "YKFVideoDiscussionCellProtocol.h"

@class UIButton, UIImageView, UILabel, UIView, YKFDiscussFandomEntranceViewModel;

@interface YKFDiscussFandomEntranceCell : UITableViewCell <YKFVideoDiscussionCellProtocol>
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_descInfoLabel;
    UILabel *_rightArrowLabel;
    UIButton *_backgroundButton;
    UIView *_seperateLineView;
    YKFDiscussFandomEntranceViewModel *_viewModel;
}

@property(retain, nonatomic) YKFDiscussFandomEntranceViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *seperateLineView; // @synthesize seperateLineView=_seperateLineView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UILabel *rightArrowLabel; // @synthesize rightArrowLabel=_rightArrowLabel;
@property(retain, nonatomic) UILabel *descInfoLabel; // @synthesize descInfoLabel=_descInfoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)spm;
- (void)clickCommand;
- (void)bindViewModel:(id)arg1;
- (void)updateConstraints;
- (void)addConstraints;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

