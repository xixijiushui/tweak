//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LTMBase64Encoding.h"

@class NSString;

@interface LTMBase64 : NSObject <LTMBase64Encoding>
{
}

+ (id)encodeString:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (id)decodeAsString:(id)arg1;
+ (id)decodeAsData:(id)arg1;
+ (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
