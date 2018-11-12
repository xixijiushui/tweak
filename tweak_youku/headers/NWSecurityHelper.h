//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NWSecurityHelper : NSObject
{
}

+ (id)sign:(id)arg1;
+ (id)getAuthSign;
+ (id)getAuthOperator;
+ (id)dynamicDataStoreGetData:(id)arg1;
+ (int)dynamicDataStorePutData:(id)arg1 forKey:(id)arg2;
+ (id)staticBinarySafeDecryptNoB64:(long long)arg1 forKey:(id)arg2 forNeedProcessValue:(id)arg3 authCode:(id)arg4;
+ (id)signWithSecurityGuard:(id)arg1;
+ (id)getAppKey:(id)arg1 authCode:(id)arg2;
+ (SEL)confuseMethod:(id)arg1 withTail:(id)arg2;
+ (id)createObject:(id)arg1;
+ (id)getSecurityGuardIntance;

@end

