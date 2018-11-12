//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFStarArrivalBaseCell.h"

#import "YKFVideoPlayerViewDelegate.h"

@class NSString, YKFVideoPlayerView;

@interface YKFStarArrivalWarmUpVideoCell : YKFStarArrivalBaseCell <YKFVideoPlayerViewDelegate>
{
    YKFVideoPlayerView *_videoView;
}

+ (double)calculateHeight:(id)arg1;
+ (struct UIEdgeInsets)normalPadding;
@property(retain, nonatomic) YKFVideoPlayerView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (_Bool)ykf_videoPlayerView:(id)arg1 shouldPlayWithVM:(id)arg2;
- (void)bindViewModel:(id)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct UIEdgeInsets)normalPadding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

