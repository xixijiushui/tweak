//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class UIImageView, UILabel, ViewTypeCustom_BoldTitleModel;

@interface ViewTypeCustom_BoldTitleCell : SKTableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_rightArrow;
    UILabel *_arrowTitle;
    ViewTypeCustom_BoldTitleModel *_model;
}

+ (float)getCellHeight;
@property(retain, nonatomic) ViewTypeCustom_BoldTitleModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *arrowTitle; // @synthesize arrowTitle=_arrowTitle;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
