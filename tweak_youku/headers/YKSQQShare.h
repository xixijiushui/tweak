//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSShareObject.h"

#import "QQApiInterfaceDelegate.h"

@class NSString, TencentOAuth;

@interface YKSQQShare : YKSShareObject <QQApiInterfaceDelegate>
{
    TencentOAuth *_tencentOAuth;
}

@property(retain, nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (_Bool)isInstall;
- (_Bool)isShowInstall;
- (_Bool)handleOpenURL:(id)arg1 application:(id)arg2;
- (_Bool)sendOpenPlatform:(int)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)sendShareInfo:(id)arg1 withOpenPlatform:(int)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

