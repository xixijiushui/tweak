//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBPopLayerBaseView : UIView
{
    double _modalThreshold;
}

@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
- (double)alphaOfPointFromLayer:(struct CGPoint)arg1;
- (double)alphaOfPointFromViewScreenShot:(struct CGPoint)arg1;
- (double)alphaOfPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

