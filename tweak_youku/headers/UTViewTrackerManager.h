//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCConfigInterfaceUpdate.h"

@class NSString, UTViewTrackerConfigModel;

@interface UTViewTrackerManager : NSObject <UTMCConfigInterfaceUpdate>
{
    _Bool _isDebugModeOn;
    id <UTViewTrackerCommitProtocol> _commitProtocol;
    UTViewTrackerConfigModel *_config;
}

+ (void)refreshBlockExposure:(id)arg1 viewIndex:(id)arg2;
+ (void)setExposureView:(id)arg1 controlName:(id)arg2 viewIndex:(id)arg3 args:(id)arg4;
+ (id)sharedManager;
@property(nonatomic) _Bool isDebugModeOn; // @synthesize isDebugModeOn=_isDebugModeOn;
@property(retain, nonatomic) UTViewTrackerConfigModel *config; // @synthesize config=_config;
@property(retain, nonatomic) id <UTViewTrackerCommitProtocol> commitProtocol; // @synthesize commitProtocol=_commitProtocol;
- (void).cxx_destruct;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (void)_setupWithConfig:(id)arg1;
- (_Bool)exposureNeedUpload:(id)arg1;
- (double)exposureAreaThreshold;
- (unsigned long long)exposureTimeThreshold;
- (void)turnOnUTExposure;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

