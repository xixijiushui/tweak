//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HYPreRegAuthCodeInfo : NSObject
{
    NSString *_preRegAuthCode;
    NSString *_regionCode;
    NSString *_passport;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(retain, nonatomic) NSString *passport; // @synthesize passport=_passport;
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(retain, nonatomic) NSString *preRegAuthCode; // @synthesize preRegAuthCode=_preRegAuthCode;
- (void).cxx_destruct;

@end
