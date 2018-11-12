//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSCardHeaderItem.h"

@class NSDictionary, NSString;

@interface YKChannelHeaderItem : CMSCardHeaderItem
{
    _Bool _isAd;
    _Bool _isImg;
    _Bool _isSSubscribe;
    _Bool _isH_V;
    _Bool _isRecommandStar;
    NSDictionary *_styleConfig;
    NSString *_iconUrl;
    NSString *_starID;
    NSString *_cmsServiceType;
    NSString *_context;
}

@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *cmsServiceType; // @synthesize cmsServiceType=_cmsServiceType;
@property(retain, nonatomic) NSString *starID; // @synthesize starID=_starID;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) _Bool isRecommandStar; // @synthesize isRecommandStar=_isRecommandStar;
@property(retain, nonatomic) NSDictionary *styleConfig; // @synthesize styleConfig=_styleConfig;
@property(nonatomic) _Bool isH_V; // @synthesize isH_V=_isH_V;
@property(nonatomic) _Bool isSSubscribe; // @synthesize isSSubscribe=_isSSubscribe;
@property(nonatomic) _Bool isImg; // @synthesize isImg=_isImg;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
- (void).cxx_destruct;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end

