//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIImageView, UILabel;

@interface SPMRatioItemView : UIView
{
    CAShapeLayer *rectLayer;
    struct CGSize ratioSize;
    UIImageView *rectImage;
    UILabel *descLabel;
    UILabel *mobileLabel;
    id _target;
    SEL _targetSel;
    _Bool _selected;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (struct CGRect)calculateRectForRatio:(struct CGSize)arg1;
- (void)drawShapeLayer;
- (void)drawFreeLayer;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)taptap:(id)arg1;
- (id)initWithRatio:(struct CGSize)arg1;

@end
