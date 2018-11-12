//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ClientObject : NSObject
{
    int _port;
    int _deviceFrm;
    unsigned long long _type;
    NSString *_name;
    NSString *_uuid;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_ip;
    NSString *_rcsPort;
    NSString *_modelVersion;
    NSString *_dlnaPort;
    NSString *_devDesUrl;
    NSString *_dopAbilities;
}

+ (int)typeOf:(unsigned long long)arg1;
+ (unsigned long long)typeObjectFrom:(int)arg1;
@property(nonatomic) int deviceFrm; // @synthesize deviceFrm=_deviceFrm;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *dopAbilities; // @synthesize dopAbilities=_dopAbilities;
@property(retain, nonatomic) NSString *devDesUrl; // @synthesize devDesUrl=_devDesUrl;
@property(retain, nonatomic) NSString *dlnaPort; // @synthesize dlnaPort=_dlnaPort;
@property(retain, nonatomic) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(retain, nonatomic) NSString *rcsPort; // @synthesize rcsPort=_rcsPort;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 withType:(unsigned long long)arg2;
- (id)init;

@end

