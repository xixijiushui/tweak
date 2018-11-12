//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardVideoView.h"

#import "HomeNegativeFeedbackUnlikeViewEventDelegate.h"
#import "HomeNegativeFeedbackViewEventDelegate.h"

@class HomeNegativeFeedbackBackgroundView, HomeNegativeFeedbackButton, NSString, UILongPressGestureRecognizer;

@interface HomeVideoView : CardVideoView <HomeNegativeFeedbackViewEventDelegate, HomeNegativeFeedbackUnlikeViewEventDelegate>
{
    _Bool _showNegativeButton;
    _Bool _isFeedbackButtonAtTop;
    HomeNegativeFeedbackBackgroundView *_feedbackBackgroundView;
    HomeNegativeFeedbackButton *_negativeFeedbackButton;
    UILongPressGestureRecognizer *_longGesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longGesture; // @synthesize longGesture=_longGesture;
@property(retain, nonatomic) HomeNegativeFeedbackButton *negativeFeedbackButton; // @synthesize negativeFeedbackButton=_negativeFeedbackButton;
@property(nonatomic) _Bool isFeedbackButtonAtTop; // @synthesize isFeedbackButtonAtTop=_isFeedbackButtonAtTop;
@property(retain, nonatomic) HomeNegativeFeedbackBackgroundView *feedbackBackgroundView; // @synthesize feedbackBackgroundView=_feedbackBackgroundView;
@property(nonatomic) _Bool showNegativeButton; // @synthesize showNegativeButton=_showNegativeButton;
- (void).cxx_destruct;
- (id)cmsCardVideo;
- (void)longGestureTrigger:(id)arg1;
- (void)feedbackUnlikeView:(id)arg1 repealFromSource:(id)arg2;
- (void)feedbackView:(id)arg1 feedbackFromSource:(id)arg2;
- (void)feedbackView:(id)arg1 closeFeedbackViewFromSource:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)makeFeedbackBackgroundView;
- (void)setupWithCardVideo:(id)arg1;
- (void)showFeedBackView:(_Bool)arg1;
- (void)negativeFeedbackTrigger:(id)arg1;
- (void)layoutTitleView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HomeVideoViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
