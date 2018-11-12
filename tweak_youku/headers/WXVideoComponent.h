//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

@class NSURL, WXVideoView;

@interface WXVideoComponent : WXComponent
{
    _Bool _autoPlay;
    _Bool _playStatus;
    WXVideoView *_videoView;
    NSURL *_videoURL;
    NSURL *_posterURL;
}

@property(nonatomic) _Bool playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) NSURL *posterURL; // @synthesize posterURL=_posterURL;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) __weak WXVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

