//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTimer.h"

@interface NSTimer (GBToolbox)
+ (id)_YTtimerFactory:(double)arg1 repeats:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3 shouldSchedule:(_Bool)arg4;
+ (id)YTtimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)YTscheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)callBlock:(CDUnknownBlockType)arg1;
@end

