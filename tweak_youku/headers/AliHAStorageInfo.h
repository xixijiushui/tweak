//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliHAStorageInfo : NSObject
{
    unsigned long long _maxStorage;
    unsigned long long _freeStorage;
    unsigned long long _readSpeed;
    unsigned long long _writeSpeed;
    unsigned long long _deviceLevel;
}

@property(nonatomic) unsigned long long deviceLevel; // @synthesize deviceLevel=_deviceLevel;
@property(nonatomic) unsigned long long writeSpeed; // @synthesize writeSpeed=_writeSpeed;
@property(nonatomic) unsigned long long readSpeed; // @synthesize readSpeed=_readSpeed;
@property(nonatomic) unsigned long long freeStorage; // @synthesize freeStorage=_freeStorage;
@property(nonatomic) unsigned long long maxStorage; // @synthesize maxStorage=_maxStorage;

@end

