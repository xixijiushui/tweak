//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserRequest.h"

@class NSDictionary;

@interface HYVerifyAuthSignRequest : HYBaseUserRequest
{
    NSDictionary *_authSignDict;
}

@property(retain, nonatomic) NSDictionary *authSignDict; // @synthesize authSignDict=_authSignDict;
- (void).cxx_destruct;
- (id)toJsonDict;
- (id)init;

@end

