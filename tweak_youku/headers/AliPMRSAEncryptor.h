//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliPMRSAEncryptor : NSObject
{
}

+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;

@end

