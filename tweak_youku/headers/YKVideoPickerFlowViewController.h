//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKBaseVideoPickerViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "YKVideoPickerAssetsViewCellDelegate.h"
#import "YKVideoPickerUploadMonitorDelegate.h"

@class NSString, UIButton, UICollectionView, UIImageView, UIView, YKVideoPickerNoVideoTipsView, YKVideoPickerSorter, YKVideoPickerUnAuthorizedTipsView;

@interface YKVideoPickerFlowViewController : YKBaseVideoPickerViewController <UICollectionViewDataSource, UICollectionViewDelegate, YKVideoPickerAssetsViewCellDelegate, YKVideoPickerUploadMonitorDelegate>
{
    _Bool _isLoadingData;
    YKVideoPickerSorter *_videoLoader;
    UIView *_addSegmentedView;
    UIButton *_unUploadVideoButton;
    UIButton *_allVideoButton;
    UIButton *_takeVideoButton;
    UIImageView *_noUnloadVideoTipsView;
    YKVideoPickerNoVideoTipsView *_noVideoTipsView;
    UICollectionView *_imageFlowCollectionView;
    YKVideoPickerUnAuthorizedTipsView *_unAuthorizedTipsView;
}

+ (_Bool)isAssetUploadingWithAssetURL:(id)arg1;
+ (_Bool)isAssetUploading:(id)arg1;
+ (id)defaultAssetsLibrary;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) YKVideoPickerUnAuthorizedTipsView *unAuthorizedTipsView; // @synthesize unAuthorizedTipsView=_unAuthorizedTipsView;
@property(retain, nonatomic) UICollectionView *imageFlowCollectionView; // @synthesize imageFlowCollectionView=_imageFlowCollectionView;
@property(retain, nonatomic) YKVideoPickerNoVideoTipsView *noVideoTipsView; // @synthesize noVideoTipsView=_noVideoTipsView;
@property(retain, nonatomic) UIImageView *noUnloadVideoTipsView; // @synthesize noUnloadVideoTipsView=_noUnloadVideoTipsView;
@property(retain, nonatomic) UIButton *takeVideoButton; // @synthesize takeVideoButton=_takeVideoButton;
@property(retain, nonatomic) UIButton *allVideoButton; // @synthesize allVideoButton=_allVideoButton;
@property(retain, nonatomic) UIButton *unUploadVideoButton; // @synthesize unUploadVideoButton=_unUploadVideoButton;
@property(retain, nonatomic) UIView *addSegmentedView; // @synthesize addSegmentedView=_addSegmentedView;
@property(retain, nonatomic) YKVideoPickerSorter *videoLoader; // @synthesize videoLoader=_videoLoader;
- (void).cxx_destruct;
- (void)reloadCollectionViewForUploadStateChanged:(id)arg1;
- (void)uploadVideoUploadSuccessed:(id)arg1;
- (void)uploadVideoFailed:(id)arg1;
- (void)uploadVideoCanceled:(id)arg1;
- (void)uploadVideoUploading:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didDeselectItemAssetsViewCell:(id)arg1;
- (void)didSelectItemAssetsViewCell:(id)arg1;
- (void)hideNoUnloadVideoTipsView;
- (void)showNoUnloadVideoTipsView;
- (void)loginStateDidChanged:(id)arg1;
- (void)assetsLibraryDidChange:(id)arg1;
- (id)isAssetUploadCompleted:(id)arg1;
- (struct CGRect)collectionViewFrame:(_Bool)arg1;
- (void)updateSegmentedViewTitle;
- (void)hideNoVideoTipsView;
- (void)showNoVideoTipsView;
- (void)hideUnAuthorizedTipsView;
- (void)showUnAuthorizedTipsView;
- (void)allVideoButtonClick:(id)arg1;
- (void)unUploadVideoButtonClick:(id)arg1;
- (double)barHeight;
- (void)loadData;
- (void)setupView;
- (void)backAction;
- (void)swipeBack;
- (void)backViaGesture;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isNeedLogin;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

