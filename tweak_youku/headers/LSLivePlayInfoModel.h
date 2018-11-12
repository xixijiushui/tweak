//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSParser.h"

@class LSLiveCameraModel, NSArray, NSString;

@interface LSLivePlayInfoModel : NSObject <LSParser>
{
    NSArray *_cameras;
    NSArray *_oldCameras;
    LSLiveCameraModel *_defaultCameraModel;
}

@property(retain, nonatomic) LSLiveCameraModel *defaultCameraModel; // @synthesize defaultCameraModel=_defaultCameraModel;
@property(retain, nonatomic) NSArray *oldCameras; // @synthesize oldCameras=_oldCameras;
@property(retain, nonatomic) NSArray *cameras; // @synthesize cameras=_cameras;
- (void).cxx_destruct;
- (_Bool)playNeedVip;
- (long long)defaultStreamIndex;
- (id)endLiveVid;
- (id)cameraByIndex:(long long)arg1;
- (id)cameraTitles;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

