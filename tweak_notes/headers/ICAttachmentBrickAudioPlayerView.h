//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAudioPlayPauseView.h"

@class ICArcLayer;

@interface ICAttachmentBrickAudioPlayerView : ICAudioPlayPauseView
{
    id <ICAttachmentBrickAudioPlayerViewDelegate> _delegate;
    ICArcLayer *_progressCircleLayer;
}

@property(retain, nonatomic) ICArcLayer *progressCircleLayer; // @synthesize progressCircleLayer=_progressCircleLayer;
@property(nonatomic) id <ICAttachmentBrickAudioPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showStopped;
- (void)updateTime:(double)arg1 duration:(double)arg2;
- (void)didMoveToWindow;
- (void)setBounds:(struct CGRect)arg1;
- (id)tintColor;
- (struct CGSize)intrinsicContentSize;
- (void)showDisabled:(_Bool)arg1;
- (void)showPressed:(_Bool)arg1;
- (void)createProgressCircleLayer;
- (void)createPlayPauseViews;
- (void)createBackgroundLayer;
- (void)sharedInit;

@end
