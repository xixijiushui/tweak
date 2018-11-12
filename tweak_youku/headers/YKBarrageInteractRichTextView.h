//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKBarrageInteractBaseView.h"

@class CAShapeLayer, NSLayoutConstraint, UIImageView, UILabel;

@interface YKBarrageInteractRichTextView : YKBarrageInteractBaseView
{
    UIImageView *_bgImageView;
    UIImageView *_headIcon;
    UILabel *_contentsLabel;
    UILabel *_actionLabel;
    NSLayoutConstraint *_contentsWidthConstraint;
    UIImageView *_closeView;
    CAShapeLayer *_roundMaskLayer;
}

@property(retain, nonatomic) CAShapeLayer *roundMaskLayer; // @synthesize roundMaskLayer=_roundMaskLayer;
@property(nonatomic) __weak UIImageView *closeView; // @synthesize closeView=_closeView;
@property(nonatomic) __weak NSLayoutConstraint *contentsWidthConstraint; // @synthesize contentsWidthConstraint=_contentsWidthConstraint;
@property(nonatomic) __weak UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(nonatomic) __weak UILabel *contentsLabel; // @synthesize contentsLabel=_contentsLabel;
@property(nonatomic) __weak UIImageView *headIcon; // @synthesize headIcon=_headIcon;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (struct CGSize)calculateContentsWidth:(id)arg1;
- (void)renderWithInteractiveInfo:(id)arg1;
- (void)showViewWithAnimation;
- (void)hideViewWithAnimation;
- (void)showFullViewWithAnimation;
- (void)makeRoundRect;
- (void)closeAction:(id)arg1;
- (double)fixedWidth;
- (void)awakeFromNib;

@end
