//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, YKSRUFeedModel;

@interface YKSRUEpisodeDescView : UIView
{
    UILabel *_titleLbl;
    UILabel *_subtitleLbl;
    UIImageView *_playIcon;
    UILabel *_playNumberLbl;
    YKSRUFeedModel *_cardModel;
}

@property(retain, nonatomic) YKSRUFeedModel *cardModel; // @synthesize cardModel=_cardModel;
@property(retain, nonatomic) UILabel *playNumberLbl; // @synthesize playNumberLbl=_playNumberLbl;
@property(retain, nonatomic) UIImageView *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UILabel *subtitleLbl; // @synthesize subtitleLbl=_subtitleLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
