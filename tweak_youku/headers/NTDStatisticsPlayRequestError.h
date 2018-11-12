//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface NTDStatisticsPlayRequestError : NSObject
{
    _Bool _isSuccess;
    NSMutableDictionary *_extInfoData;
    NSMutableDictionary *_extStatisticsData;
    NSString *_errorMsg;
    NSString *_errorCode;
}

+ (_Bool)isNeedReportBusinessErrorCode:(long long)arg1;
+ (long long)parserError:(id)arg1;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSMutableDictionary *extStatisticsData; // @synthesize extStatisticsData=_extStatisticsData;
@property(retain, nonatomic) NSMutableDictionary *extInfoData; // @synthesize extInfoData=_extInfoData;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end
