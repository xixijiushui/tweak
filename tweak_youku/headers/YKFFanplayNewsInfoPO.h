//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFFanplayFanWorkPO>;

@interface YKFFanplayNewsInfoPO : YKFAPIModel
{
    long long _num;
    NSArray<YKFFanplayFanWorkPO> *_showList;
    long long _showType;
}

@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSArray<YKFFanplayFanWorkPO> *showList; // @synthesize showList=_showList;
@property(nonatomic) long long num; // @synthesize num=_num;
- (void).cxx_destruct;

@end

