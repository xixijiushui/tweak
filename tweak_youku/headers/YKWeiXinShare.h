//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKShareObject.h"

#import "WXApiDelegate.h"

@class NSString;

@interface YKWeiXinShare : YKShareObject <WXApiDelegate>
{
}

- (void)onReq:(id)arg1;
- (void)onResp:(id)arg1;
- (_Bool)isShowInstall;
- (id)proportionFromImage:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 application:(id)arg2;
- (_Bool)sendOpenPlatform:(int)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)sendShareInfo:(id)arg1 withOpenPlatform:(int)arg2 withCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

