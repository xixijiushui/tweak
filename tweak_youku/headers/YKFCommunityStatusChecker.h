//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTFFandomService;

@interface YKFCommunityStatusChecker : NSObject
{
    TTFFandomService *_service;
}

+ (id)defaultChecker;
@property(retain, nonatomic) TTFFandomService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)excuteTaskNeedsFollowCommunity:(long long)arg1 task:(CDUnknownBlockType)arg2 tipsMsg:(id)arg3 cancelTitle:(id)arg4 confirmTitle:(id)arg5;
- (void)_followCommunity:(long long)arg1 thenExcuteTask:(CDUnknownBlockType)arg2;

@end
