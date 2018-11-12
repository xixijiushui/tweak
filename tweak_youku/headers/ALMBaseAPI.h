//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIRequest.h"

@class NSArray, NSMutableDictionary, NSString;

@interface ALMBaseAPI : YKFAPIRequest
{
    _Bool _isLoading;
    _Bool ___mock;
    id <ALMAPIDelegate> _delegate;
    double _api_cache_time;
    unsigned long long _api_cache_policy;
    id <ALMAPIRequestProtocol> __api_request;
    NSString *_custom_http_method;
    NSString *__api_url;
    NSMutableDictionary *___headerMap;
    NSMutableDictionary *___fileMaps;
    NSArray *___pathParameterList;
}

+ (void)registerGlobalErrorHandler:(CDUnknownBlockType)arg1;
+ (void)registerPreProcessJSONCallback:(CDUnknownBlockType)arg1;
+ (void)setDefaultCacheTime:(double)arg1;
+ (void)setDefaultCachePolicy:(unsigned long long)arg1;
+ (void)setEnableLog:(_Bool)arg1;
+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)sharedParseQueue;
@property(retain, nonatomic) NSArray *__pathParameterList; // @synthesize __pathParameterList=___pathParameterList;
@property(retain, nonatomic) NSMutableDictionary *__fileMaps; // @synthesize __fileMaps=___fileMaps;
@property(retain, nonatomic) NSMutableDictionary *__headerMap; // @synthesize __headerMap=___headerMap;
@property(nonatomic) _Bool __mock; // @synthesize __mock=___mock;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *_api_url; // @synthesize _api_url=__api_url;
@property(retain, nonatomic) NSString *custom_http_method; // @synthesize custom_http_method=_custom_http_method;
@property(retain, nonatomic) id <ALMAPIRequestProtocol> _api_request; // @synthesize _api_request=__api_request;
@property(nonatomic) unsigned long long api_cache_policy; // @synthesize api_cache_policy=_api_cache_policy;
@property(nonatomic) double api_cache_time; // @synthesize api_cache_time=_api_cache_time;
@property(nonatomic) __weak id <ALMAPIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestWithSuccessBlock:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2;
- (void)request:(CDUnknownBlockType)arg1;
- (void)request:(CDUnknownBlockType)arg1 needGlobal:(_Bool)arg2;
- (void)processResult:(id)arg1 error:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)parshPathParameterList;
- (id)rac_request;
- (id)transformJSONToModel:(id)arg1 error:(id *)arg2;
- (id)HTTPRequest;
- (void)cancel;
- (id)formatParameters;
- (id)parametersTransformMap;
- (id)http_request_type;
- (id)pathParameterList;
- (id)api_path;
- (_Bool)isRestfulStyle;
- (id)api_host;
- (unsigned long long)getApiParamEncodeType;
- (_Bool)isMultipartFormRequest;
- (void)removeFileForKey:(id)arg1;
- (void)addFileData:(id)arg1 forKey:(id)arg2;
- (void)addFile:(id)arg1 forKey:(id)arg2;
- (id)headerValueForKey:(id)arg1;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;

@end
