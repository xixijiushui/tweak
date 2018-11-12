//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, PHAsset, UIImage;

@interface YKSAliyunAssetModel : NSObject
{
    _Bool _isSelected;
    PHAsset *_asset;
    long long _type;
    NSString *_timeLength;
    double _assetDuration;
    UIImage *_thumbnailImage;
    NSURL *_videoUrl;
}

+ (id)getNewTimeFromDurationSecond:(long long)arg1;
+ (id)modelWithAsset:(id)arg1 type:(long long)arg2;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(copy, nonatomic) NSString *timeLength; // @synthesize timeLength=_timeLength;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;

@end

