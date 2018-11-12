//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseTableViewController.h"

#import "YKFContentStateDelegate.h"
#import "YKFInfiniteListLoadProtocol.h"

@class NSString;

@interface YKFBaseInfiniteListViewController : YKFBaseTableViewController <YKFContentStateDelegate, YKFInfiniteListLoadProtocol>
{
}

- (void)dealloc;
- (void)reloadNextPageData;
- (void)reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)contentStateViewChooseRefresh:(id)arg1;
- (void)viewWillFirstAppear;
- (void)viewDidLoad;
- (void)handleLoadResult:(id)arg1 isLastPage:(_Bool)arg2 showToast:(_Bool)arg3;
- (void)loadNextPageComplete:(_Bool)arg1 error:(id)arg2;
- (id)tipStringForState:(long long)arg1;
- (void)loadDataComplete:(_Bool)arg1 lastPage:(_Bool)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

