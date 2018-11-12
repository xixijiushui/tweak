//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "YKFMWPhotoBrowserDelegate.h"

@class NSArray, NSString, PHImageManager, UIButton, UILabel, UIView, YKFMWPhotoBrowser, YKFPhotoPicker, YKFPhotoSelectedModel;

@interface YKFPhotoPreviewViewController : YKFBaseViewController <YKFMWPhotoBrowserDelegate>
{
    YKFPhotoSelectedModel *_selectedModel;
    NSArray *_preViewPhotos;
    unsigned long long _currentIndex;
    YKFPhotoPicker *_photoPicker;
    YKFMWPhotoBrowser *_photoBrowswer;
    UIView *_noTickView;
    UIButton *_tickButton;
    UILabel *_countLabel;
    UIView *_backgroundViewOfcountLabel;
    UIButton *_confirmButton;
    PHImageManager *_imageManager;
}

@property(retain, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *backgroundViewOfcountLabel; // @synthesize backgroundViewOfcountLabel=_backgroundViewOfcountLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIButton *tickButton; // @synthesize tickButton=_tickButton;
@property(retain, nonatomic) UIView *noTickView; // @synthesize noTickView=_noTickView;
@property(retain, nonatomic) YKFMWPhotoBrowser *photoBrowswer; // @synthesize photoBrowswer=_photoBrowswer;
@property(retain, nonatomic) YKFPhotoPicker *photoPicker; // @synthesize photoPicker=_photoPicker;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *preViewPhotos; // @synthesize preViewPhotos=_preViewPhotos;
@property(retain, nonatomic) YKFPhotoSelectedModel *selectedModel; // @synthesize selectedModel=_selectedModel;
- (void).cxx_destruct;
- (void)onSend;
- (void)goBack:(id)arg1;
- (void)toggleTick;
- (void)photoBrowser:(id)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (double)heightForToolBarInPhotoBrowser:(id)arg1 atOrientation:(long long)arg2;
- (id)toolBarInPhotoBrowser:(id)arg1;
- (double)heightForNavigationViewInPhotoBrowser:(id)arg1 atOrientation:(long long)arg2;
- (id)navigationViewInPhotoBrowser:(id)arg1;
- (void)photoPickerDidCancelCropImage;
- (_Bool)canDismissWithGesture;
- (_Bool)shouldHideNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)updateBottomView;
- (void)updateTickButton;
- (void)updateTickButtonSelected:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

