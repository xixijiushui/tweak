//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString, ZCacheAppVisitMonitorInfo;

@interface ZCacheResourceReader : NSObject
{
    NSString *_url;
    NSError *_error;
    double _startTime;
    ZCacheAppVisitMonitorInfo *_monitorInfo;
    NSString *_appName;
    NSString *_appVersion;
    unsigned long long _appSeq;
    long long _appMonitor;
    NSString *_contentType;
    NSDictionary *_header;
    long long _fromType;
}

+ (id)getMimiTypeFromData:(id)arg1;
+ (id)resourceContentForURL:(id)arg1 withHeader:(id *)arg2 error:(id *)arg3;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(copy, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(nonatomic) unsigned long long appSeq; // @synthesize appSeq=_appSeq;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) ZCacheAppVisitMonitorInfo *monitorInfo; // @synthesize monitorInfo=_monitorInfo;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)getHeader:(id)arg1;
- (_Bool)checkData:(id)arg1 withUrlInfo:(id)arg2;
- (id)concatFiles:(id)arg1;
- (id)parseComboUrlInfo;
- (id)parseCombo;
- (_Bool)isComboUrl;
- (void)reportPackageAppVisit:(id)arg1 withSeq:(unsigned long long)arg2 withError:(id)arg3;
- (void)reportPackageAppVisit:(id)arg1;
- (id)verifyResource:(id)arg1 withData:(id)arg2;
- (id)readFromLocalFile:(id)arg1;
- (id)read;
- (id)initWithURL:(id)arg1;

@end

