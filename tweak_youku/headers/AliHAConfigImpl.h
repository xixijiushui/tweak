//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliHAConfigProtocol.h"

@class NSDictionary, NSString;

@interface AliHAConfigImpl : NSObject <AliHAConfigProtocol>
{
    NSString *_aliHAConfigFilePath;
    NSDictionary *_performanceConfig;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *performanceConfig; // @synthesize performanceConfig=_performanceConfig;
- (void).cxx_destruct;
- (id)getAliHAConfigFilePath;
- (void)initAllConfigs;
- (id)getConfigs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
