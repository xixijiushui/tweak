//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface DYKH5ActionModel : NSObject
{
    _Bool _isGameH5;
    _Bool _subscribeStatus;
    _Bool _needInitBaiChuan;
    long long _actionType;
    NSString *_shareType;
    NSURL *_sourceURL;
    NSDictionary *_params;
    NSString *_sid;
    NSString *_aid;
    NSString *_vid;
    NSString *_uid;
    NSString *_url;
    long long _webNeedOrientation;
    NSString *_itemId;
    NSString *_taoKePId;
    NSString *_taoKeUnionId;
    NSString *_mobileId;
    NSString *_itunesId;
}

+ (_Bool)isTaoPiaoPiaoWithURLString:(id)arg1;
+ (id)encodeStringFromString:(id)arg1;
+ (id)appIDFromITunesURL:(id)arg1;
+ (id)parseWithURL:(id)arg1;
@property(readonly, copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(readonly, copy, nonatomic) NSString *mobileId; // @synthesize mobileId=_mobileId;
@property(readonly, copy, nonatomic) NSString *taoKeUnionId; // @synthesize taoKeUnionId=_taoKeUnionId;
@property(readonly, copy, nonatomic) NSString *taoKePId; // @synthesize taoKePId=_taoKePId;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, nonatomic, getter=isNeedInitBaiChuan) _Bool needInitBaiChuan; // @synthesize needInitBaiChuan=_needInitBaiChuan;
@property(readonly, nonatomic) long long webNeedOrientation; // @synthesize webNeedOrientation=_webNeedOrientation;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool subscribeStatus; // @synthesize subscribeStatus=_subscribeStatus;
@property(readonly, copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(readonly, copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(readonly, copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(readonly, nonatomic) _Bool isGameH5; // @synthesize isGameH5=_isGameH5;
@property(readonly, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)setNeedInitBaiChuan:(_Bool)arg1;
- (void)setWebNeedOrientation:(long long)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setItunesId:(id)arg1;
- (void)setMobileId:(id)arg1;
- (void)setTaoKeUnionId:(id)arg1;
- (void)setTaoKePId:(id)arg1;
- (void)setItemId:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setSubscribeStatus:(_Bool)arg1;
- (void)setUid:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setVid:(id)arg1;
- (void)setSid:(id)arg1;
- (void)setIsGameH5:(_Bool)arg1;
- (void)setActionType:(long long)arg1;
- (void)setParams:(id)arg1;

@end

