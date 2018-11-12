//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTEngineModule.h"

@class NSString;

@interface SPPreVIPAdvEngineModule : NSObject <YTEngineModule>
{
    id <YTEngineModuleController><YTEngineAdController> mModuleController;
}

@property(nonatomic) __weak id <YTEngineModuleController><YTEngineAdController> moduleController; // @synthesize moduleController=mModuleController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)moduleController:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)moduleContollerWillUninstall:(id)arg1;
- (void)moduleControllerDidInstall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isInactive;
@property(readonly) Class superclass;

@end

