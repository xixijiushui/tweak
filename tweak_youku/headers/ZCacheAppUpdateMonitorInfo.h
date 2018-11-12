//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZCacheMonitorInfo.h"

@class NSError, NSString;

@interface ZCacheAppUpdateMonitorInfo : ZCacheMonitorInfo
{
    _Bool _online;
    _Bool _networkSupport;
    _Bool _isIncr;
    NSString *_appName;
    NSString *_seq;
    double _downloadTime;
    double _unzipTime;
    double _verifyTime;
    double _diskTime;
    double _updateTime;
    double _notificationTime;
    double _publishTime;
    NSError *_error;
}

+ (id)monitorMeasureRange;
+ (id)monitorPoint;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) double notificationTime; // @synthesize notificationTime=_notificationTime;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) double diskTime; // @synthesize diskTime=_diskTime;
@property(nonatomic) double verifyTime; // @synthesize verifyTime=_verifyTime;
@property(nonatomic) double unzipTime; // @synthesize unzipTime=_unzipTime;
@property(nonatomic) double downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) _Bool isIncr; // @synthesize isIncr=_isIncr;
@property(nonatomic) _Bool networkSupport; // @synthesize networkSupport=_networkSupport;
@property(nonatomic) _Bool online; // @synthesize online=_online;
@property(readonly, copy, nonatomic) NSString *seq; // @synthesize seq=_seq;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)errorArg;
@property(readonly, nonatomic) _Bool hasPublishTime;
- (id)initWithAppName:(id)arg1 withSeq:(unsigned long long)arg2;

@end

