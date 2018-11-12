//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSNumber, NSString;

@interface UTDataSet : NSObject <NSCopying>
{
    int _eventid;
    NSNumber *_dnsStartTime;
    NSNumber *_dnsEndTime;
    NSString *_tcpLinkDate;
    NSString *_oneWayTime;
    NSString *_dnsTime;
    NSString *_utType;
    NSString *_tcpTotalTimes;
    NSString *_tcpTotalDates;
    NSString *_SpdyTotalTimes;
    NSString *_errorCode;
    NSString *_errorInfo;
    NSString *_errorMemo;
    NSDictionary *_args;
    NSString *_arg1;
    NSString *_arg2;
    NSString *_arg3;
    NSString *_expression;
    double _mtopStartTime;
    double _mtopEndTime;
    double _jsonParseStartTime;
    double _jsonParseEndTime;
    double _sendWaitStart;
    double _sendWaitEnd;
    NSString *_mtopOneWayTime;
    NSString *_isSync;
}

@property(retain, nonatomic) NSString *isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) NSString *mtopOneWayTime; // @synthesize mtopOneWayTime=_mtopOneWayTime;
@property(nonatomic) double sendWaitEnd; // @synthesize sendWaitEnd=_sendWaitEnd;
@property(nonatomic) double sendWaitStart; // @synthesize sendWaitStart=_sendWaitStart;
@property(nonatomic) double jsonParseEndTime; // @synthesize jsonParseEndTime=_jsonParseEndTime;
@property(nonatomic) double jsonParseStartTime; // @synthesize jsonParseStartTime=_jsonParseStartTime;
@property double mtopEndTime; // @synthesize mtopEndTime=_mtopEndTime;
@property double mtopStartTime; // @synthesize mtopStartTime=_mtopStartTime;
@property(copy, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(copy, nonatomic) NSString *arg3; // @synthesize arg3=_arg3;
@property(copy, nonatomic) NSString *arg2; // @synthesize arg2=_arg2;
@property(copy, nonatomic) NSString *arg1; // @synthesize arg1=_arg1;
@property(copy, nonatomic) NSDictionary *args; // @synthesize args=_args;
@property(nonatomic) int eventid; // @synthesize eventid=_eventid;
@property(copy, nonatomic) NSString *errorMemo; // @synthesize errorMemo=_errorMemo;
@property(copy, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *SpdyTotalTimes; // @synthesize SpdyTotalTimes=_SpdyTotalTimes;
@property(copy, nonatomic) NSString *tcpTotalDates; // @synthesize tcpTotalDates=_tcpTotalDates;
@property(copy, nonatomic) NSString *tcpTotalTimes; // @synthesize tcpTotalTimes=_tcpTotalTimes;
@property(copy, nonatomic) NSString *utType; // @synthesize utType=_utType;
@property(copy, nonatomic) NSString *dnsTime; // @synthesize dnsTime=_dnsTime;
@property(copy, nonatomic) NSString *oneWayTime; // @synthesize oneWayTime=_oneWayTime;
@property(copy, nonatomic) NSString *tcpLinkDate; // @synthesize tcpLinkDate=_tcpLinkDate;
@property(copy, nonatomic) NSNumber *dnsEndTime; // @synthesize dnsEndTime=_dnsEndTime;
@property(copy, nonatomic) NSNumber *dnsStartTime; // @synthesize dnsStartTime=_dnsStartTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1;
- (void)dealloc;

@end

