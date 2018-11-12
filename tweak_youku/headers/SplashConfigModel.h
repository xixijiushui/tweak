//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SplashConfigModel : NSObject
{
    _Bool _isColdStartTuningEnabled;
    _Bool _isColdStartEnabled;
    _Bool _hotStartAdEnabled;
    long long _coldStartWaitMilliSeconds;
    double _hotStartAdBgWaitTimeThreshold;
    double _hotStartAdDisplayTwiceMinInterval;
    NSString *_whiteList;
    double _hotStartAdRequestMinInterval;
}

@property(nonatomic) double hotStartAdRequestMinInterval; // @synthesize hotStartAdRequestMinInterval=_hotStartAdRequestMinInterval;
@property(copy, nonatomic) NSString *whiteList; // @synthesize whiteList=_whiteList;
@property(nonatomic) double hotStartAdDisplayTwiceMinInterval; // @synthesize hotStartAdDisplayTwiceMinInterval=_hotStartAdDisplayTwiceMinInterval;
@property(nonatomic) double hotStartAdBgWaitTimeThreshold; // @synthesize hotStartAdBgWaitTimeThreshold=_hotStartAdBgWaitTimeThreshold;
@property(nonatomic) _Bool hotStartAdEnabled; // @synthesize hotStartAdEnabled=_hotStartAdEnabled;
@property(nonatomic) _Bool isColdStartEnabled; // @synthesize isColdStartEnabled=_isColdStartEnabled;
@property(nonatomic) long long coldStartWaitMilliSeconds; // @synthesize coldStartWaitMilliSeconds=_coldStartWaitMilliSeconds;
@property(nonatomic) _Bool isColdStartTuningEnabled; // @synthesize isColdStartTuningEnabled=_isColdStartTuningEnabled;
- (void).cxx_destruct;
- (id)init;

@end
