//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSRenderPlugin.h"

#import "YKCSliderCardVideoViewDelegate.h"

@class NSString, YKCSliderCardVideoView;

@interface YKCPluginZoomSliderCardVideo : KSRenderPlugin <YKCSliderCardVideoViewDelegate>
{
    YKCSliderCardVideoView *_sliderCardVideoView;
}

@property(retain, nonatomic) YKCSliderCardVideoView *sliderCardVideoView; // @synthesize sliderCardVideoView=_sliderCardVideoView;
- (void).cxx_destruct;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)render;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
