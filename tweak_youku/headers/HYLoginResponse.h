//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYUserSessionResponse.h"

@class HYMobileBindingInfo;

@interface HYLoginResponse : HYUserSessionResponse
{
    _Bool _isAuth;
    _Bool _bindMobileAdvice;
    HYMobileBindingInfo *_info;
}

@property(retain, nonatomic) HYMobileBindingInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool bindMobileAdvice; // @synthesize bindMobileAdvice=_bindMobileAdvice;
@property(nonatomic) _Bool isAuth; // @synthesize isAuth=_isAuth;
- (void).cxx_destruct;
- (id)buildErrorWithCode:(long long)arg1 message:(id)arg2 contentsDict:(id)arg3;
- (void)mergeFromContentsDict:(id)arg1;

@end

