//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SKPlaySeriesButton, SKPlaySeriesButtonData, SKTextRectViewB, SKVideoView, UILabel;

@interface SKSSeriesContentViewCell : UICollectionViewCell
{
    SKPlaySeriesButtonData *_buttonData;
    SKPlaySeriesButton *_button;
    SKVideoView *_videoView;
    UILabel *_titleLabel;
    UILabel *_subTitle;
    SKTextRectViewB *_kView;
}

@property(retain, nonatomic) SKTextRectViewB *kView; // @synthesize kView=_kView;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SKVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) SKPlaySeriesButton *button; // @synthesize button=_button;
@property(retain, nonatomic) SKPlaySeriesButtonData *buttonData; // @synthesize buttonData=_buttonData;
- (void).cxx_destruct;
- (void)doSthTwoLinesWithStr:(id)arg1;
- (void)layoutSubviews;
- (void)hideIMGtype:(_Bool)arg1;
- (void)p_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

