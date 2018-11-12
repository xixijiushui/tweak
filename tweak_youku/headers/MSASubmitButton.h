//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage;

@interface MSASubmitButton : UIButton
{
    _Bool _bIsAnimating;
    UIImage *_loadingImage;
}

@property(nonatomic) _Bool bIsAnimating; // @synthesize bIsAnimating=_bIsAnimating;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)runSpinAnimationOnView:(id)arg1 duration:(double)arg2 rotations:(double)arg3 repeat:(float)arg4;
- (void)animateWaiting;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (id)imageWithColor:(id)arg1;
- (void)updateText;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

