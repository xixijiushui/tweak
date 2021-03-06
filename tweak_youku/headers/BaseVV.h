//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface BaseVV : NSObject
{
    NSMutableDictionary *mConstantParams;
    NSDictionary *_commonParams;
    NSString *_videoid;
    NSString *_sessionid;
    NSDictionary *_sidDic;
    NSString *_playtype;
    NSString *_userid;
    long long _videoQualityVV;
    unsigned long long _decodeMethod;
    NSString *_vvreason;
    NSString *_LUCSessionID;
    NSString *_psid;
    long long _videoOrientation;
    NSString *_playlistid;
    NSString *_autoplay;
    NSString *_liteplayer;
}

@property(retain, nonatomic) NSString *liteplayer; // @synthesize liteplayer=_liteplayer;
@property(retain, nonatomic) NSString *autoplay; // @synthesize autoplay=_autoplay;
@property(retain, nonatomic) NSString *playlistid; // @synthesize playlistid=_playlistid;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(retain, nonatomic) NSString *psid; // @synthesize psid=_psid;
@property(retain, nonatomic) NSString *LUCSessionID; // @synthesize LUCSessionID=_LUCSessionID;
@property(retain, nonatomic) NSString *vvreason; // @synthesize vvreason=_vvreason;
@property(nonatomic) unsigned long long decodeMethod; // @synthesize decodeMethod=_decodeMethod;
@property(nonatomic) long long videoQualityVV; // @synthesize videoQualityVV=_videoQualityVV;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(retain, nonatomic) NSString *playtype; // @synthesize playtype=_playtype;
@property(retain, nonatomic) NSDictionary *sidDic; // @synthesize sidDic=_sidDic;
@property(retain, nonatomic) NSString *sessionid; // @synthesize sessionid=_sessionid;
@property(retain, nonatomic) NSString *videoid; // @synthesize videoid=_videoid;
@property(retain, nonatomic) NSDictionary *commonParams; // @synthesize commonParams=_commonParams;
- (void).cxx_destruct;
- (void)dispatch;
- (id)initWithParamsDic:(id)arg1;

@end

