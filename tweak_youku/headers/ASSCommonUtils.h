//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ASSCommonUtils : NSObject
{
}

+ (id)encodeBase64:(id)arg1;
+ (id)formatDataForServer:(id)arg1;
+ (id)gzipData:(id)arg1;
+ (id)encodeBase64Data:(id)arg1;
+ (id)gzipAndBase64String:(id)arg1;
+ (id)decryptStringWithBASE64andAES:(id)arg1;
+ (id)encryptWithAESandBASE64:(id)arg1;
+ (id)md5FromString:(id)arg1;
+ (id)sha1FromString:(id)arg1;
+ (id)stringFromSortedDictionary:(id)arg1;
+ (_Bool)isBlankString:(id)arg1;
+ (id)getValueFromProperty:(id)arg1;
+ (id)getValueFromDictionary:(id)arg1 withKey:(id)arg2 defaultValue:(id)arg3;

@end

