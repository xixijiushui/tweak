//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HYRecommendAccountPartnerInfo, HYRecommendAccountProfileInfo, HYRecommendAccountUserInfo, NSString;

@interface HYRecommendAccountInfo : NSObject
{
    HYRecommendAccountPartnerInfo *_partnerInfo;
    HYRecommendAccountProfileInfo *_profileInfo;
    HYRecommendAccountUserInfo *_userInfo;
    NSString *_userKey;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(copy, nonatomic) NSString *userKey; // @synthesize userKey=_userKey;
@property(retain, nonatomic) HYRecommendAccountUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) HYRecommendAccountProfileInfo *profileInfo; // @synthesize profileInfo=_profileInfo;
@property(retain, nonatomic) HYRecommendAccountPartnerInfo *partnerInfo; // @synthesize partnerInfo=_partnerInfo;
- (void).cxx_destruct;

@end

