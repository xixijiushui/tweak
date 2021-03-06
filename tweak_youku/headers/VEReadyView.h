//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface VEReadyView : UIView
{
    _Bool _canceled;
    UIImageView *_readyView;
    UIImageView *_goView;
    CDUnknownBlockType _countDownCompletionHandler;
}

@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) CDUnknownBlockType countDownCompletionHandler; // @synthesize countDownCompletionHandler=_countDownCompletionHandler;
@property(retain, nonatomic) UIImageView *goView; // @synthesize goView=_goView;
@property(retain, nonatomic) UIImageView *readyView; // @synthesize readyView=_readyView;
- (void).cxx_destruct;
- (void)hideGo;
- (void)showGo;
- (void)hideReady;
- (void)showReady;
- (void)stopCountDown;
- (void)startCountDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

