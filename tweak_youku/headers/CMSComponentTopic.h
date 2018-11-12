//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponentBox.h"

#import "CardVideoViewDelegate.h"
#import "HomeVideoViewDelegate.h"

@class HomeTopicCardVideoCell, NSString, UIColor;

@interface CMSComponentTopic : CMSComponentBox <HomeVideoViewDelegate, CardVideoViewDelegate>
{
    _Bool _isDisplaying;
    HomeTopicCardVideoCell *_cell;
    UIColor *_topicBgColor;
}

@property(retain, nonatomic) UIColor *topicBgColor; // @synthesize topicBgColor=_topicBgColor;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(retain, nonatomic) HomeTopicCardVideoCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)cardVideoViewNegativeFeedbackView:(id)arg1 repealFeedbackFromSource:(id)arg2;
- (void)cardVideoViewNegativeFeedbackView:(id)arg1 feedbackViewFromSource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cardVideoViewNegativeFeedbackView:(id)arg1 willShowTriggerBySource:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
