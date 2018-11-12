//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSData, NSDictionary, NSString, YKJSONClient;

@interface YKConfigUpdater : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSString *_groupName;
    CDUnknownBlockType _completionBlock;
    NSDictionary *_jsonString;
    NSData *_preData;
    YKJSONClient *_client;
    NSString *_currentPubTime;
    NSString *_mandatoryUpdate;
    NSDictionary *_preJson;
}

@property(retain, nonatomic) NSDictionary *preJson; // @synthesize preJson=_preJson;
@property(copy, nonatomic) NSString *mandatoryUpdate; // @synthesize mandatoryUpdate=_mandatoryUpdate;
@property(copy, nonatomic) NSString *currentPubTime; // @synthesize currentPubTime=_currentPubTime;
@property(retain, nonatomic) YKJSONClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSData *preData; // @synthesize preData=_preData;
@property(copy, nonatomic) NSDictionary *jsonString; // @synthesize jsonString=_jsonString;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)getIDArrayFromConfigIndex:(id)arg1 seperatedByString:(id)arg2;
- (id)removeKeyFromDictionary:(id)arg1 key:(id)arg2;
- (id)getConfig;
- (id)getConfigByKey:(id)arg1;
- (id)getMandatoryUpdate;
- (id)getCurrentPubTime;
- (_Bool)useNewApi;
- (void)mtopCallBack;
- (void)handleMtopJson:(id)arg1;
- (void)handleLayermanagerMtopJson:(id)arg1;
- (void)newRequestWithGroupName:(id)arg1 type:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateConfigWithGroupName:(id)arg1 type:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithGroupName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
