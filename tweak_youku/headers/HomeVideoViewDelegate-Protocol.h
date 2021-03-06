//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardVideoViewDelegate.h"

@class HomeNegativeFeedbackView, HomeVideoView;

@protocol HomeVideoViewDelegate <CardVideoViewDelegate>

@optional
- (void)cardVideoViewNegativeFeedbackView:(HomeVideoView *)arg1 repealFeedbackFromSource:(id)arg2;
- (void)cardVideoViewNegativeFeedbackView:(HomeVideoView *)arg1 feedbackViewFromSource:(id)arg2 completion:(void (^)(_Bool))arg3;
- (void)cardVideoViewNegativeFeedbackView:(HomeVideoView *)arg1 closeFeedbackViewFromSource:(id)arg2;
- (void)cardVideoViewNegativeFeedbackView:(HomeVideoView *)arg1 willShowTriggerBySource:(id)arg2;
- (HomeNegativeFeedbackView *)cardVideoViewNegativeFeedbackView:(HomeVideoView *)arg1;
@end

