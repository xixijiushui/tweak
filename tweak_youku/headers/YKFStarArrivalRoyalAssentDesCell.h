//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFStarArrivalBaseCell.h"

@class UIImageView, UILabel, YKFStarArrivalRoyalAssentDesViewModel;

@interface YKFStarArrivalRoyalAssentDesCell : YKFStarArrivalBaseCell
{
    YKFStarArrivalRoyalAssentDesViewModel *_desViewModel;
    UIImageView *_bgImageView;
    UILabel *_contentLabel;
    UILabel *_praisesLabel;
    UILabel *_commentLabel;
}

+ (double)calculateHeight:(id)arg1;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *praisesLabel; // @synthesize praisesLabel=_praisesLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) YKFStarArrivalRoyalAssentDesViewModel *desViewModel; // @synthesize desViewModel=_desViewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bindViewModel:(id)arg1;

@end

