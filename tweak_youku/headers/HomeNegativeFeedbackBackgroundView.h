//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface HomeNegativeFeedbackBackgroundView : UIView
{
    double _padding;
    UIImageView *_blurView;
    UIView *_blackView;
}

@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
- (void).cxx_destruct;
- (void)updateImageWithView:(id)arg1 withKey:(id)arg2 bottomPadding:(double)arg3;
- (void)configBlurViewWithView:(id)arg1;
- (id)imageByRenderingView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithView:(id)arg1 withKey:(id)arg2 bottomPadding:(double)arg3;

@end
