//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserResponse.h"

@class HYUser, HYUserTokenSet;

@interface HYUserSessionResponse : HYBaseUserResponse
{
    HYUser *_user;
    HYUserTokenSet *_tokenSet;
}

@property(retain, nonatomic) HYUserTokenSet *tokenSet; // @synthesize tokenSet=_tokenSet;
@property(retain, nonatomic) HYUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)decrptPersistToken:(id)arg1;
- (void)mergeFromContentsDict:(id)arg1;

@end

