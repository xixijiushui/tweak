//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserResponse.h"

@class NSString;

@interface HYThirdPartyBindExchangeResponse : HYBaseUserResponse
{
    NSString *_ytid;
    NSString *_authCode;
}

@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
- (void).cxx_destruct;
- (void)mergeFromContentsDict:(id)arg1;

@end

