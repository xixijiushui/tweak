//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YKPersonalCenterServiceManager : NSObject
{
    NSMutableArray *_dataConfig;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *dataConfig; // @synthesize dataConfig=_dataConfig;
- (void).cxx_destruct;
- (id)serviceItemFromArray:(id)arg1;
- (void)configServiceItem:(id)arg1;
- (id)init;
- (id)allDataConfigs;

@end

