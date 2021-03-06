//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HYUserSDKCountryEntity : NSObject
{
    NSString *_countryName;
    NSString *_dialCode;
    NSString *_regionCode;
    NSString *_mobileRegex;
    unsigned long long _mobileMaxLength;
}

@property(nonatomic) unsigned long long mobileMaxLength; // @synthesize mobileMaxLength=_mobileMaxLength;
@property(retain, nonatomic) NSString *mobileRegex; // @synthesize mobileRegex=_mobileRegex;
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(retain, nonatomic) NSString *dialCode; // @synthesize dialCode=_dialCode;
@property(retain, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCountryName:(id)arg1 dialCode:(id)arg2 regionCode:(id)arg3 mobileMaxLength:(unsigned long long)arg4 mobileRegex:(id)arg5;

@end

