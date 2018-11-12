//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAdFeedsBaseView.h"

@class CAGradientLayer, XAdFeedsControlView;

@interface XAdFeedsBottomLogoImageView : XAdFeedsBaseView
{
    XAdFeedsControlView *_bottomControlView;
    CAGradientLayer *_shadowViewLayer;
    double _contentHeight;
}

+ (double)getImageViewHeight:(double)arg1 ratio:(double)arg2;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) CAGradientLayer *shadowViewLayer; // @synthesize shadowViewLayer=_shadowViewLayer;
@property(retain, nonatomic) XAdFeedsControlView *bottomControlView; // @synthesize bottomControlView=_bottomControlView;
- (void).cxx_destruct;
- (void)calculateDescriptionLayerFrameWithTextStr:(id)arg1;
- (void)calculateShadowViewLayerFrame;
- (void)setupShadowViewLayerWithAdItem:(id)arg1;
- (void)calculateContentViewLayerFrame;
- (void)setupControlViewFrameBuffer:(id)arg1 adItem:(id)arg2;
- (void)setUIFrame;
- (void)setLogoImage:(id)arg1;
- (void)updateUIFrameBuffer:(id)arg1 adItem:(id)arg2 index:(id)arg3;

@end

