//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DYKLauncherStatistics : NSObject
{
    NSMutableDictionary *_sessions;
}

@property(retain, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
- (void).cxx_destruct;
- (id)registerAppMonitor;
- (id)staticsInfo;
- (void)clearInfos;
- (void)uploadStatisticsData;
- (void)measureItem:(id)arg1 inSession:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)measureSession:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
