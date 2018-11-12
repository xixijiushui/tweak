//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface LFAModel : NSObject
{
    NSDictionary *_headerDic;
    NSDictionary *_dispatchParamsDic;
    NSString *_play_types;
    NSString *_video_ctype;
    NSString *_playsdk_version;
    NSString *_play_decoding;
    NSString *_package;
    NSString *_intrIP;
    NSString *_isp2p;
    NSString *_video_format;
    NSString *_cpsPid;
}

@property(readonly, nonatomic) NSString *cpsPid; // @synthesize cpsPid=_cpsPid;
@property(readonly, nonatomic) NSString *video_format; // @synthesize video_format=_video_format;
@property(readonly, nonatomic) NSString *isp2p; // @synthesize isp2p=_isp2p;
@property(readonly, nonatomic) NSString *intrIP; // @synthesize intrIP=_intrIP;
@property(readonly, nonatomic) NSString *package; // @synthesize package=_package;
@property(readonly, nonatomic) NSString *play_decoding; // @synthesize play_decoding=_play_decoding;
@property(readonly, nonatomic) NSString *playsdk_version; // @synthesize playsdk_version=_playsdk_version;
@property(readonly, nonatomic) NSString *video_ctype; // @synthesize video_ctype=_video_ctype;
@property(readonly, nonatomic) NSString *play_types; // @synthesize play_types=_play_types;
@property(retain, nonatomic) NSDictionary *dispatchParamsDic; // @synthesize dispatchParamsDic=_dispatchParamsDic;
@property(retain, nonatomic) NSDictionary *headerDic; // @synthesize headerDic=_headerDic;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sessionid;
- (id)p_createSessionID;
- (id)init;

@end

