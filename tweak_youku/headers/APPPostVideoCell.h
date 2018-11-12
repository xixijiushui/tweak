//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPPostBaseCell.h"

#import "YKFVideoPlayerViewDelegate.h"

@class APPPostVideoViewModel, NSString, YKFVideoPlayerView;

@interface APPPostVideoCell : APPPostBaseCell <YKFVideoPlayerViewDelegate>
{
    long long autoPlayToken;
    YKFVideoPlayerView *_videoView;
    APPPostVideoViewModel *_videoViewModel;
    struct CGSize _videoSize;
}

+ (double)caculateCellHeight:(id)arg1;
+ (struct CGSize)videoSizeWithVM:(id)arg1;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) APPPostVideoViewModel *videoViewModel; // @synthesize videoViewModel=_videoViewModel;
@property(retain, nonatomic) YKFVideoPlayerView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)ykf_videoPlayerView:(id)arg1 didStartPlayingWithVM:(id)arg2;
- (_Bool)ykf_videoPlayerView:(id)arg1 shouldPlayWithVM:(id)arg2;
- (void)updateConstraints;
- (void)bindViewModel:(id)arg1;
- (long long)starComingId;
- (long long)fandomId;
- (long long)postId;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)topViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

