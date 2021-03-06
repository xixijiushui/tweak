//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AIAStarAnimation, NSTimer, UIImage, UIImageView;

@interface LSLivePraiseExView : UIView
{
    AIAStarAnimation *_starsView;
    UIImageView *_iconView;
    UIImage *_iconDefaultImage;
    long long _countPerSecond;
    NSTimer *_timer;
    struct CGPoint _originPoint;
    struct CGPoint _endPoint;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long countPerSecond; // @synthesize countPerSecond=_countPerSecond;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(retain, nonatomic) UIImage *iconDefaultImage; // @synthesize iconDefaultImage=_iconDefaultImage;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) AIAStarAnimation *starsView; // @synthesize starsView=_starsView;
- (void).cxx_destruct;
- (void)onPerform;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)refreshWithData:(long long)arg1 popAnimation:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateIconWithImageURL:(id)arg1;
- (void)updateIconWidth:(double)arg1 height:(double)arg2;
- (void)setupSubviews;

@end

