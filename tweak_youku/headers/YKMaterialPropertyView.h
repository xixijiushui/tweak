//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, YKFFanplayFanMaterialPO, YKPHotView, YKPPlayButton;

@interface YKMaterialPropertyView : UIView
{
    YKFFanplayFanMaterialPO *_material;
    YKPPlayButton *_playButton;
    UILabel *_titleLabel;
    UILabel *_sourceLabel;
    UILabel *_countLabel;
    YKPHotView *_hotView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YKPHotView *hotView; // @synthesize hotView=_hotView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YKPPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) YKFFanplayFanMaterialPO *material; // @synthesize material=_material;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
