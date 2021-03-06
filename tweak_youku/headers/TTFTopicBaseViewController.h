//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseTableViewController.h"

#import "YKFContentStateDelegate.h"

@class NSString, TTFTopicBaseViewModel;

@interface TTFTopicBaseViewController : YKFBaseTableViewController <YKFContentStateDelegate>
{
    TTFTopicBaseViewModel *_viewModel;
    CDUnknownBlockType _topicChoosedCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType topicChoosedCallBack; // @synthesize topicChoosedCallBack=_topicChoosedCallBack;
@property(retain, nonatomic) TTFTopicBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

