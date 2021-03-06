//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPPlugin;

@interface OPPaymentVideoHelper : NSObject
{
    _Bool _isRequesting;
    OPPlugin *_plugin;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)exposeCoupons;
- (void)exposeHandler:(id)arg1;
- (void)demandVideoWithShowId:(id)arg1 couponCode:(id)arg2;
- (void)useCouponsCode:(id)arg1 showId:(id)arg2 params:(id)arg3;
- (void)statisticsPaymentEvent:(id)arg1;
- (id)handlerPaymentParamter:(id)arg1;
- (void)paymentEventHandler:(id)arg1;
- (void)replayVideo;
- (long long)upgradeResponseDictionary:(id)arg1;
- (id)URLFromDictionary:(id)arg1;

@end

