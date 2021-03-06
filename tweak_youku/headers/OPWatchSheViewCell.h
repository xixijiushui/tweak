//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class OPWatchSheImageView, OPWatchSheModel, UILabel;

@interface OPWatchSheViewCell : UITableViewCell
{
    double orginX;
    double imageViewHeight;
    double imageAndLabelSpace;
    OPWatchSheImageView *_watchSheImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    OPWatchSheModel *_currentModel;
}

@property(retain, nonatomic) OPWatchSheModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) OPWatchSheImageView *watchSheImageView; // @synthesize watchSheImageView=_watchSheImageView;
@property(nonatomic) double imageAndLabelSpace; // @synthesize imageAndLabelSpace;
@property(nonatomic) double imageViewHeight; // @synthesize imageViewHeight;
@property(nonatomic) double orginX; // @synthesize orginX;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupModel:(id)arg1;
- (void)setAvailableCellWithModel:(id)arg1 selected:(_Bool)arg2;
- (void)setSelectedCell:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

