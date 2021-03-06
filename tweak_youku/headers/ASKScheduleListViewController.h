//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseViewController.h"

#import "ASKScheduleListViewDelegate.h"

@class ASKScheduleListView, ASKScheduleListViewService, NSLayoutConstraint, NSString;

@interface ASKScheduleListViewController : AEBaseViewController <ASKScheduleListViewDelegate>
{
    ASKScheduleListView *_listView;
    ASKScheduleListViewService *_viewService;
    NSString *_channelIdentifier;
    NSLayoutConstraint *_topMargin;
}

+ (id)instanceWithSegueModel:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *topMargin; // @synthesize topMargin=_topMargin;
@property(copy, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
@property(retain, nonatomic) ASKScheduleListViewService *viewService; // @synthesize viewService=_viewService;
@property(nonatomic) __weak ASKScheduleListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)refresh;
- (void)ASKScheduleListView:(id)arg1 didSelectedAtIndexPath:(id)arg2;
- (void)didPullUpToLoadMoreForASKScheduleListView:(id)arg1;
- (void)didPullDownToRefreshForASKScheduleListView:(id)arg1;
- (id)ASKScheduleListView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)ASKScheduleListView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)ASKScheduleListView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)ASKScheduleListView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithChannelIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

