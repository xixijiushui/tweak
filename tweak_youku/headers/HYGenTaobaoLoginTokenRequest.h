//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserRequest.h"

@class NSString;

@interface HYGenTaobaoLoginTokenRequest : HYBaseUserRequest
{
    NSString *_yktk;
    NSString *_sessionToken;
    NSString *_ytid;
}

@property(copy, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *yktk; // @synthesize yktk=_yktk;
- (void).cxx_destruct;
- (id)toJsonDict;
- (id)init;

@end

