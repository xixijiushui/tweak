//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSMutableArray, NSString, UIImageView;

@interface YKBCActivityIndicatorView : UIView <CAAnimationDelegate>
{
    _Bool _hidesWhenStopped;
    _Bool _animating;
    UIImageView *_imageView;
    NSMutableArray *_animationCGImages;
}

@property(retain, nonatomic) NSMutableArray *animationCGImages; // @synthesize animationCGImages=_animationCGImages;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void).cxx_destruct;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setupAnimation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

