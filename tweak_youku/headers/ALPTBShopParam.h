//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALPJumpParam.h"

@class NSString;

@interface ALPTBShopParam : ALPJumpParam
{
    NSString *_degradeToH5Url;
    NSString *_shopId;
}

@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void)setDegradeToH5Url:(id)arg1;
- (void).cxx_destruct;
- (id)ALP_visaString;
- (id)ALP_parseToDirectString;
- (id)degradeToH5Url;
- (id)isLegalParam;
- (id)init;
- (id)initWithShopId:(id)arg1;

@end

