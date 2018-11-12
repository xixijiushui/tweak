//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface YKPaymentStoreModel : NSObject
{
    NSMutableDictionary *_dictionary;
}

@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)orderConditionForProductID:(id)arg1;
- (_Bool)updateVerifiyForOrderKey:(id)arg1;
- (id)needVerifiedReceipts;
- (_Bool)clearDataForOrderKey:(id)arg1;
- (id)dataForOrderKey:(id)arg1;
- (_Bool)saveOrderKey:(id)arg1 orderID:(id)arg2;
- (_Bool)saveOrderKey:(id)arg1 originalTransaction:(id)arg2 receipt:(id)arg3;
- (_Bool)saveOrderCondition:(id)arg1 productID:(id)arg2 orderKey:(id)arg3;
- (_Bool)removeDataForSize;
- (_Bool)removeDataForVerifyCount:(long long)arg1;
- (_Bool)removeDataForAgoDays:(long long)arg1;
- (id)initWithDictionary:(id)arg1;

@end
