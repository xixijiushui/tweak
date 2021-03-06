//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKSafeModeTrackProtocol.h"
#import "TBSafeModeDelegate.h"

@class NSMutableArray, NSString;

@interface DYKSafeMode : NSObject <TBSafeModeDelegate, DYKSafeModeTrackProtocol>
{
    NSMutableArray *_holdingActionArray;
    id <DYKSafeModeDelegate> _delegate;
}

+ (_Bool)trackApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
+ (void)trackLaunch;
+ (_Bool)needChangeToSafeMode;
+ (_Bool)safeModeEnabled;
+ (void)endSafeModeCheck;
+ (void)safeModeCheckWithFinishBlock:(CDUnknownBlockType)arg1;
+ (void)startSafeModeCheckWithDelegate:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) id <DYKSafeModeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *holdingActionArray; // @synthesize holdingActionArray=_holdingActionArray;
- (void).cxx_destruct;
- (_Bool)videoFolderDetectAtRootPath:(id)arg1 subPath:(id)arg2;
- (id)fetchLocalVideoWhiteList;
- (id)whiteListPaths;
- (id)whiteListUserDefaultKeys;
- (void)safeModeFinish:(_Bool)arg1;
- (void)customRecoverActionsWithFinisBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

