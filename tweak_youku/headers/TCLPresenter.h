//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePresenter.h"

#import "GCDAsyncSocketDelegate.h"

@class GCDAsyncSocket, NSString;

@interface TCLPresenter : BasePresenter <GCDAsyncSocketDelegate>
{
    GCDAsyncSocket *_mClinetSocket;
    NSString *_mAppPkgName;
    NSString *_mAppRemoteUrl;
    NSString *_mApkFileName;
}

@property(retain, nonatomic) NSString *mApkFileName; // @synthesize mApkFileName=_mApkFileName;
@property(retain, nonatomic) NSString *mAppRemoteUrl; // @synthesize mAppRemoteUrl=_mAppRemoteUrl;
@property(retain, nonatomic) NSString *mAppPkgName; // @synthesize mAppPkgName=_mAppPkgName;
@property(retain, nonatomic) GCDAsyncSocket *mClinetSocket; // @synthesize mClinetSocket=_mClinetSocket;
- (void).cxx_destruct;
- (id)hexStringFromString:(id)arg1;
- (_Bool)isDisconnected;
- (void)disconnect;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)openApp:(id)arg1 Succ:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3;
- (void)startInstallApp:(id)arg1 Succ:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3;
- (void)checkInstalledApp:(id)arg1 Succ:(CDUnknownBlockType)arg2 Fail:(CDUnknownBlockType)arg3;
- (void)connect:(id)arg1;
- (_Bool)isConnected;
- (void)setAppRemoteInfo:(id)arg1 apkFileName:(id)arg2 appRemoteUrl:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

