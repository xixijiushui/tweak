//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HomeComponentCardsController.h"

#import "YKSTFeedsManagerDelegate.h"
#import "YKSTFeedsable.h"

@class NSString, YKSTFeedsManager;

@interface HomeComponentCardsController (YKSTFeedsable) <YKSTFeedsable, YKSTFeedsManagerDelegate>
+ (void)load;
- (id)feedsMgr:(id)arg1 playFeedScenarioAtIndex:(unsigned long long)arg2;
- (id)feedsMgr:(id)arg1 playFeedForIndex:(unsigned long long)arg2;
- (void)feedsMgr:(id)arg1 notifyRemoveFeed:(id)arg2;
- (id)feedsMgr:(id)arg1 fetchNextFeedScenarioWithSrcFeed:(id)arg2;
- (id)feedsMgr:(id)arg1 playNextFeedScenarioWithFeed:(id)arg2;
- (id)feedsMgr:(id)arg1 playNextFeedForSrcFeed:(id)arg2;
- (id)componentCardsController;
- (int)shareSourceIdWithfeedsMgr:(id)arg1;
- (_Bool)handleAutoPlayAnchorFeed;
- (_Bool)handleAutoPlayFirstFeed;
- (void)feedsable_realRequestCardSuccess;
- (id)fetchRecommendFeedParamatersWithFeed:(id)arg1;
- (unsigned long long)feedsable_autoPlayAnchorFeedScrollPosition;
- (unsigned long long)feedsable_autoPlayFirstFeedScrollPosition;
- (_Bool)feedsable_autoPlayAnchorFeedEnabled;
- (_Bool)feedsable_autoPlayFirstFeedEnabled;
- (id)feedsable_fetchRecommendFeedParamatersWithFeed:(id)arg1;
- (void)bindingFeedManager;
@property(retain, nonatomic) YKSTFeedsManager *feedsMgr; // @dynamic feedsMgr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

