//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBAccsCallbackProtocol.h"

@class NSDictionary, NSString;

@interface YKFGlobalBizAccsReslover : NSObject <TBAccsCallbackProtocol>
{
    NSDictionary *_bizAccsHandlers;
}

+ (id)serviceID;
+ (CDUnknownBlockType)callBack;
+ (id)reslover;
+ (void)_handleAccsData:(id)arg1;
+ (_Bool)_checkCurrentPageIsValidWithPages:(id)arg1;
+ (_Bool)_checkVersionIsValid:(id)arg1;
@property(retain, nonatomic) NSDictionary *bizAccsHandlers; // @synthesize bizAccsHandlers=_bizAccsHandlers;
- (void).cxx_destruct;
- (void)registerBizHandler:(id)arg1;
- (void)bindAccsService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

