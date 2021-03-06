//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface YKSTFeedStartPlayingView : UIView
{
    _Bool _mobileFlowSizeEnabled;
    NSString *_videoSizeText;
    id <YKSTFeedStartPlayingViewDelegate> _delegate;
    UIImageView *_playImageView;
    UIView *_mobileTrafficTipView;
    UIImageView *_mobileTrafficIconImageView;
    UILabel *_mobileTrafficLabel;
}

@property(retain, nonatomic) UILabel *mobileTrafficLabel; // @synthesize mobileTrafficLabel=_mobileTrafficLabel;
@property(retain, nonatomic) UIImageView *mobileTrafficIconImageView; // @synthesize mobileTrafficIconImageView=_mobileTrafficIconImageView;
@property(retain, nonatomic) UIView *mobileTrafficTipView; // @synthesize mobileTrafficTipView=_mobileTrafficTipView;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(nonatomic) _Bool mobileFlowSizeEnabled; // @synthesize mobileFlowSizeEnabled=_mobileFlowSizeEnabled;
@property(nonatomic) __weak id <YKSTFeedStartPlayingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *videoSizeText; // @synthesize videoSizeText=_videoSizeText;
- (void).cxx_destruct;
- (void)handleDidClickPlayVideoArea;
- (void)handleReachabilityChanged:(id)arg1;
- (void)relayoutSubviews;
- (void)updateSubviewsDisplay;
- (void)fillSubviewsWithVideoSize:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

