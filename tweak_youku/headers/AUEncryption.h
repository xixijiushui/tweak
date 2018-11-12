//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AUEncryption : NSObject
{
}

+ (id)dataForHexString:(id)arg1;
+ (id)hexStringForData:(id)arg1;
+ (id)prefixOfType:(int)arg1;
+ (id)rc4ProcessData:(id)arg1 length:(int)arg2;
+ (id)rc4ProcessData:(id)arg1;
+ (id)hmacMD5WithString:(id)arg1 secret:(id)arg2;
+ (id)base64EncodeHmacMD5WithSecret:(id)arg1 header:(id)arg2 body:(id)arg3;
+ (id)base64EncodeHmacMD5WithSecret:(id)arg1 body:(id)arg2;
+ (id)md5EncryptWithString:(id)arg1;
+ (_Bool)simpleDecryptString:(id)arg1 result:(id *)arg2;
+ (_Bool)decryptWithString:(id)arg1 utdid:(id *)arg2 appkey:(id *)arg3 appName:(id *)arg4;
+ (_Bool)encryptWithUtdid:(id)arg1 appkey:(id)arg2 appName:(id)arg3 result:(id *)arg4;
+ (_Bool)decryptWithString:(id)arg1 type:(int)arg2 result:(id *)arg3;
+ (_Bool)encryptString:(id)arg1 type:(int)arg2 result:(id *)arg3;

@end

