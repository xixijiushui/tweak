//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface LFGiftNumberBoardCell : UICollectionViewCell
{
    id _data;
    UILabel *_countLabel;
    UILabel *_descLabel;
    UILabel *_diyLabel;
}

@property(retain, nonatomic) UILabel *diyLabel; // @synthesize diyLabel=_diyLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

