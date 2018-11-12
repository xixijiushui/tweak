//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, NSArray;

@interface YKFGradientView : UIView
{
}

+ (Class)layerClass;
+ (id)defaultGradientViewWithFrame:(struct CGRect)arg1;
- (void)setYKFGradientDirection:(long long)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;

// Remaining properties
@property(copy, nonatomic) NSArray *colors; // @dynamic colors;
@property(nonatomic) struct CGPoint endPoint; // @dynamic endPoint;
@property(copy, nonatomic) NSArray *locations; // @dynamic locations;
@property(nonatomic) struct CGPoint startPoint; // @dynamic startPoint;

@end

