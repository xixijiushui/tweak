//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSString;

@interface WVLocation : WVDynamicHandler <CLLocationManagerDelegate>
{
    _Bool _isQuerying;
    _Bool _isHighAcuracy;
    _Bool _isGetAddress;
    CLLocationManager *_locationManager;
    CLLocation *_location;
    id <WVBridgeCallbackContext> _callbackContext;
}

+ (id)getErrorDescription:(long long)arg1;
+ (void)searchLocation:(id)arg1 withWVBridgeContext:(id)arg2;
+ (unsigned long long)instanceScope;
@property(retain, nonatomic) id <WVBridgeCallbackContext> callbackContext; // @synthesize callbackContext=_callbackContext;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool isGetAddress; // @synthesize isGetAddress=_isGetAddress;
@property(nonatomic) _Bool isHighAcuracy; // @synthesize isHighAcuracy=_isHighAcuracy;
@property(nonatomic) _Bool isQuerying; // @synthesize isQuerying=_isQuerying;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)callback:(id)arg1 withResult:(id)arg2;
- (id)formatLocationResponseDic:(id)arg1;
- (void)searchAddressAndReturn:(id)arg1 withExtrData:(id)arg2;
- (void)locationManagerDidUpdate:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)getLocation:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)clearStatus;
- (void)releaseInstance;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

