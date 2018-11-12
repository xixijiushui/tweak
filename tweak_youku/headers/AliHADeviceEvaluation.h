//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliHADeviceEvaluation : NSObject
{
}

+ (_Bool)isBelowiOS10;
+ (void)memoryUsageOfApp:(float *)arg1 virtualSize:(float *)arg2 footprint:(float *)arg3;
+ (int)systemMemoryLevel;
+ (unsigned long long)freeMemoryOfDevice;
+ (float)cpuUsageOfDevice;
+ (float)cpuUsageOfApp;
+ (id)getCurrentDeviceLevelConfig;
+ (unsigned long long)evaluationForRuntimeLevel;
+ (unsigned long long)evaluationForDeviceLevel;
+ (id)getBatteryInfo;
+ (id)getDisplayInfo;
+ (id)getStorageInfo;
+ (id)getMemoryInfo;
+ (id)getCPUInfo;
+ (id)getDeviceInfo;

@end
