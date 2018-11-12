//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NlsDeviceInfo : NSObject
{
    NSString *_device_type;
    NSString *_device_id;
    NSString *_system_locale;
    NSString *_timezone;
    NSString *_device_uuid;
    NSString *_device_imei;
    NSString *_device_mac;
    NSString *_device_brand;
    NSString *_device_model;
    NSString *_os_type;
    NSString *_os_version;
    NSString *_network_type;
}

@property(copy, nonatomic) NSString *network_type; // @synthesize network_type=_network_type;
@property(copy, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(copy, nonatomic) NSString *os_type; // @synthesize os_type=_os_type;
@property(copy, nonatomic) NSString *device_model; // @synthesize device_model=_device_model;
@property(copy, nonatomic) NSString *device_brand; // @synthesize device_brand=_device_brand;
@property(copy, nonatomic) NSString *device_mac; // @synthesize device_mac=_device_mac;
@property(copy, nonatomic) NSString *device_imei; // @synthesize device_imei=_device_imei;
@property(copy, nonatomic) NSString *device_uuid; // @synthesize device_uuid=_device_uuid;
@property(copy, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(copy, nonatomic) NSString *system_locale; // @synthesize system_locale=_system_locale;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(copy, nonatomic) NSString *device_type; // @synthesize device_type=_device_type;
- (void).cxx_destruct;
- (id)init;

@end

