//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVideoAsset.h"

@class PHAsset, PHLivePhoto, YKVideoEditor;

@interface YKLivePhotoAsset : YKVideoAsset
{
    PHAsset *_phAsset;
    CDUnknownBlockType _fetchAssetInfoCompletion;
    PHLivePhoto *_livePhoto;
    YKVideoEditor *_editor;
}

+ (id)livePhotoAssetWithLocalIdentifier:(id)arg1;
+ (_Bool)isAfterIOS9_1;
+ (_Bool)livePhotoAvailable;
@property(retain, nonatomic) YKVideoEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(copy, nonatomic) CDUnknownBlockType fetchAssetInfoCompletion; // @synthesize fetchAssetInfoCompletion=_fetchAssetInfoCompletion;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (void).cxx_destruct;
- (id)requestDataFromOffset:(long long)arg1 length:(long long)arg2;
- (void)requestLivePhoto;
- (id)initWithFetchInfoCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPHAsset:(id)arg1;
- (id)getMD5;
- (unsigned long long)fileSize;

@end
