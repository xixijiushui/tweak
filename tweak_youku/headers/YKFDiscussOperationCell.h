//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "YKFVideoDiscussionCellProtocol.h"

@class UIButton, UIImageView, UILabel, YKFDiscussOperationViewModel;

@interface YKFDiscussOperationCell : UITableViewCell <YKFVideoDiscussionCellProtocol>
{
    UIImageView *_optImageView;
    UIImageView *_backgroundImageView;
    UIButton *_backgroundButton;
    UILabel *_optTitleLabel;
    UILabel *_optSubtitleLabel;
    UIButton *_actionView;
    UIButton *_actionRoundView;
    UILabel *_actionTitleLabel;
    UILabel *_actionArrowLabel;
    YKFDiscussOperationViewModel *_viewModel;
}

@property(retain, nonatomic) YKFDiscussOperationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *actionArrowLabel; // @synthesize actionArrowLabel=_actionArrowLabel;
@property(retain, nonatomic) UILabel *actionTitleLabel; // @synthesize actionTitleLabel=_actionTitleLabel;
@property(retain, nonatomic) UIButton *actionRoundView; // @synthesize actionRoundView=_actionRoundView;
@property(retain, nonatomic) UIButton *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UILabel *optSubtitleLabel; // @synthesize optSubtitleLabel=_optSubtitleLabel;
@property(retain, nonatomic) UILabel *optTitleLabel; // @synthesize optTitleLabel=_optTitleLabel;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *optImageView; // @synthesize optImageView=_optImageView;
- (void).cxx_destruct;
- (id)buildActionView;
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
