//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSMutableArray;

@interface ViewTypeBTopicsModel : ViewTypeBaseModel
{
    NSMutableArray *_topics;
}

@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
- (void).cxx_destruct;
- (void)setGroupNumber:(long long)arg1;
- (void)obtainPageStatisticParams:(id)arg1;
- (void)notifyUpdateSubmodesParameters;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end

