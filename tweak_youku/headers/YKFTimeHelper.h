//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKFTimeHelper : NSObject
{
}

+ (id)convertTimeFromSeconds:(double)arg1;
+ (double)timeIntervalFromDateString:(id)arg1 format:(id)arg2;
+ (double)uptime;
+ (id)remainingTimes:(long long)arg1;
+ (unsigned long long)remainingDays:(long long)arg1;
+ (id)readableTime:(long long)arg1;
+ (id)formatTime:(long long)arg1;
+ (id)formatNumber:(long long)arg1;
+ (id)weekdayFromTimeInterval:(double)arg1;
+ (id)dateStringFromTimeInterval:(long long)arg1 format:(id)arg2;
+ (id)dateStringTillNowFromTimeInterval:(long long)arg1;
+ (id)remainingDateStringTillNowFromTimeInterval:(long long)arg1;

@end

