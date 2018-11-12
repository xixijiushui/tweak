//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVHDeviceInfo : NSObject
{
    _Bool _isDetectedDev;
    _Bool _isDetectedDevWithName;
    _Bool _isMdnsDev;
    _Bool _isConnected;
    int _rcsPort;
    int _airplayPort;
    NSString *_deviceIP;
    NSString *_deviceName;
    NSString *_deviceID;
    NSString *_deviceModel;
    NSString *_deviceOS;
}

@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) _Bool isMdnsDev; // @synthesize isMdnsDev=_isMdnsDev;
@property(nonatomic) _Bool isDetectedDevWithName; // @synthesize isDetectedDevWithName=_isDetectedDevWithName;
@property(nonatomic) _Bool isDetectedDev; // @synthesize isDetectedDev=_isDetectedDev;
@property(nonatomic) int airplayPort; // @synthesize airplayPort=_airplayPort;
@property(nonatomic) int rcsPort; // @synthesize rcsPort=_rcsPort;
@property(copy, nonatomic) NSString *deviceOS; // @synthesize deviceOS=_deviceOS;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceIP; // @synthesize deviceIP=_deviceIP;
- (void).cxx_destruct;
- (id)toDictionaryValue;
- (id)initWithDetectedIPAndNameDeviceID:(id)arg1 name:(id)arg2 deviceID:(id)arg3;
- (id)initWithDetectedIPAndName:(id)arg1 name:(id)arg2;
- (id)initWithDetectedIP:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNetService:(id)arg1;

@end
