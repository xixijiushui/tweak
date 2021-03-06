//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface ASKScheduleListView : UIView <UITableViewDelegate>
{
    _Bool _noMoreDataBefore;
    _Bool _noMoreDataLater;
    UITableView *_tableView;
    id <ASKScheduleListViewDelegate> _delegate;
}

@property(nonatomic) _Bool noMoreDataLater; // @synthesize noMoreDataLater=_noMoreDataLater;
@property(nonatomic) _Bool noMoreDataBefore; // @synthesize noMoreDataBefore=_noMoreDataBefore;
@property(nonatomic) __weak id <ASKScheduleListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)noMoreLaterData:(_Bool)arg1;
- (void)noMoreBeforeData:(_Bool)arg1;
- (void)endLoadMore;
- (void)endRefresh;
- (void)startRefresh;
- (void)reloadListWithDataSource:(id)arg1;
- (void)pullUpToLoadMore;
- (void)pullDownToRefresh;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)buildSubviews;
- (id)awakeAfterUsingCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

