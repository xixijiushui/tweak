//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, YKVideoCacheDataSource;

@interface YKAutoClearManager : NSObject
{
    _Bool _isAutoClearSwitch;
    _Bool _autoClearSwitchState;
    NSString *_timeIntervalString;
    NSString *_totalSize;
    NSString *_totalSizeOfHasCleared;
    NSMutableArray *_clearedVideoArray;
    YKVideoCacheDataSource *_dataSource;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YKVideoCacheDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *clearedVideoArray; // @synthesize clearedVideoArray=_clearedVideoArray;
@property(retain, nonatomic) NSString *totalSizeOfHasCleared; // @synthesize totalSizeOfHasCleared=_totalSizeOfHasCleared;
@property(retain, nonatomic) NSString *totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) _Bool autoClearSwitchState; // @synthesize autoClearSwitchState=_autoClearSwitchState;
@property(nonatomic) _Bool isAutoClearSwitch; // @synthesize isAutoClearSwitch=_isAutoClearSwitch;
@property(retain, nonatomic) NSString *timeIntervalString; // @synthesize timeIntervalString=_timeIntervalString;
- (void).cxx_destruct;
- (id)beautyFileSize:(float)arg1;
- (void)autoDelete:(id)arg1;

@end
