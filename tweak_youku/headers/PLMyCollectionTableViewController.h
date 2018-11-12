//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class NSDictionary, NSMutableSet, NSString;

@interface PLMyCollectionTableViewController : UITableViewController <UIViewControllerPreviewingDelegate, UIGestureRecognizerDelegate>
{
    _Bool _needsRefetch;
    id <PLCollectionListDelegate> _listDelegate;
    id <PLCollectionPreviewingDelegate> _previewingDelegate;
    id <PLMyCollectionDataSource> _collectionDataSource;
    unsigned long long _previewingType;
    NSDictionary *_previewingParams;
    NSMutableSet *_deletingClids;
}

@property(retain, nonatomic) NSMutableSet *deletingClids; // @synthesize deletingClids=_deletingClids;
@property(retain, nonatomic) NSDictionary *previewingParams; // @synthesize previewingParams=_previewingParams;
@property(nonatomic) unsigned long long previewingType; // @synthesize previewingType=_previewingType;
@property(nonatomic) _Bool needsRefetch; // @synthesize needsRefetch=_needsRefetch;
@property(retain, nonatomic) id <PLMyCollectionDataSource> collectionDataSource; // @synthesize collectionDataSource=_collectionDataSource;
@property(nonatomic) __weak id <PLCollectionPreviewingDelegate> previewingDelegate; // @synthesize previewingDelegate=_previewingDelegate;
@property(nonatomic) __weak id <PLCollectionListDelegate> listDelegate; // @synthesize listDelegate=_listDelegate;
- (void).cxx_destruct;
- (void)bodanRemoveEnter;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleUserLoginStateChanged:(id)arg1;
- (void)handleCollectionListMayUpdate;
- (void)requestForCollections;
- (void)refreshErrorView;
- (void)refetch;
- (void)hideError;
- (void)showNoContentError;
- (void)showNetworkError;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithCollectionDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
