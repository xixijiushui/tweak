//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDevice.h"

@class XMPresenter;

@interface XMDevice : BaseDevice
{
    XMPresenter *_mXMPresenter;
}

@property(retain, nonatomic) XMPresenter *mXMPresenter; // @synthesize mXMPresenter=_mXMPresenter;
- (void).cxx_destruct;
- (void)openApp:(id)arg1 Succ:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3;
- (void)startInstallApp:(id)arg1 verifyCode:(id)arg2 Succ:(CDUnknownBlockType)arg3 Fail:(CDUnknownBlockType)arg4;
- (void)checkInstalledApp:(id)arg1 Succ:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3;
- (void)doAuthorize:(id)arg1 Succ:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3;
- (void)initVerifyCode:(id)arg1 Succ:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3;
- (void)initWithDeviceInfo:(id)arg1;
- (void)initPresenter;

@end

