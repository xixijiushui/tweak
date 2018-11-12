//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class NSString, SKProductsRequest;

@interface LFInAppPurchasesManager : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    SKProductsRequest *_request;
    double _price;
    CDUnknownBlockType _productsLoadedSuccessBlock;
    CDUnknownBlockType _productsLoadedFailedBlock;
    CDUnknownBlockType _buySuccessBlock;
    CDUnknownBlockType _buyFailedBlock;
    CDUnknownBlockType _rechargeBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType rechargeBlock; // @synthesize rechargeBlock=_rechargeBlock;
@property(copy, nonatomic) CDUnknownBlockType buyFailedBlock; // @synthesize buyFailedBlock=_buyFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType buySuccessBlock; // @synthesize buySuccessBlock=_buySuccessBlock;
@property(copy, nonatomic) CDUnknownBlockType productsLoadedFailedBlock; // @synthesize productsLoadedFailedBlock=_productsLoadedFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType productsLoadedSuccessBlock; // @synthesize productsLoadedSuccessBlock=_productsLoadedSuccessBlock;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) SKProductsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)getProductPrice:(id)arg1;
- (void)lf_romoveTransactionObserver;
- (void)lf_addTransactionObserver;
- (void)reInvleRechargeApi:(id)arg1;
- (void)validateReceiptProductId:(id)arg1 orderId:(id)arg2 transactionId:(id)arg3 receiptInfo:(id)arg4;
- (void)recordTransaction:(id)arg1 rechargeBlock:(CDUnknownBlockType)arg2;
- (void)restoreTransaction:(id)arg1;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)lf_buyProductIdentifier:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)lf_requestAppPurchasesProducts:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
