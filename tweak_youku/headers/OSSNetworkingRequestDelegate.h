//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSMutableArray, NSMutableData, NSMutableURLRequest, NSString, NSURL, NSURLSessionDataTask, OSSAllRequestNeededMessage, OSSHttpResponseParser, OSSURLRequestRetryHandler;

@interface OSSNetworkingRequestDelegate : NSObject
{
    _Bool _isAccessViaProxy;
    _Bool _isRequestCancelled;
    _Bool _isBackgroundUploadFileTask;
    _Bool _isHttpdnsEnable;
    _Bool _isHttpRequestNotSuccessResponse;
    _Bool _crc64Verifiable;
    unsigned int _currentRetryCount;
    NSMutableArray *_interceptors;
    OSSAllRequestNeededMessage *_allNeededMessage;
    NSMutableURLRequest *_internalRequest;
    long long _operType;
    OSSHttpResponseParser *_responseParser;
    NSData *_uploadingData;
    NSURL *_uploadingFileURL;
    long long _payloadTotalBytesWritten;
    OSSURLRequestRetryHandler *_retryHandler;
    NSError *_error;
    NSMutableData *_httpRequestNotSuccessResponseBody;
    NSURLSessionDataTask *_currentSessionTask;
    CDUnknownBlockType _uploadProgress;
    CDUnknownBlockType _downloadProgress;
    CDUnknownBlockType _retryCallback;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _onRecieveData;
    NSString *_contentCRC;
    NSString *_lastCRC;
}

@property(nonatomic) _Bool crc64Verifiable; // @synthesize crc64Verifiable=_crc64Verifiable;
@property(copy, nonatomic) NSString *lastCRC; // @synthesize lastCRC=_lastCRC;
@property(copy, nonatomic) NSString *contentCRC; // @synthesize contentCRC=_contentCRC;
@property(copy, nonatomic) CDUnknownBlockType onRecieveData; // @synthesize onRecieveData=_onRecieveData;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType retryCallback; // @synthesize retryCallback=_retryCallback;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain) NSURLSessionDataTask *currentSessionTask; // @synthesize currentSessionTask=_currentSessionTask;
@property(retain, nonatomic) NSMutableData *httpRequestNotSuccessResponseBody; // @synthesize httpRequestNotSuccessResponseBody=_httpRequestNotSuccessResponseBody;
@property(nonatomic) _Bool isHttpRequestNotSuccessResponse; // @synthesize isHttpRequestNotSuccessResponse=_isHttpRequestNotSuccessResponse;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned int currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property(retain, nonatomic) OSSURLRequestRetryHandler *retryHandler; // @synthesize retryHandler=_retryHandler;
@property(nonatomic) _Bool isHttpdnsEnable; // @synthesize isHttpdnsEnable=_isHttpdnsEnable;
@property(nonatomic) _Bool isBackgroundUploadFileTask; // @synthesize isBackgroundUploadFileTask=_isBackgroundUploadFileTask;
@property(nonatomic) long long payloadTotalBytesWritten; // @synthesize payloadTotalBytesWritten=_payloadTotalBytesWritten;
@property(retain, nonatomic) NSURL *uploadingFileURL; // @synthesize uploadingFileURL=_uploadingFileURL;
@property(retain, nonatomic) NSData *uploadingData; // @synthesize uploadingData=_uploadingData;
@property(retain, nonatomic) OSSHttpResponseParser *responseParser; // @synthesize responseParser=_responseParser;
@property(nonatomic) _Bool isRequestCancelled; // @synthesize isRequestCancelled=_isRequestCancelled;
@property(nonatomic) _Bool isAccessViaProxy; // @synthesize isAccessViaProxy=_isAccessViaProxy;
@property(nonatomic) long long operType; // @synthesize operType=_operType;
@property(retain, nonatomic) NSMutableURLRequest *internalRequest; // @synthesize internalRequest=_internalRequest;
@property(retain, nonatomic) OSSAllRequestNeededMessage *allNeededMessage; // @synthesize allNeededMessage=_allNeededMessage;
@property(retain, nonatomic) NSMutableArray *interceptors; // @synthesize interceptors=_interceptors;
- (void).cxx_destruct;
- (id)buildInternalHttpRequest;
- (id)validateRequestParams;
- (void)cancel;
- (void)reset;
- (id)init;

@end

