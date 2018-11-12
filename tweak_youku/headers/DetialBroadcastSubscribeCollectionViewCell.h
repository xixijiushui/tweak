//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class DetailBroadcastSubscribeVideo, DetailCardSurfaceCell, NSObject<DetailBroadcastSubscribeDelegate>, UIButton, UILabel, UIView;

@interface DetialBroadcastSubscribeCollectionViewCell : UICollectionViewCell
{
    NSObject<DetailBroadcastSubscribeDelegate> *_delegate;
    UILabel *_topDateLabel;
    UIView *_topNode;
    UIView *_topLine;
    UIView *_mainView;
    UILabel *_mainTitle;
    DetailCardSurfaceCell *_surfaceCell;
    double _imageHeight;
    double _mainViewHeight;
    double _mainTitleHeight;
    long long _bottomButtonType;
    UIButton *_bottomButton;
    DetailBroadcastSubscribeVideo *_cardVideo;
}

@property(retain, nonatomic) DetailBroadcastSubscribeVideo *cardVideo; // @synthesize cardVideo=_cardVideo;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(nonatomic) long long bottomButtonType; // @synthesize bottomButtonType=_bottomButtonType;
@property(nonatomic) double mainTitleHeight; // @synthesize mainTitleHeight=_mainTitleHeight;
@property(nonatomic) double mainViewHeight; // @synthesize mainViewHeight=_mainViewHeight;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) DetailCardSurfaceCell *surfaceCell; // @synthesize surfaceCell=_surfaceCell;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *topNode; // @synthesize topNode=_topNode;
@property(retain, nonatomic) UILabel *topDateLabel; // @synthesize topDateLabel=_topDateLabel;
@property(nonatomic) __weak NSObject<DetailBroadcastSubscribeDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)seriesSubscribe;
- (void)setBottomButtonWithType:(long long)arg1;
- (void)setTopLineStyleWithArchor:(_Bool)arg1;
- (void)setupWithCardVideo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

