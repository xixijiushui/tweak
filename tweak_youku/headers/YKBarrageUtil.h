//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKBarrageUtil : NSObject
{
}

+ (_Bool)string:(id)arg1 isEqualToString:(id)arg2;
+ (id)getApiFailDescription:(id)arg1;
+ (id)getBinaryByDecimal:(long long)arg1;
+ (double)CGFloat:(id)arg1 defaultValue:(double)arg2;
+ (double)lineSpacing:(id)arg1 portrait:(_Bool)arg2;
+ (id)combineArray:(id)arg1 usingSepertor:(id)arg2;
+ (id)URLString:(id)arg1 appendingQueryString:(id)arg2;
+ (id)textFontNameWithWeight:(id)arg1;
+ (id)velocityString:(float)arg1;
+ (id)textSizeStringWithIndex:(unsigned long long)arg1;
+ (id)percentEscapeEncodedStringFromString:(id)arg1;
+ (id)percentStringFromValue:(float)arg1;
+ (double)cutOffValue:(double)arg1 withPos:(unsigned long long)arg2;
+ (unsigned long long)fileSizeByPath:(id)arg1;
+ (_Bool)hasEnoughSpaceToStoreDataSize:(long long)arg1;
+ (id)freeDiskSpaceReadable;
+ (id)freeDiskSpace;
+ (id)generateOSSImageURL:(id)arg1 andSize:(double)arg2;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (id)offlineDataStoresDirectory;
+ (id)tmpFolderPathForUnzippedData;
+ (id)subfolderPathInDocumentsDirectory:(id)arg1;
+ (id)subfolderPathInTempDirectory:(id)arg1;
+ (id)subfolderPathInCacheDirectory:(id)arg1;
+ (id)documentsDirectory;
+ (id)cachesDirectory;
+ (void)createFolderInPath:(id)arg1;
+ (id)subfolderPath:(id)arg1 inDirectory:(id)arg2;
+ (id)buildQueryStringForPayload:(id)arg1;
+ (id)buildParametersForPayload:(id)arg1;
+ (id)parametersFromQueryStr:(id)arg1;
+ (id)jsonStringFromDictionary:(id)arg1;
+ (id)jsonStringFromObject:(id)arg1;
+ (id)parseArrayFromJsonString:(id)arg1;
+ (id)parseDictFromJsonString:(id)arg1;
+ (id)parseJSONObjectFromString:(id)arg1 error:(id *)arg2;
+ (id)parseJSONData:(id)arg1 error:(id *)arg2;
+ (struct CGRect)mainScreenPortraitBounds;
+ (id)getRGBDictionaryByColor:(id)arg1;
+ (id)createNonInterpolatedUIImageFormCIImage:(id)arg1 withSize:(double)arg2;
+ (id)QRimageWithURLString:(id)arg1 Size:(struct CGSize)arg2;
+ (unsigned long long)getColorCode:(id)arg1;
+ (id)getHexStringByColor:(id)arg1;
+ (id)colorForValue:(long long)arg1;
+ (id)colorWithHexRGB:(id)arg1;
+ (id)imageNamedInFramework:(id)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (id)HMacHashWithKeyStr:(id)arg1 sourceStr:(id)arg2;
+ (id)md5Hash:(id)arg1;
+ (id)md5Hash:(id)arg1 withSalt:(id)arg2;
+ (id)md5:(id)arg1;

@end

