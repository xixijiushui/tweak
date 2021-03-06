//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDevice.h"

@class HXPresenter;

@interface HXDevice : BaseDevice
{
    HXPresenter *_mHXPresenter;
}

@property(retain, nonatomic) HXPresenter *mHXPresenter; // @synthesize mHXPresenter=_mHXPresenter;
- (void).cxx_destruct;
- (void)checkInstalledApp:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)openApp:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startInstallApp:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)isConnected;
- (void)disconnect;
- (void)writeString:(id)arg1;
- (void)createTcpSocket:(const char *)arg1 deviceInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)initWithDeviceInfo:(id)arg1;
- (void)initPresenter;

@end

