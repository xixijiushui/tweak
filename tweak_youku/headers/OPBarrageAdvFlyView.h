//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, OPBarrageAdvModel, UIButton, UIImageView;

@interface OPBarrageAdvFlyView : UIView
{
    long long _index;
    OPBarrageAdvModel *_advModel;
    UIButton *_closeButton;
    UIButton *_subcribeButton;
    UIImageView *_imageView;
    UIView *_maskView;
    UIImageView *_lineView;
    NSTimer *_timer;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *subcribeButton; // @synthesize subcribeButton=_subcribeButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) OPBarrageAdvModel *advModel; // @synthesize advModel=_advModel;
- (void).cxx_destruct;
- (void)labelAnimation;
- (void)refreshSubView;
- (void)clickCloseButton;
- (id)init;
- (void)dealloc;

@end
