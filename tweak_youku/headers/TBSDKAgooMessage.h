//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBSDKAgooMessage : NSObject
{
    _Bool _isTesting;
    unsigned int _flag;
    NSString *_identifier;
    NSString *_package;
    NSString *_body;
}

+ (_Bool)isTesting:(unsigned int)arg1;
+ (int)encryptType:(unsigned int)arg1;
+ (id)convert2Dictionary:(id)arg1;
+ (id)decryptAES128WithContent:(id)arg1 withSign:(id)arg2 withVector:(id)arg3;
+ (id)decryptWithoutSecurityGuard:(id)arg1 withEncryptType:(int)arg2;
+ (id)decryptWithSecurityGuard:(id)arg1 withEncryptType:(int)arg2;
+ (id)convertFromAccsMessage:(id)arg1 withError:(id *)arg2;
+ (id)securityGuardManager;
@property(readonly, nonatomic) _Bool isTesting; // @synthesize isTesting=_isTesting;
@property(readonly, nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *package; // @synthesize package=_package;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithId:(id)arg1 withPackage:(id)arg2 withBody:(id)arg3 withFlag:(unsigned int)arg4;

@end

