//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface AdvFlowModel : NSObject
{
    NSString *_pageName;
    NSString *_reqid;
    NSString *_title;
    NSString *_logoPath;
    long long _advFlowSourceType;
    NSString *_coverImageUrl;
    NSString *_adVideoId;
    long long _adVideoTotalTime;
    long long _targetType;
    NSString *_targetUrl;
    NSArray *_clickStatisticsUrls;
    NSArray *_clickStatisticsUrlSDKs;
    NSArray *_showStatisticsUrls;
    NSArray *_showStatisticsUrlSDKs;
    NSArray *_playStatisticsUrls;
    NSArray *_playStatisticsUrlSDKs;
    NSArray *_playEndStatisticsUrls;
    NSArray *_playEndStatisticsUrlSDKs;
    NSString *_rs;
    NSString *_p;
    NSString *_sikp;
    NSString *_ver;
    NSString *_ps;
    NSArray *_val;
    NSString *_vc;
    NSString *_h;
    NSString *_vsc;
    NSString *_cuu;
    NSString *_vn;
    NSString *_vp;
    NSString *_w;
    NSString *_ie;
    NSString *_lg;
    NSString *_brs;
    NSString *_prv;
    NSString *_vid;
    NSString *_ti;
    NSString *_rst;
    NSString *_vt;
    NSString *_rid;
    NSString *_pst;
    NSString *_at;
    NSDictionary *_shu;
    NSDictionary *_sur;
    NSDictionary *_sup;
    NSDictionary *_su;
    NSDictionary *_json;
    NSMutableDictionary *_args;
}

+ (id)parseWithDictionary:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *args; // @synthesize args=_args;
@property(retain, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(retain, nonatomic) NSDictionary *su; // @synthesize su=_su;
@property(retain, nonatomic) NSDictionary *sup; // @synthesize sup=_sup;
@property(retain, nonatomic) NSDictionary *sur; // @synthesize sur=_sur;
@property(retain, nonatomic) NSDictionary *shu; // @synthesize shu=_shu;
@property(copy, nonatomic) NSString *at; // @synthesize at=_at;
@property(copy, nonatomic) NSString *pst; // @synthesize pst=_pst;
@property(copy, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(copy, nonatomic) NSString *vt; // @synthesize vt=_vt;
@property(copy, nonatomic) NSString *rst; // @synthesize rst=_rst;
@property(copy, nonatomic) NSString *ti; // @synthesize ti=_ti;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *prv; // @synthesize prv=_prv;
@property(copy, nonatomic) NSString *brs; // @synthesize brs=_brs;
@property(copy, nonatomic) NSString *lg; // @synthesize lg=_lg;
@property(copy, nonatomic) NSString *ie; // @synthesize ie=_ie;
@property(copy, nonatomic) NSString *w; // @synthesize w=_w;
@property(copy, nonatomic) NSString *vp; // @synthesize vp=_vp;
@property(copy, nonatomic) NSString *vn; // @synthesize vn=_vn;
@property(copy, nonatomic) NSString *cuu; // @synthesize cuu=_cuu;
@property(copy, nonatomic) NSString *vsc; // @synthesize vsc=_vsc;
@property(copy, nonatomic) NSString *h; // @synthesize h=_h;
@property(copy, nonatomic) NSString *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSArray *val; // @synthesize val=_val;
@property(copy, nonatomic) NSString *ps; // @synthesize ps=_ps;
@property(copy, nonatomic) NSString *ver; // @synthesize ver=_ver;
@property(copy, nonatomic) NSString *sikp; // @synthesize sikp=_sikp;
@property(copy, nonatomic) NSString *p; // @synthesize p=_p;
@property(copy, nonatomic) NSString *rs; // @synthesize rs=_rs;
@property(retain, nonatomic) NSArray *playEndStatisticsUrlSDKs; // @synthesize playEndStatisticsUrlSDKs=_playEndStatisticsUrlSDKs;
@property(retain, nonatomic) NSArray *playEndStatisticsUrls; // @synthesize playEndStatisticsUrls=_playEndStatisticsUrls;
@property(retain, nonatomic) NSArray *playStatisticsUrlSDKs; // @synthesize playStatisticsUrlSDKs=_playStatisticsUrlSDKs;
@property(retain, nonatomic) NSArray *playStatisticsUrls; // @synthesize playStatisticsUrls=_playStatisticsUrls;
@property(retain, nonatomic) NSArray *showStatisticsUrlSDKs; // @synthesize showStatisticsUrlSDKs=_showStatisticsUrlSDKs;
@property(retain, nonatomic) NSArray *showStatisticsUrls; // @synthesize showStatisticsUrls=_showStatisticsUrls;
@property(retain, nonatomic) NSArray *clickStatisticsUrlSDKs; // @synthesize clickStatisticsUrlSDKs=_clickStatisticsUrlSDKs;
@property(retain, nonatomic) NSArray *clickStatisticsUrls; // @synthesize clickStatisticsUrls=_clickStatisticsUrls;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) long long adVideoTotalTime; // @synthesize adVideoTotalTime=_adVideoTotalTime;
@property(copy, nonatomic) NSString *adVideoId; // @synthesize adVideoId=_adVideoId;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(nonatomic) long long advFlowSourceType; // @synthesize advFlowSourceType=_advFlowSourceType;
@property(copy, nonatomic) NSString *logoPath; // @synthesize logoPath=_logoPath;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *reqid; // @synthesize reqid=_reqid;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (void)sendPlayEndStatistics;
- (void)sendPlayStatistics;
- (void)sendShowStatistics;
- (void)sendClickStatistics;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

