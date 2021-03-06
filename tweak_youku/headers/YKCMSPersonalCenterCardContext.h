//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSCardContext.h"

#import "NSCopying.h"

@class YKPersonalCenterCardModel;

@interface YKCMSPersonalCenterCardContext : CMSCardContext <NSCopying>
{
    long long _cmsCardType;
    YKPersonalCenterCardModel *_cardModel;
}

@property(retain, nonatomic) YKPersonalCenterCardModel *cardModel; // @synthesize cardModel=_cardModel;
@property(nonatomic) long long cmsCardType; // @synthesize cmsCardType=_cmsCardType;
- (void).cxx_destruct;
- (id)parseClassName:(long long)arg1;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end

