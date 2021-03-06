//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OPStatisticsAdapterProtocol.h"

@class NSString, OPManagerFactory, UIViewController;

@interface FashionStatisticsAdapter : NSObject <OPStatisticsAdapterProtocol>
{
    UIViewController *_controller;
    OPManagerFactory *_managerFactory;
}

+ (void)resolutionClickWithVid:(id)arg1 currentResolution:(int)arg2 selectResolution:(int)arg3;
@property(nonatomic) __weak OPManagerFactory *managerFactory; // @synthesize managerFactory=_managerFactory;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)extraStatisticsInfoWithEvent:(id)arg1 data:(id)arg2;
- (void)exposeKey:(id)arg1 data:(id)arg2;
- (void)clickKey:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

