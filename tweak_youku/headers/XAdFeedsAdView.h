//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAdFeedsBaseView.h"

@class CAGradientLayer, CALayer, XAdFeedsControlView;

@interface XAdFeedsAdView : XAdFeedsBaseView
{
    CALayer *_logoViewLayer;
    CAGradientLayer *_shadowViewLayer;
    double _imgRatio;
    double _contentHeight;
    XAdFeedsControlView *_bottomControlView;
}

+ (float)getImageViewHeight:(float)arg1 ratio:(float)arg2;
@property(retain, nonatomic) XAdFeedsControlView *bottomControlView; // @synthesize bottomControlView=_bottomControlView;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double imgRatio; // @synthesize imgRatio=_imgRatio;
@property(retain, nonatomic) CAGradientLayer *shadowViewLayer; // @synthesize shadowViewLayer=_shadowViewLayer;
@property(retain, nonatomic) CALayer *logoViewLayer; // @synthesize logoViewLayer=_logoViewLayer;
- (void).cxx_destruct;
- (void)setUIFrame;
- (void)calculateDescriptionLayerFrameWithTextStr:(id)arg1;
- (void)calculateShadowViewLayerFrame;
- (void)setupShadowViewLayerWithAdItem:(id)arg1;
- (void)calculateLogoViewLayerFrame;
- (void)setupLogoViewLayerWithAdItem:(id)arg1;
- (void)calculateContentViewLayerFrame;
- (void)setupControlViewFrameBuffer:(id)arg1 adItem:(id)arg2;
- (void)setLogoImage:(id)arg1;
- (void)updateUIFrameBuffer:(id)arg1 adItem:(id)arg2 index:(id)arg3;

@end

