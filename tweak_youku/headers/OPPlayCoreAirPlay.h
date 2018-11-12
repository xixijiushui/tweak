//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPManagerFactory;

@interface OPPlayCoreAirPlay : NSObject
{
    OPManagerFactory *_managerFactory;
}

@property(nonatomic) __weak OPManagerFactory *managerFactory; // @synthesize managerFactory=_managerFactory;
- (void).cxx_destruct;
- (void)airPlayExtend:(id)arg1;
- (void)airPlayError;
- (void)airPlayEndPlaying;
- (void)airPlayStartPlaying;
- (void)airPlayStartConnecting;
- (void)airPlayNeedPassword;
- (void)airPlayAvailable;
- (void)receiveRequest:(id)arg1 params:(id)arg2 isSync:(_Bool *)arg3 result:(id *)arg4;
- (id)sendRequest:(id)arg1 value:(id)arg2;
- (_Bool)isSupportAirplay;
- (_Bool)isAirplayPlaying;
- (_Bool)isAirplayEnabled;
- (id)airplayDeviceInfoList;
- (id)airplayDeviceList;
- (id)usingAirplayDeviceInfo;

@end
