//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YKStagePhotoBrowserTopBar;

@interface YKStagePhotoLandingOverlayView : UIView
{
    CDUnknownBlockType _OnBackButtonClick;
    YKStagePhotoBrowserTopBar *_topBar;
}

@property(retain, nonatomic) YKStagePhotoBrowserTopBar *topBar; // @synthesize topBar=_topBar;
@property(copy, nonatomic) CDUnknownBlockType OnBackButtonClick; // @synthesize OnBackButtonClick=_OnBackButtonClick;
- (void).cxx_destruct;
- (void)setTitleLabelHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGRect)topBarFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

