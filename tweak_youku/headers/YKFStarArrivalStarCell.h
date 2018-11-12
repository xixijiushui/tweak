//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, YKFGradientView, YKFStarArrvialStarSectionItem;

@interface YKFStarArrivalStarCell : UICollectionViewCell
{
    UIImageView *_backgroudImageView;
    UIImageView *_coverImageView;
    UILabel *_starNameLabel;
    UILabel *_starDesLabel;
    YKFGradientView *_gradientView;
    YKFStarArrvialStarSectionItem *_itemViewMode;
}

@property(retain, nonatomic) YKFStarArrvialStarSectionItem *itemViewMode; // @synthesize itemViewMode=_itemViewMode;
@property(nonatomic) __weak YKFGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) __weak UILabel *starDesLabel; // @synthesize starDesLabel=_starDesLabel;
@property(nonatomic) __weak UILabel *starNameLabel; // @synthesize starNameLabel=_starNameLabel;
@property(nonatomic) __weak UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak UIImageView *backgroudImageView; // @synthesize backgroudImageView=_backgroudImageView;
- (void).cxx_destruct;
- (void)gotoStarArrivalList;
- (void)bindViewModel:(id)arg1;
- (void)awakeFromNib;

@end
