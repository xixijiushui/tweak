//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BeforeFilter.h"

@class NSString;

@interface SetupRequestBeforeFilter : NSObject <BeforeFilter>
{
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_model;
    NSString *_ua;
}

+ (id)getCurrentDeviceModel;
@property(retain, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
- (void).cxx_destruct;
- (int)wuaTypeMapRealFlag:(int)arg1;
- (id)generateWUAWithRequest:(id)arg1 appkey:(id)arg2 timestamp:(id)arg3;
- (void)configSwitch:(id)arg1;
- (void)setup:(id)arg1;
- (void)handle:(id)arg1 result:(id)arg2;
- (id)getName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

