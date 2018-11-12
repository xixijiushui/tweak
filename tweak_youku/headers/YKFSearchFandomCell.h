//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, YKFSearchFandomViewModel;

@interface YKFSearchFandomCell : UICollectionViewCell
{
    UIImageView *_fandomImageView;
    UILabel *_fandomNameLabel;
    UILabel *_fansCountLabel;
    UILabel *_rightArrowLabel;
    UIImageView *_rightArrowImageView;
    YKFSearchFandomViewModel *_viewModel;
}

@property(retain, nonatomic) YKFSearchFandomViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(nonatomic) __weak UILabel *rightArrowLabel; // @synthesize rightArrowLabel=_rightArrowLabel;
@property(nonatomic) __weak UILabel *fansCountLabel; // @synthesize fansCountLabel=_fansCountLabel;
@property(nonatomic) __weak UILabel *fandomNameLabel; // @synthesize fandomNameLabel=_fandomNameLabel;
@property(nonatomic) __weak UIImageView *fandomImageView; // @synthesize fandomImageView=_fandomImageView;
- (void).cxx_destruct;
- (void)bindWithViewModel:(id)arg1;
- (void)changeLayout:(_Bool)arg1;
- (void)awakeFromNib;

@end
