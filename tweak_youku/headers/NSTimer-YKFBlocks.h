//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTimer.h"

@interface NSTimer (YKFBlocks)
+ (void)blockTimerDidFire:(id)arg1;
+ (id)YKF_scheduledTimerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
+ (id)YKF_timerWithTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2 repeats:(_Bool)arg3;
- (id)YKF_initWithFireDate:(id)arg1 interval:(double)arg2 block:(CDUnknownBlockType)arg3 repeats:(_Bool)arg4;
@end
