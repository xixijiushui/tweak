//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSMutableArray;

@interface EBGyroManager : NSObject
{
    CMMotionManager *_motionManager;
    NSMutableArray *_watchers;
}

+ (id)sharedInstance;
+ (void)removeOrientation:(id)arg1;
+ (void)watchOrientation:(id)arg1;
@property(retain, nonatomic) NSMutableArray *watchers; // @synthesize watchers=_watchers;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)removeOrientation:(id)arg1;
- (void)watchOrientation:(id)arg1;
- (void)startMotionManager;
- (id)init;

@end

