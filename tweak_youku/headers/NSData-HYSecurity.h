//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (HYSecurity)
- (id)hyAesDecryptWithSecretString:(id)arg1 ivString:(id)arg2;
- (id)hyStringForAesDecryptWithSecretString:(id)arg1 ivString:(id)arg2;
- (id)hyAesDecryptWithSecretData:(id)arg1 ivData:(id)arg2;
- (id)hyStringForAesDecryptWithSecretData:(id)arg1 ivData:(id)arg2;
- (id)hyAesEncryptWithSecretData:(id)arg1 ivData:(id)arg2;
- (id)hyAesEncryptAndBase64EncodingWithSecretData:(id)arg1 ivData:(id)arg2;
- (id)hyAesEncryptAndBase64EncodingWithSecretString:(id)arg1 ivString:(id)arg2;
- (id)hyAesEncryptWithSecretString:(id)arg1 ivString:(id)arg2;
@end
