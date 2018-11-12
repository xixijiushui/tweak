//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HYSecurityPolicy : NSObject
{
    _Bool _validatesCertificateChain;
    _Bool _allowInvalidCertificates;
    _Bool _validatesDomainName;
    unsigned long long _SSLPinningMode;
    NSArray *_pinnedCertificates;
    NSArray *_pinnedPublicKeys;
}

+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:(unsigned long long)arg1;
+ (id)defaultPolicy;
+ (id)defaultPinnedCertificates;
@property(retain, nonatomic) NSArray *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
@property(nonatomic) _Bool validatesDomainName; // @synthesize validatesDomainName=_validatesDomainName;
@property(nonatomic) _Bool allowInvalidCertificates; // @synthesize allowInvalidCertificates=_allowInvalidCertificates;
@property(retain, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(nonatomic) _Bool validatesCertificateChain; // @synthesize validatesCertificateChain=_validatesCertificateChain;
@property(nonatomic) unsigned long long SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
- (void).cxx_destruct;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1;
- (id)init;

@end

