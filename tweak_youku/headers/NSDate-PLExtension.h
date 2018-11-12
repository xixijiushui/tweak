//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (PLExtension)
+ (id)hmsFormat;
+ (id)ymdFormat;
+ (id)ymdHmsFormat;
+ (id)timeInfoWithDateString:(id)arg1;
+ (_Bool)isLeapYear:(id)arg1;
+ (unsigned long long)daysInYear:(id)arg1;
+ (unsigned long long)daysInMonth:(id)arg1 month:(unsigned long long)arg2;
+ (id)timeInfoWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1 format:(id)arg2;
+ (id)stringWithDate:(id)arg1 format:(id)arg2;
+ (unsigned long long)year:(id)arg1;
+ (unsigned long long)month:(id)arg1;
+ (unsigned long long)day:(id)arg1;
- (id)hmsFormat;
- (id)ymdFormat;
- (_Bool)isLeapYear;
- (unsigned long long)daysInMonth:(unsigned long long)arg1;
- (id)pl_timeInfo;
- (id)stringWithFormat:(id)arg1;
- (unsigned long long)year;
- (unsigned long long)month;
- (unsigned long long)day;
@end

