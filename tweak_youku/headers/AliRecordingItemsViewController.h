//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AliRecordSession, NSArray, NSString, UICollectionView, UIImageView, UILabel, UIVisualEffectView;

@interface AliRecordingItemsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <AliRecordingItemsViewControllerDelegate> _delegate;
    NSArray *_items;
    long long _selectedIndex;
    UICollectionView *_itemCollectionView;
    AliRecordSession *_session;
    UILabel *_triggerTip;
    UIImageView *_matchingView;
    UIVisualEffectView *_effectView;
}

@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIImageView *matchingView; // @synthesize matchingView=_matchingView;
@property(retain, nonatomic) UILabel *triggerTip; // @synthesize triggerTip=_triggerTip;
@property(retain, nonatomic) AliRecordSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UICollectionView *itemCollectionView; // @synthesize itemCollectionView=_itemCollectionView;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <AliRecordingItemsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)parseZipFilePath:(id)arg1;
- (void)switchSticker:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)hiddindMatchingView;
- (void)hiddenMatchingView;
- (void)showMatchingView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)setActiveSticker:(id)arg1;
- (void)changeSessionItem:(id)arg1;
- (void)backButtonAction;
- (void)_setupItemData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
