//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DetailContent, DetailPlayerStatisticsModel, NSMutableDictionary;

@interface DetailContentStatistics : NSObject
{
    NSMutableDictionary *_showDic;
    DetailContent *_content;
    DetailPlayerStatisticsModel *_playerStatisticsModel;
}

@property(readonly, nonatomic) DetailPlayerStatisticsModel *playerStatisticsModel; // @synthesize playerStatisticsModel=_playerStatisticsModel;
@property(nonatomic) __weak DetailContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)generalParameters;
- (void)statisticsShow:(id)arg1 index:(long long)arg2;
- (void)showContentWithIndex:(long long)arg1;
- (void)statisticsClick:(id)arg1 index:(long long)arg2;
- (void)clickContentWithIndex:(long long)arg1;
- (id)helper;
- (id)init;

@end
