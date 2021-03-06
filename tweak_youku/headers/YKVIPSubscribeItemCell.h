//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CAGradientLayer, CALayer, CATextLayer, UIButton, UIImageGIFView, UIImageView, UILabel, UIView, YKVIPPageService, YKVIPSubscribeModel;

@interface YKVIPSubscribeItemCell : UICollectionViewCell
{
    UILabel *_playingLabel;
    UIImageGIFView *_playingView;
    YKVIPPageService *_pageService;
    UIImageView *_imageView;
    CALayer *_shadowLayer;
    UILabel *_countLabel;
    CATextLayer *_titleLayer;
    CATextLayer *_subTitLayer;
    CAGradientLayer *_buttonLayer;
    UIButton *_button;
    UIView *_coverView;
    YKVIPSubscribeModel *_itemModel;
}

@property(retain, nonatomic) YKVIPSubscribeModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) CAGradientLayer *buttonLayer; // @synthesize buttonLayer=_buttonLayer;
@property(retain, nonatomic) CATextLayer *subTitLayer; // @synthesize subTitLayer=_subTitLayer;
@property(retain, nonatomic) CATextLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak YKVIPPageService *pageService; // @synthesize pageService=_pageService;
- (void).cxx_destruct;
- (void)dealloc;
- (id)urlEncode:(id)arg1;
- (_Bool)isShowGoSettingToast;
- (_Bool)needWriteCalendar;
- (id)timestampFromPropertyDict:(id)arg1;
- (void)handleCalenderRerservationWithReserationStatus:(_Bool)arg1;
- (void)showOderSuccessToast;
- (void)uploadStatistical:(id)arg1;
- (void)reserveWithVid:(id)arg1 type:(id)arg2;
- (void)subscribeAction;
- (void)prepareForReuse;
- (void)updatePlaying:(_Bool)arg1;
- (void)updateSubscribeStatus;
- (void)setupModel:(id)arg1;
- (void)setupTextLayer:(id)arg1 withFont:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

