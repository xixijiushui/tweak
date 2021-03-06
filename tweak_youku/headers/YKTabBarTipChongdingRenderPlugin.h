//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSRenderPlugin.h"

@class NSTimer, UIButton, UIImageGIFView, UIView;

@interface YKTabBarTipChongdingRenderPlugin : KSRenderPlugin
{
    UIView *_view;
    UIImageGIFView *_imageView;
    UIButton *_button;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageGIFView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)clear;
- (void)timerFire:(id)arg1;
- (id)tip;
- (long long)popDuration;
- (id)jumpSchema;
- (id)imagePath;
- (void)buttonTapped:(id)arg1;
- (void)render;

@end

