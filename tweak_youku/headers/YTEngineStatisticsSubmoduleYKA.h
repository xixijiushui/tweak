//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTEngineStatisticsSubmoduleYKA : NSObject
{
    double _recordedTimeStamp;
    double _currentTimeStamp;
    _Bool _didRequestVideo;
    _Bool _didLoadPlayer;
}

- (void)statisticsYKAEvent:(unsigned long long)arg1 andEventDic:(id)arg2;
- (void)getStatisticsYKAMessage:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (id)adjustVideoFormat:(id)arg1;

@end

