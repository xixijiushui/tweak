//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UTMCUtils : NSObject
{
}

+ (id)combineJsonFromMainStr:(id)arg1 withSecondaryStr:(id)arg2;
+ (void)addDictFromJsonStr:(id)arg1 toDict:(id)arg2;
+ (SEL)utmcConfuseMethod:(id)arg1 withTail:(id)arg2;
+ (id)deleteNullForDictionary:(id)arg1;
+ (id)gzipDeflate:(id)arg1;
+ (id)gzipInflate:(id)arg1;
+ (id)stringYMDFromDate:(id)arg1;
+ (id)objectWithJSONString:(id)arg1;
+ (id)jsonStringWithDictionary:(id)arg1 prettyPrint:(_Bool)arg2;
+ (id)queryURLDictionaryUsingEncoding:(id)arg1 encodeing:(unsigned long long)arg2;
+ (id)getDictDescribe:(id)arg1 urlendcode:(_Bool)arg2;
+ (id)getAppState;
+ (id)NSData2Base64:(id)arg1;
+ (char *)newBase64Encode:(const void *)arg1 length:(unsigned long long)arg2 separateLines:(_Bool)arg3 outputLength:(unsigned int *)arg4;
+ (id)rc4:(id)arg1 length:(int)arg2;
+ (id)convertUrlEncodeFormat:(id)arg1;
+ (id)encodeURL:(id)arg1;
+ (id)md5StrForNSString:(id)arg1;
+ (id)md5StrForData:(id)arg1;
+ (id)responseOfV1Data:(id)arg1;
+ (unsigned int)nextInt;
+ (long long)millseconds;
+ (long long)timestamp;
+ (id)sha1ForString:(id)arg1;
+ (id)utSubString:(id)arg1 to:(id)arg2;
+ (_Bool)isEmpty:(id)arg1;

@end

