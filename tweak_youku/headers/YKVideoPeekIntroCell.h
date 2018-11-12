//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, CATextLayer, DetailModel, UILabel;

@interface YKVideoPeekIntroCell : UITableViewCell
{
    DetailModel *_model;
    UILabel *_titleLabel;
    CATextLayer *_scoreTextLayer;
    UILabel *_playLabel;
    UILabel *_commentLabel;
    UILabel *_descLabel;
    CALayer *_lineLayer;
}

+ (double)heightOfVideoPeekCommentCellWithDescription:(id)arg1;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *playLabel; // @synthesize playLabel=_playLabel;
@property(retain, nonatomic) CATextLayer *scoreTextLayer; // @synthesize scoreTextLayer=_scoreTextLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DetailModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)setTextLayerWithString:(id)arg1 textLayerType:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

