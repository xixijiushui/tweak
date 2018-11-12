//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailComponent.h"

@class DetailNewFeedCell;

@interface DetailComponentNewFeed : DetailComponent
{
    _Bool _shouldFeedAutoPlay;
    DetailNewFeedCell *_feedCell;
}

@property(nonatomic) _Bool shouldFeedAutoPlay; // @synthesize shouldFeedAutoPlay=_shouldFeedAutoPlay;
@property(nonatomic) __weak DetailNewFeedCell *feedCell; // @synthesize feedCell=_feedCell;
- (void).cxx_destruct;
- (void)detailCompleteFoldPlayer;
- (void)pauseDetailPlay;
- (void)closeFeedAutoPlay;
- (void)openFeedAutoPlay;
- (void)stopFeedPlay;
- (void)startFeedPlay;
- (void)receiveDetailPlayCompleteToPlayFeed:(id)arg1;
- (void)receiveDetailNotPlay:(id)arg1;
- (void)receiveDetailToPause:(id)arg1;
- (void)receiveDetailToPlay:(id)arg1;
- (void)reveiceDetailPrepareToPlay:(id)arg1;
- (void)receiveFeedWillPlayNext:(id)arg1;
- (void)receiveFeedStartPlay:(id)arg1;
- (void)changeFeedContollerFrame:(id)arg1;
- (id)firstPageFeedDic;
- (void)componentCard:(id)arg1 superViewDidDisappear:(id)arg2;
- (void)componentCard:(id)arg1 didSelectCardHeader:(id)arg2;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)setComponentContext:(id)arg1;
- (id)init;
- (void)dealloc;

@end
