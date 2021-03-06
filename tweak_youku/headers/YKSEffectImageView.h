//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIView, UIVisualEffectView;

@interface YKSEffectImageView : UIImageView
{
    UIView *_floatingView;
    UIVisualEffectView *_effectView;
}

@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIView *floatingView; // @synthesize floatingView=_floatingView;
- (void).cxx_destruct;
- (void)updateEffectViewLayout;
- (void)layoutIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

