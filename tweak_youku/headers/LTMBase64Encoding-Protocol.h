//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol LTMBase64Encoding <NSObject>
+ (NSString *)encodeString:(NSString *)arg1;
+ (NSString *)encodeData:(NSData *)arg1;
+ (NSString *)decodeAsString:(NSString *)arg1;
+ (NSData *)decodeAsData:(NSString *)arg1;
@end
