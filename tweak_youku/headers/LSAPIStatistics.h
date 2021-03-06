//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSJSONClient, NSString;

@interface LSAPIStatistics : NSObject
{
    LSJSONClient *_statisticsClient;
    NSString *_pvid;
}

+ (id)defaultParameters;
+ (id)pvid;
+ (id)apiStatistisc;
@property(copy, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(retain, nonatomic) LSJSONClient *statisticsClient; // @synthesize statisticsClient=_statisticsClient;
- (void).cxx_destruct;
- (void)livePageInteractionStatistics:(unsigned long long)arg1 liveInfo:(id)arg2 liveID:(id)arg3 callback:(id)arg4;
- (void)livePagePVStatisticsWithLiveInfo:(id)arg1 callback:(id)arg2;
- (void)apiStatisticsExtendURL:(id)arg1 parameters:(id)arg2;
- (void)apiStatisticsURL:(id)arg1 parameters:(id)arg2;
- (id)getUserParameters:(id)arg1;

@end

