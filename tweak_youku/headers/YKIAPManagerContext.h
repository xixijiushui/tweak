//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKMemberPaymentManagerDelegate.h"

@class NSMutableDictionary, NSString;

@interface YKIAPManagerContext : NSObject <YKMemberPaymentManagerDelegate>
{
    NSMutableDictionary *_purchaseState;
}

+ (id)resultFromTransactionParams:(id)arg1 state:(id)arg2 message:(id)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *purchaseState; // @synthesize purchaseState=_purchaseState;
- (void).cxx_destruct;
- (void)pollingOrderId:(id)arg1;
- (void)ykMemberPaymentRestore;
- (void)ykMemberPaymentFailed:(id)arg1;
- (void)ykMemberPaymentSuccess;
- (void)ykMemberPaymentDidStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

