//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KSRenderPlugin.h"

#import "CardVideoViewDelegate.h"

@class CardVideoView, NSString;

@interface YKKSPluginSliderCardVideo : KSRenderPlugin <CardVideoViewDelegate>
{
    CardVideoView *_cardVideoView;
}

@property(retain, nonatomic) CardVideoView *cardVideoView; // @synthesize cardVideoView=_cardVideoView;
- (void).cxx_destruct;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)render;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

