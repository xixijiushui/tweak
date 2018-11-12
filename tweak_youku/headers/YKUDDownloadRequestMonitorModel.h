//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface YKUDDownloadRequestMonitorModel : NSObject
{
    NSNumber *_fileSize;
    NSNumber *_finishedSize;
    NSNumber *_downloadDuration;
    NSNumber *_connDuration;
    NSNumber *_dataDuration;
    NSString *_vid;
    NSString *_taskId;
    NSString *_definition;
    NSString *_segmentId;
    NSString *_httpStatusCode;
    NSString *_via;
    NSString *_originalCDNURL;
    NSString *_finalCDNURL;
    NSString *_errorMessage;
    NSString *_currentIP;
    NSString *_downloadType;
    NSString *_startTime;
    NSString *_isBackground;
    NSString *_isLogin;
    NSString *_memberType;
    NSString *_ts;
    NSNumber *_startupSize;
    NSNumber *_startupTime;
    NSString *_shortMsg;
    NSString *_config;
    NSString *_success;
    NSString *_networkStatus;
    NSString *_speedUpModeOn;
    NSString *_concurrentVideoCount;
    NSString *_speedUpChannel;
    NSString *_lastViaNode;
    NSString *_relaunch;
    NSNumber *_bytesCost;
    NSString *_ctype;
    NSString *_sessionId;
}

@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *ctype; // @synthesize ctype=_ctype;
@property(retain, nonatomic) NSNumber *bytesCost; // @synthesize bytesCost=_bytesCost;
@property(retain, nonatomic) NSString *relaunch; // @synthesize relaunch=_relaunch;
@property(retain, nonatomic) NSString *lastViaNode; // @synthesize lastViaNode=_lastViaNode;
@property(retain, nonatomic) NSString *speedUpChannel; // @synthesize speedUpChannel=_speedUpChannel;
@property(retain, nonatomic) NSString *concurrentVideoCount; // @synthesize concurrentVideoCount=_concurrentVideoCount;
@property(retain, nonatomic) NSString *speedUpModeOn; // @synthesize speedUpModeOn=_speedUpModeOn;
@property(retain, nonatomic) NSString *networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) NSString *success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *shortMsg; // @synthesize shortMsg=_shortMsg;
@property(retain, nonatomic) NSNumber *startupTime; // @synthesize startupTime=_startupTime;
@property(retain, nonatomic) NSNumber *startupSize; // @synthesize startupSize=_startupSize;
@property(retain, nonatomic) NSString *ts; // @synthesize ts=_ts;
@property(retain, nonatomic) NSString *memberType; // @synthesize memberType=_memberType;
@property(retain, nonatomic) NSString *isLogin; // @synthesize isLogin=_isLogin;
@property(retain, nonatomic) NSString *isBackground; // @synthesize isBackground=_isBackground;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *currentIP; // @synthesize currentIP=_currentIP;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *finalCDNURL; // @synthesize finalCDNURL=_finalCDNURL;
@property(retain, nonatomic) NSString *originalCDNURL; // @synthesize originalCDNURL=_originalCDNURL;
@property(retain, nonatomic) NSString *via; // @synthesize via=_via;
@property(retain, nonatomic) NSString *httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(retain, nonatomic) NSString *segmentId; // @synthesize segmentId=_segmentId;
@property(retain, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSNumber *dataDuration; // @synthesize dataDuration=_dataDuration;
@property(retain, nonatomic) NSNumber *connDuration; // @synthesize connDuration=_connDuration;
@property(retain, nonatomic) NSNumber *downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(retain, nonatomic) NSNumber *finishedSize; // @synthesize finishedSize=_finishedSize;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSegment:(id)arg1;

@end
