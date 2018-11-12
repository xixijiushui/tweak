//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NGVideoAsset.h"

@class NGVideoEditor, PHAsset, PHLivePhoto;

@interface NGLivePhotoAsset : NGVideoAsset
{
    PHAsset *_phAsset;
    CDUnknownBlockType _fetchAssetInfoCompletion;
    PHLivePhoto *_livePhoto;
    NGVideoEditor *_editor;
}

+ (id)livePhotoAssetWithLocalIdentifier:(id)arg1;
+ (_Bool)isAfterIOS9_1;
+ (_Bool)livePhotoAvailable;
@property(retain, nonatomic) NGVideoEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(copy, nonatomic) CDUnknownBlockType fetchAssetInfoCompletion; // @synthesize fetchAssetInfoCompletion=_fetchAssetInfoCompletion;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void).cxx_destruct;
- (void)requestLivePhoto;
- (id)initWithPHAsset:(id)arg1;
- (id)getMD5;
- (unsigned long long)fileSize;

@end

