//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RACDisposable, YKFCommunityExpViewServiceGetNameplateTipAPI;

@interface YKFFansNameplatesChecker : NSObject
{
    YKFCommunityExpViewServiceGetNameplateTipAPI *_getNameplateTipAPI;
    RACDisposable *_getNameplateTipRequestDisposable;
}

+ (id)defaultChecker;
@property(retain, nonatomic) RACDisposable *getNameplateTipRequestDisposable; // @synthesize getNameplateTipRequestDisposable=_getNameplateTipRequestDisposable;
@property(retain, nonatomic) YKFCommunityExpViewServiceGetNameplateTipAPI *getNameplateTipAPI; // @synthesize getNameplateTipAPI=_getNameplateTipAPI;
- (void).cxx_destruct;
- (void)checkFansNameplatesStatusWithCommunityId:(long long)arg1;
- (void)_showFansNameplatePageWithInfo:(id)arg1;
- (_Bool)_isEnablePage;

@end

