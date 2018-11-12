//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VEBaseMaterial.h"

@class NSMutableArray, NSString;

@interface VEInPlayMaterial : VEBaseMaterial
{
    double _playTime;
    NSString *_downloadURL;
    NSString *_coverImageURL;
    NSString *_materialName;
    long long _materialId;
    long long _activityId;
    NSString *_activityName;
    long long _downloadState;
    double _downloadProgress;
    NSString *_audioPath;
    NSString *_imageRootPath;
    NSMutableArray *_imagePaths;
}

@property(readonly, nonatomic) NSMutableArray *imagePaths; // @synthesize imagePaths=_imagePaths;
@property(readonly, nonatomic) NSString *imageRootPath; // @synthesize imageRootPath=_imageRootPath;
@property(readonly, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) long long downloadState; // @synthesize downloadState=_downloadState;
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(nonatomic) long long materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) NSString *materialName; // @synthesize materialName=_materialName;
@property(retain, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) double playTime; // @synthesize playTime=_playTime;
- (void).cxx_destruct;
- (_Bool)findPropertyWithFilePath:(id)arg1;
- (void)findImagePathsInImageRootPath:(id)arg1;
- (_Bool)parsePropertyDictionary:(id)arg1;
- (void)setFolderPath:(id)arg1;
- (id)init;

@end
