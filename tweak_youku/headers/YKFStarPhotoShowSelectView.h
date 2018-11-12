//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UILabel, YKFIconLabel, YKFSimpleLinearLayout;

@interface YKFStarPhotoShowSelectView : UICollectionReusableView
{
    UILabel *_titleLabel;
    YKFIconLabel *_selectIconLabel;
    UILabel *_countLabel;
    YKFSimpleLinearLayout *_simpleLinearLayout;
}

@property(nonatomic) __weak YKFSimpleLinearLayout *simpleLinearLayout; // @synthesize simpleLinearLayout=_simpleLinearLayout;
@property(nonatomic) __weak UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak YKFIconLabel *selectIconLabel; // @synthesize selectIconLabel=_selectIconLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateWithShow:(id)arg1 count:(long long)arg2;
- (void)setupView;
- (void)awakeFromNib;

@end
