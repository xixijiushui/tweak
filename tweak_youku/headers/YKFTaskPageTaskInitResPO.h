//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFTaskPageNotifyPO>, YKFTaskPageInitConfigsPO;

@interface YKFTaskPageTaskInitResPO : YKFAPIModel
{
    YKFTaskPageInitConfigsPO *_configs;
    NSArray<YKFTaskPageNotifyPO> *_notifys;
}

@property(retain, nonatomic) NSArray<YKFTaskPageNotifyPO> *notifys; // @synthesize notifys=_notifys;
@property(retain, nonatomic) YKFTaskPageInitConfigsPO *configs; // @synthesize configs=_configs;
- (void).cxx_destruct;

@end
