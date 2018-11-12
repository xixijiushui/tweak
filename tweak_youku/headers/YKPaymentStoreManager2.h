//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKPaymentStoreModel;

@interface YKPaymentStoreManager2 : NSObject
{
    YKPaymentStoreModel *_stroeModel;
}

+ (id)sharedInstance;
@property(retain, nonatomic) YKPaymentStoreModel *stroeModel; // @synthesize stroeModel=_stroeModel;
- (void).cxx_destruct;
- (id)productMap;
- (void)updateProductMap:(id)arg1;
- (id)conditionForProductID:(id)arg1;
- (void)updateVerifiyForOrderKey:(id)arg1;
- (id)needVerifiedReceipts;
- (id)dataForOrderKey:(id)arg1;
- (void)cleanDataForOrderKey:(id)arg1;
- (_Bool)saveOrderKey:(id)arg1 orderID:(id)arg2;
- (_Bool)saveOrderKey:(id)arg1 originalTransaction:(id)arg2 receipt:(id)arg3;
- (_Bool)saveOrderCondition:(id)arg1 productID:(id)arg2 orderKey:(id)arg3;
- (void)removeDataForStore:(long long)arg1;
- (id)init;

@end
