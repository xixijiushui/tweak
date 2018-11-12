//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, TBRequestErrInfo, TBVideoPlayErrInfo, TBVideoPlayErrStatisticsInfo, YTPlaylinkErrorInfo;

@interface YTPlaylinkErrorObject : NSObject
{
    YTPlaylinkErrorInfo *_currentUPSInfo;
    TBRequestErrInfo *_requestErrorInfo;
    TBVideoPlayErrInfo *_playErrorInfo;
    TBVideoPlayErrStatisticsInfo *_statisticsInfo;
    NSDate *_errorDate;
}

@property(retain, nonatomic) NSDate *errorDate; // @synthesize errorDate=_errorDate;
@property(retain, nonatomic) TBVideoPlayErrStatisticsInfo *statisticsInfo; // @synthesize statisticsInfo=_statisticsInfo;
@property(retain, nonatomic) TBVideoPlayErrInfo *playErrorInfo; // @synthesize playErrorInfo=_playErrorInfo;
@property(retain, nonatomic) TBRequestErrInfo *requestErrorInfo; // @synthesize requestErrorInfo=_requestErrorInfo;
@property(retain, nonatomic) YTPlaylinkErrorInfo *currentUPSInfo; // @synthesize currentUPSInfo=_currentUPSInfo;
- (void).cxx_destruct;

@end
