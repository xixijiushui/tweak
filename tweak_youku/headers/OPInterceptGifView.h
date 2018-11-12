//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "OPInterceptButtonDelegate.h"

@class NSString, OPInterceptButton, UIButton;

@interface OPInterceptGifView : UIView <OPInterceptButtonDelegate>
{
    UIButton *_imageShotButton;
    OPInterceptButton *_gifShotButton;
    id <OPInterceptGifViewDelegate> _delegate;
}

@property(retain, nonatomic) OPInterceptButton *gifShotButton; // @synthesize gifShotButton=_gifShotButton;
@property(nonatomic) __weak id <OPInterceptGifViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interceptButton:(id)arg1 pressingWithCurrentTime:(double)arg2;
- (void)interceptButton:(id)arg1 pressedEndWithDuration:(double)arg2;
- (void)startLongPressedForInterceptButton:(id)arg1;
- (void)didEventTouchUpInsideClickForInterceptButton:(id)arg1;
- (_Bool)isSystemVersionAllowed;
- (void)setupSubviews;
- (void)stopInterceptButtonTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

