//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIImageView;

@interface YKSVCenterLoadingView : UIView <CAAnimationDelegate>
{
    UIImageView *_playLoadingView;
}

+ (void)dismiss:(_Bool)arg1;
+ (void)showInView:(id)arg1;
+ (id)sharedInstance;
+ (void)deinitialize;
@property(retain, nonatomic) UIImageView *playLoadingView; // @synthesize playLoadingView=_playLoadingView;
- (void).cxx_destruct;
- (void)setupPlayLoadingImageView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
