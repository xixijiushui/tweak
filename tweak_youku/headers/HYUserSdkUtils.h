//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HYUserSdkUtils : NSObject
{
}

+ (id)formattedStringFromDate:(id)arg1;
+ (id)fieldForLoginzfb;
+ (id)getTopViewController;
+ (id)getUIWindow;
+ (void)tLogOfMtopModule:(long long)arg1 content:(id)arg2 fileInfo:(id)arg3;
+ (void)tLog:(long long)arg1 content:(id)arg2 fileInfo:(id)arg3;
+ (id)stringWithJSONObject:(id)arg1;
+ (id)dictionaryFromJSONString:(id)arg1;
+ (id)urlStringByAddingQueryDictionary:(id)arg1 urlString:(id)arg2;
+ (id)buildPostParametersForPayload:(id)arg1;
+ (id)cookieStorageString;
+ (_Bool)isBlankString:(id)arg1;
+ (id)parametersFromQueryStr:(id)arg1;
+ (id)decodeURL:(id)arg1;
+ (id)filePathInCachesForFileName:(id)arg1;
+ (id)filePathInDocumentsForFileName:(id)arg1;
+ (id)documentsDirectory;
+ (id)cachesDirectory;
+ (id)subStringForString:(id)arg1 andFrom:(unsigned long long)arg2 andLength:(unsigned long long)arg3;
+ (id)percentEscapeEncodedStringFromString:(id)arg1;
+ (id)getDateFromTimestampByMillisecond:(id)arg1;
+ (id)getDateFromTimestamp:(id)arg1;
+ (id)getTimestampByMillisecondFromDate:(id)arg1;
+ (id)getCurrentTimestampByMillisecond;
+ (id)md5Hash:(id)arg1;
+ (id)md5Hash:(id)arg1 withSalt:(id)arg2;
+ (id)md5:(id)arg1;

@end
