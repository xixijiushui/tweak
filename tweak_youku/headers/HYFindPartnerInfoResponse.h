//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseUserResponse.h"

@class HYThirdPartyBindingInfo;

@interface HYFindPartnerInfoResponse : HYBaseUserResponse
{
    HYThirdPartyBindingInfo *_bindingInfo;
}

@property(retain, nonatomic) HYThirdPartyBindingInfo *bindingInfo; // @synthesize bindingInfo=_bindingInfo;
- (void).cxx_destruct;
- (void)mergeFromContentsDict:(id)arg1;

@end
