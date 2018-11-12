//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UITableView, UIViewController, VIPCMSPageItem, YKVIPCMSHomePopsModel, YKVIPTopInfoModel;

@interface YKVIPPageService : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasMoreComponents;
    UIViewController *_currentVC;
    id <YKVIPPageServiceDelegate> _delegate;
    VIPCMSPageItem *_pageItem;
    YKVIPTopInfoModel *_topInfo;
    YKVIPCMSHomePopsModel *_popInfo;
    NSArray *_pageItems;
    long long _selectIndex;
    NSArray *_parentPageItems;
    VIPCMSPageItem *_parentChannel;
    NSDictionary *_json;
    UITableView *_tableView;
    NSMutableArray *_components;
    NSMutableArray *_doNotShowArray;
}

@property(retain, nonatomic) NSMutableArray *doNotShowArray; // @synthesize doNotShowArray=_doNotShowArray;
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(retain, nonatomic) VIPCMSPageItem *parentChannel; // @synthesize parentChannel=_parentChannel;
@property(retain, nonatomic) NSArray *parentPageItems; // @synthesize parentPageItems=_parentPageItems;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSArray *pageItems; // @synthesize pageItems=_pageItems;
@property(retain, nonatomic) YKVIPCMSHomePopsModel *popInfo; // @synthesize popInfo=_popInfo;
@property(retain, nonatomic) YKVIPTopInfoModel *topInfo; // @synthesize topInfo=_topInfo;
@property(retain, nonatomic) VIPCMSPageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(nonatomic) __weak id <YKVIPPageServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void).cxx_destruct;
- (void)resetExposItems;
- (void)exposeForAction:(id)arg1;
- (void)exposeForItems:(id)arg1;
- (void)exposeForCell:(id)arg1;
- (void)exposeItemsInScreen;
- (void)getCenterVisibleCells;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshHotShowingComponentInsection:(long long)arg1;
- (void)refreshMyFollowComponentAtIndexPath:(id)arg1;
- (void)removeComponentAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool hasNext;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)updateTableViewFooter;
- (void)handlerMorePageData:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)handlerFirstPageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

