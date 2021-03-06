//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AliRecordEffectCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AliVideoEffectTimelineViewController, NSArray, NSString, UIButton, UICollectionView, UILabel;

@interface AliVideoEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AliRecordEffectCellDelegate>
{
    _Bool _enableLongPress;
    _Bool _showRevoke;
    NSString *_reminderText;
    AliVideoEffectTimelineViewController *_timelineViewController;
    unsigned long long _selectedIndex;
    NSArray *_effects;
    UICollectionView *_effectCollectionView;
    UILabel *_reminderLabel;
    UIButton *_revokeButton;
}

@property(retain, nonatomic) UIButton *revokeButton; // @synthesize revokeButton=_revokeButton;
@property(retain, nonatomic) UILabel *reminderLabel; // @synthesize reminderLabel=_reminderLabel;
@property(retain, nonatomic) UICollectionView *effectCollectionView; // @synthesize effectCollectionView=_effectCollectionView;
@property(copy, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak AliVideoEffectTimelineViewController *timelineViewController; // @synthesize timelineViewController=_timelineViewController;
@property(nonatomic) _Bool showRevoke; // @synthesize showRevoke=_showRevoke;
@property(nonatomic) _Bool enableLongPress; // @synthesize enableLongPress=_enableLongPress;
@property(copy, nonatomic) NSString *reminderText; // @synthesize reminderText=_reminderText;
- (void).cxx_destruct;
- (void)recordEffectDidEndLongPress:(id)arg1 effect:(id)arg2;
- (void)recordEffectDidStartLongPress:(id)arg1 effect:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didClickRevoke:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSelectionItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

