//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSaintseiyaBasePageDataDTO.h"

@class NSArray<YKFSaintseiyaPowerBootItemDTO>;

@interface YKFSaintseiyaPowerBootPageDTO : YKFSaintseiyaBasePageDataDTO
{
    long long _countDown;
    long long _endTime;
    NSArray<YKFSaintseiyaPowerBootItemDTO> *_items;
    long long _limitNum;
    long long _startTime;
}

@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long limitNum; // @synthesize limitNum=_limitNum;
@property(retain, nonatomic) NSArray<YKFSaintseiyaPowerBootItemDTO> *items; // @synthesize items=_items;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
- (void).cxx_destruct;

@end

