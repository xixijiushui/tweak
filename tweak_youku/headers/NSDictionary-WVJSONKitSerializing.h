//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (WVJSONKitSerializing)
- (id)wvDictionaryValue:(id)arg1;
- (id)wvArrayValue:(id)arg1;
- (id)wvStringValue:(id)arg1 default:(id)arg2;
- (id)wvStringValue:(id)arg1;
- (double)wvDoubleValue:(id)arg1 default:(double)arg2;
- (double)wvDoubleValue:(id)arg1;
- (double)wvFloatValue:(id)arg1 default:(double)arg2;
- (double)wvFloatValue:(id)arg1;
- (unsigned long long)wvUnsignedLongLongValue:(id)arg1 default:(unsigned long long)arg2;
- (unsigned long long)wvUnsignedLongLongValue:(id)arg1;
- (long long)wvLongLongValue:(id)arg1 default:(long long)arg2;
- (long long)wvLongLongValue:(id)arg1;
- (unsigned long long)wvUnsignedIntegerValue:(id)arg1 default:(unsigned long long)arg2;
- (unsigned long long)wvUnsignedIntegerValue:(id)arg1;
- (long long)wvIntegerValue:(id)arg1 default:(long long)arg2;
- (long long)wvIntegerValue:(id)arg1;
- (BOOL)wvTristateValue:(id)arg1;
- (_Bool)wvBoolValue:(id)arg1 default:(_Bool)arg2;
- (_Bool)wvBoolValue:(id)arg1;
- (id)wvJSONData;
- (id)wvJSONString;
@end
