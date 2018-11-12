//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSParser.h"

@class LSLiveCameraModel, LSLiveQualityModel, NSArray, NSString;

@interface LSLiveStreamController : NSObject <LSParser>
{
    NSArray *_cameraList;
    NSArray *_qualityList;
    LSLiveCameraModel *_cameraCurrent;
    LSLiveQualityModel *_qualityCurrent;
    LSLiveCameraModel *_cameraDefault;
}

@property(retain, nonatomic) LSLiveCameraModel *cameraDefault; // @synthesize cameraDefault=_cameraDefault;
@property(retain, nonatomic) LSLiveQualityModel *qualityCurrent; // @synthesize qualityCurrent=_qualityCurrent;
@property(retain, nonatomic) LSLiveCameraModel *cameraCurrent; // @synthesize cameraCurrent=_cameraCurrent;
@property(retain, nonatomic) NSArray *qualityList; // @synthesize qualityList=_qualityList;
@property(retain, nonatomic) NSArray *cameraList; // @synthesize cameraList=_cameraList;
- (void).cxx_destruct;
- (_Bool)selectStreamIndex:(long long)arg1;
- (void)updateStream:(id)arg1;
- (id)getQualityFromStreamIndex:(long long)arg1;
- (void)parseObject:(id)arg1;
- (void)parseStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
