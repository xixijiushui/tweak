//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel, YKFDiscussTopicItemViewModel, YKFGradientView;

@interface YKFDiscussTopicItemView : UICollectionViewCell
{
    YKFGradientView *_discussBackgroundImageView;
    UIButton *_backgroundButton;
    UILabel *_discussLabel;
    UILabel *_topicLabel;
    UIImageView *_posterHeaderImageView;
    UILabel *_postTitleLabel;
    YKFDiscussTopicItemViewModel *_viewModel;
}

@property(retain, nonatomic) YKFDiscussTopicItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *postTitleLabel; // @synthesize postTitleLabel=_postTitleLabel;
@property(retain, nonatomic) UIImageView *posterHeaderImageView; // @synthesize posterHeaderImageView=_posterHeaderImageView;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UILabel *discussLabel; // @synthesize discussLabel=_discussLabel;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) YKFGradientView *discussBackgroundImageView; // @synthesize discussBackgroundImageView=_discussBackgroundImageView;
- (void).cxx_destruct;
- (id)discussBackgroundMaskLayer:(double)arg1;
- (void)bindViewModel:(id)arg1;
- (void)addConstraints;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
