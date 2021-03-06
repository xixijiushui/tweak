//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (ShortVideoAdditions)
+ (id)YKSV_dateYesterday;
+ (id)YKSV_dateTomorrow;
+ (id)YKSV_dateWithDaysBeforeNow:(long long)arg1;
+ (id)YKSV_dateWithDaysFromNow:(long long)arg1;
+ (id)YKSV_convertDateToLocalTime:(id)arg1;
+ (id)YKSV_currentCalendar;
@property(readonly) long long YKSV_year;
@property(readonly) long long YKSV_weekday;
@property(readonly) long long YKSV_weekOfYear;
@property(readonly) long long YKSV_weekOfMonth;
@property(readonly) long long YKSV_month;
@property(readonly) long long YKSV_day;
@property(readonly) long long YKSV_seconds;
@property(readonly) long long YKSV_minute;
@property(readonly) long long YKSV_hour;
- (id)YKSV_dateByAddingMinutes:(long long)arg1;
- (id)YKSV_dateByAddingHours:(long long)arg1;
- (id)YKSV_dateBySubtractingDays:(long long)arg1;
- (id)YKSV_dateByAddingDays:(long long)arg1;
- (id)YKSV_dateBySubtractingMonths:(long long)arg1;
- (id)YKSV_dateByAddingMonths:(long long)arg1;
- (id)YKSV_dateByAddingYears:(long long)arg1;
- (_Bool)YKSV_isTypicallyWeekend;
- (_Bool)YKSV_isLaterThanDate:(id)arg1;
- (_Bool)YKSV_isEarlierThanDate:(id)arg1;
- (_Bool)YKSV_isLastYear;
- (_Bool)YKSV_isThisYear;
- (_Bool)YKSV_isSameYearAsDate:(id)arg1;
- (_Bool)YKSV_isSameMonthAsDate:(id)arg1;
- (_Bool)YKSV_isSameWeekAsDate:(id)arg1;
- (_Bool)YKSV_isToday;
- (_Bool)YKSV_isEqualToDateIgnoringTime:(id)arg1;
- (id)YKSV_stringWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
- (id)YKSV_stringWithFormat:(id)arg1;
@end

