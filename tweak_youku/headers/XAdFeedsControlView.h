//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XAdFeedsBaseView.h"

@class CALayer, CATextLayer, NSArray, UIColor, UIFont, UIImage, XAdMarkView;

@interface XAdFeedsControlView : XAdFeedsBaseView
{
    _Bool _isHeaderControl;
    float _viewHeight;
    NSArray *_displayElements;
    UIFont *_agencyFont;
    UIColor *_agencyFontColor;
    double _leftMargin;
    double _rightMargin;
    double _logoWidths;
    double _logoRightMargin;
    double _actionBtnLeftMargin;
    double _moreLayerFontSize;
    UIColor *_moreLayerFontColor;
    UIImage *_popActionImage;
    XAdMarkView *_adMarkView;
    XAdMarkView *_dspView;
    CALayer *_logoViewLayer;
    CATextLayer *_agencyNameLayer;
    CALayer *_popActionLayer;
    CATextLayer *_knowMoreLayer;
    double _imgRatio;
    CALayer *_knowMoreBGColorLayer;
}

@property(retain, nonatomic) CALayer *knowMoreBGColorLayer; // @synthesize knowMoreBGColorLayer=_knowMoreBGColorLayer;
@property(nonatomic) double imgRatio; // @synthesize imgRatio=_imgRatio;
@property(retain, nonatomic) CATextLayer *knowMoreLayer; // @synthesize knowMoreLayer=_knowMoreLayer;
@property(retain, nonatomic) CALayer *popActionLayer; // @synthesize popActionLayer=_popActionLayer;
@property(retain, nonatomic) CATextLayer *agencyNameLayer; // @synthesize agencyNameLayer=_agencyNameLayer;
@property(retain, nonatomic) CALayer *logoViewLayer; // @synthesize logoViewLayer=_logoViewLayer;
@property(retain, nonatomic) XAdMarkView *dspView; // @synthesize dspView=_dspView;
@property(retain, nonatomic) XAdMarkView *adMarkView; // @synthesize adMarkView=_adMarkView;
@property(retain, nonatomic) UIImage *popActionImage; // @synthesize popActionImage=_popActionImage;
@property(retain, nonatomic) UIColor *moreLayerFontColor; // @synthesize moreLayerFontColor=_moreLayerFontColor;
@property(nonatomic) double moreLayerFontSize; // @synthesize moreLayerFontSize=_moreLayerFontSize;
@property(nonatomic) double actionBtnLeftMargin; // @synthesize actionBtnLeftMargin=_actionBtnLeftMargin;
@property(nonatomic) double logoRightMargin; // @synthesize logoRightMargin=_logoRightMargin;
@property(nonatomic) double logoWidths; // @synthesize logoWidths=_logoWidths;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) UIColor *agencyFontColor; // @synthesize agencyFontColor=_agencyFontColor;
@property(retain, nonatomic) UIFont *agencyFont; // @synthesize agencyFont=_agencyFont;
@property(nonatomic) _Bool isHeaderControl; // @synthesize isHeaderControl=_isHeaderControl;
@property(copy, nonatomic) NSArray *displayElements; // @synthesize displayElements=_displayElements;
@property(nonatomic) float viewHeight; // @synthesize viewHeight=_viewHeight;
- (void).cxx_destruct;
- (void)calculateKnowMoreLayerWithTextStr:(id)arg1;
- (void)setupKnowMoreLayerWithAdItem:(id)arg1;
- (void)calculatePopExtraLayerFrame;
- (void)setupPopExtraLayer;
- (void)calculateMarkLayer;
- (void)setupMarkLayerWithAdItem:(id)arg1;
- (void)calculateAgencyNameLayerWithTextStr:(id)arg1;
- (void)setupAgencyNameLayerWithAdItem:(id)arg1;
- (void)calculateLogoViewLayerFrame;
- (void)setupLogoViewLayerWithAdItem:(id)arg1;
- (void)setUIFrame;
- (void)setLogoImage:(id)arg1;
- (void)updateUIFrameBuffer:(id)arg1 adItem:(id)arg2 index:(id)arg3;
- (void)clickAtPoint:(struct CGPoint)arg1;
- (void)setup;

@end

