//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKAnimWeakDelegate.h"

@class NSArray, NSString, NSTimer, UIImageView, UILabel, YKAnimWeakHander;

@interface YKCAnimView : UIView <YKAnimWeakDelegate>
{
    _Bool _isBigImage;
    _Bool _canceled;
    id <YKCAnimViewDelegate> _delegate;
    double _timeInterval;
    double _duration;
    double _delay;
    UIView *_maskView1;
    UIImageView *_imageView1;
    UILabel *_label1;
    UIView *_maskView2;
    UIImageView *_imageView2;
    UILabel *_label2;
    UIView *_topView;
    UIView *_bottomView;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    long long _pageIndex;
    NSTimer *_timer;
    YKAnimWeakHander *_animHander;
    NSArray *_videosArray;
}

@property(retain, nonatomic) NSArray *videosArray; // @synthesize videosArray=_videosArray;
@property(retain, nonatomic) YKAnimWeakHander *animHander; // @synthesize animHander=_animHander;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) __weak UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(nonatomic) __weak UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UIImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) UIView *maskView2; // @synthesize maskView2=_maskView2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) UIImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(retain, nonatomic) UIView *maskView1; // @synthesize maskView1=_maskView1;
@property(nonatomic) _Bool isBigImage; // @synthesize isBigImage=_isBigImage;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) __weak id <YKCAnimViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)guideLabelWithAlpha:(double)arg1 withFont:(double)arg2;
- (id)guideImageViewWhitFrame:(struct CGRect)arg1;
- (void)setVideoImageWithPath:(id)arg1 imageView:(id)arg2;
- (void)tapGesture;
- (void)reload;
- (void)swapSubView;
- (void)animation;
- (void)stopSlider;
- (void)invalidateTimer;
- (void)startSlider;
- (void)setupWithVideosArray:(id)arg1;
- (void)commonInit;
- (void)prepareAnim;
- (void)addChildViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
