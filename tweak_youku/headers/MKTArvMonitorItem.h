//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MKTArvMonitorItem : NSObject
{
    int _platform;
    long long _index;
    NSString *_monitorId;
    long long _bizCode;
    NSString *_topic;
    NSString *_bizTag;
    long long _code;
    long long _source;
    long long _type;
    NSString *_taskId;
    long long _mode;
    NSString *_time;
    NSString *_mtopTime;
    NSString *_serverTime;
    long long _mark;
    NSString *_ext;
}

@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) long long mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSString *mtopTime; // @synthesize mtopTime=_mtopTime;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *bizTag; // @synthesize bizTag=_bizTag;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *monitorId; // @synthesize monitorId=_monitorId;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
