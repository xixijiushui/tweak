//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserRequest.h"

@class HYOAuthSignInfo;

@interface HYGetThirdPartySignRequest : HYBaseUserRequest
{
    HYOAuthSignInfo *_signInfo;
}

@property(retain, nonatomic) HYOAuthSignInfo *signInfo; // @synthesize signInfo=_signInfo;
- (void).cxx_destruct;
- (id)toJsonDict;
- (id)init;

@end

