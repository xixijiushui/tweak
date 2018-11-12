//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSMutableArray, NSString, YKJSONClient;

@interface PTBaseEngine : NSObject
{
    CDUnknownBlockType _engineStatusCallBack;
    _Bool _hasMore;
    _Bool _isBusy;
    int _pn;
    int _pz;
    NSMutableArray *_layouts;
    NSString *_url;
    NSString *_mtopUrl;
    NSDictionary *_params;
    NSDictionary *_mtopParams;
    NSError *_error;
    long long _status;
    long long _cachePolicy;
    YKJSONClient *_jsonClient;
}

@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(nonatomic) long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *mtopParams; // @synthesize mtopParams=_mtopParams;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *mtopUrl; // @synthesize mtopUrl=_mtopUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(nonatomic) int pz; // @synthesize pz=_pz;
@property(nonatomic) int pn; // @synthesize pn=_pn;
- (void).cxx_destruct;
- (void)cancel;
- (void)performCache:(id)arg1;
- (void)flush;
- (id)cachedObjects;
- (void)startEngineCompleteWithEngineStatus:(CDUnknownBlockType)arg1;
- (void)startEngineComplete:(CDUnknownBlockType)arg1;
- (id)process_mtop:(id)arg1;
- (id)process:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeListener;
- (void)addListener;
- (id)init;
- (void)dealloc;

@end

