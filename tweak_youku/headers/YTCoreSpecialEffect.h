//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager;

@interface YTCoreSpecialEffect : NSObject
{
    CMMotionManager *mMotionManager;
    _Bool mStarted;
    id <YTCoreSpecialEffectDelegate> _delegate;
}

@property(nonatomic) __weak id <YTCoreSpecialEffectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setGyroscopeActive:(_Bool)arg1;
- (void)p_gyroscopeStop;
- (void)p_gyroscopeStart;
- (void)p_deviceOrientationNotification:(id)arg1;
- (void)deinit;
- (id)init;
- (void)dealloc;

@end
