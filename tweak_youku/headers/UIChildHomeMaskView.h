//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIChildHomeTipView;

@interface UIChildHomeMaskView : UIView
{
    UIChildHomeTipView *_homeTipView;
    struct CGPoint _radioCenter;
}

@property(retain, nonatomic) UIChildHomeTipView *homeTipView; // @synthesize homeTipView=_homeTipView;
@property(nonatomic) struct CGPoint radioCenter; // @synthesize radioCenter=_radioCenter;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)singleClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

