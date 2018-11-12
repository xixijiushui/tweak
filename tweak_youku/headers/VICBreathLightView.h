//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICBaseView.h"

@class CAAnimationGroup, UIImage, UIImageView;

@interface VICBreathLightView : VICBaseView
{
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_smallCircle;
    UIImageView *_bigCircle;
    CAAnimationGroup *_biggroups;
    CAAnimationGroup *_smallgroups;
}

@property(retain, nonatomic) CAAnimationGroup *smallgroups; // @synthesize smallgroups=_smallgroups;
@property(retain, nonatomic) CAAnimationGroup *biggroups; // @synthesize biggroups=_biggroups;
@property(retain, nonatomic) UIImageView *bigCircle; // @synthesize bigCircle=_bigCircle;
@property(retain, nonatomic) UIImageView *smallCircle; // @synthesize smallCircle=_smallCircle;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)startAnimation;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

