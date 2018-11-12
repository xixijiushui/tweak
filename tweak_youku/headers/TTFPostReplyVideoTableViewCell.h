//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTFPostReplyBaseTableViewCell.h"

#import "YKFVideoPlayerViewDelegate.h"

@class APPPostVideoViewModel, NSLayoutConstraint, NSString, YKFVideoPlayerView;

@interface TTFPostReplyVideoTableViewCell : TTFPostReplyBaseTableViewCell <YKFVideoPlayerViewDelegate>
{
    long long autoPlayToken;
    APPPostVideoViewModel *_viewModel;
    NSLayoutConstraint *_videoHeightConstraint;
    YKFVideoPlayerView *_videoView;
}

@property(nonatomic) __weak YKFVideoPlayerView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) __weak NSLayoutConstraint *videoHeightConstraint; // @synthesize videoHeightConstraint=_videoHeightConstraint;
@property(retain, nonatomic) APPPostVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)ykf_videoPlayerView:(id)arg1 shouldPlayWithVM:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (long long)starComingId;
- (long long)fandomId;
- (long long)postId;
- (long long)statisticValueForKey:(id)arg1;
- (void)videoPlayerButtonAction:(id)arg1;
- (void)configureWithViewModel:(id)arg1 showPostReply:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
