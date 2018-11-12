//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class ICAttachment;

@interface ICAudioPlaybackScrubberView : UISlider
{
    _Bool _wasPlaying;
    ICAttachment *_audioAttachment;
}

@property(nonatomic) _Bool wasPlaying; // @synthesize wasPlaying=_wasPlaying;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)updateTime:(double)arg1 duration:(double)arg2;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
@property(retain, nonatomic) ICAttachment *audioAttachment; // @synthesize audioAttachment=_audioAttachment;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
