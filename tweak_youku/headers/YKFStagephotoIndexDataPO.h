//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStagephotoPhotoPO>, NSArray<YKFStagephotoStillsTabPO>, YKFStagephotoShowInfoPO;

@interface YKFStagephotoIndexDataPO : YKFAPIModel
{
    NSArray<YKFStagephotoPhotoPO> *_bannerList;
    YKFStagephotoShowInfoPO *_showInfo;
    NSArray<YKFStagephotoStillsTabPO> *_tabList;
}

@property(retain, nonatomic) NSArray<YKFStagephotoStillsTabPO> *tabList; // @synthesize tabList=_tabList;
@property(retain, nonatomic) YKFStagephotoShowInfoPO *showInfo; // @synthesize showInfo=_showInfo;
@property(retain, nonatomic) NSArray<YKFStagephotoPhotoPO> *bannerList; // @synthesize bannerList=_bannerList;
- (void).cxx_destruct;

@end

