//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStararrivalDanmukuContentPO>;

@interface YKFStararrivalDanmukuListPO : YKFAPIModel
{
    NSArray<YKFStararrivalDanmukuContentPO> *_items;
    long long _starArrivalId;
    long long _starDanmuTotals;
    long long _totals;
}

@property(nonatomic) long long totals; // @synthesize totals=_totals;
@property(nonatomic) long long starDanmuTotals; // @synthesize starDanmuTotals=_starDanmuTotals;
@property(nonatomic) long long starArrivalId; // @synthesize starArrivalId=_starArrivalId;
@property(retain, nonatomic) NSArray<YKFStararrivalDanmukuContentPO> *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end
