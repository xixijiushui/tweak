//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFFanplayBannerPO>, NSArray<YKFFanplayFanWorkPO>, NSArray<YKFFanplayIndexFanActivityInfoPO>;

@interface YKFFanplayInitInfoPO : YKFAPIModel
{
    NSArray<YKFFanplayBannerPO> *_bannerList;
    NSArray<YKFFanplayFanWorkPO> *_fanWorksOfStick;
    NSArray<YKFFanplayFanWorkPO> *_fanWorksOfZhw;
    NSArray<YKFFanplayIndexFanActivityInfoPO> *_funActivityInfoList;
}

@property(retain, nonatomic) NSArray<YKFFanplayIndexFanActivityInfoPO> *funActivityInfoList; // @synthesize funActivityInfoList=_funActivityInfoList;
@property(retain, nonatomic) NSArray<YKFFanplayFanWorkPO> *fanWorksOfZhw; // @synthesize fanWorksOfZhw=_fanWorksOfZhw;
@property(retain, nonatomic) NSArray<YKFFanplayFanWorkPO> *fanWorksOfStick; // @synthesize fanWorksOfStick=_fanWorksOfStick;
@property(retain, nonatomic) NSArray<YKFFanplayBannerPO> *bannerList; // @synthesize bannerList=_bannerList;
- (void).cxx_destruct;

@end
