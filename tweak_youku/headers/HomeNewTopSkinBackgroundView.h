//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIView;

@interface HomeNewTopSkinBackgroundView : UIImageView
{
    double _originY;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
}

@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(nonatomic) double originY; // @synthesize originY=_originY;
- (void).cxx_destruct;
- (void)showBottom:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
