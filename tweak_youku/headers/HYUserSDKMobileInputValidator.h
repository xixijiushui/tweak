//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYUserSDKInputValidator.h"

@class NSString;

@interface HYUserSDKMobileInputValidator : HYUserSDKInputValidator
{
    NSString *_mobileRegex;
}

@property(copy, nonatomic) NSString *mobileRegex; // @synthesize mobileRegex=_mobileRegex;
- (void).cxx_destruct;
- (_Bool)validateInput:(id)arg1 error:(id *)arg2;

@end
