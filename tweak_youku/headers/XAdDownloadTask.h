//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHTTPURLResponse, NSMutableData, NSString;

@interface XAdDownloadTask : NSObject
{
    _Bool _cancellable;
    _Bool _resume;
    NSMutableData *_downloadData;
    NSHTTPURLResponse *_downloadResponse;
    NSString *_downloadPath;
    unsigned long long _maxRetryCount;
    unsigned long long _currentRetryCount;
    NSString *_url;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long currentRetryCount; // @synthesize currentRetryCount=_currentRetryCount;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) _Bool resume; // @synthesize resume=_resume;
@property(nonatomic) _Bool cancellable; // @synthesize cancellable=_cancellable;
@property(retain, nonatomic) NSString *downloadPath; // @synthesize downloadPath=_downloadPath;
@property(retain, nonatomic) NSHTTPURLResponse *downloadResponse; // @synthesize downloadResponse=_downloadResponse;
@property(retain, nonatomic) NSMutableData *downloadData; // @synthesize downloadData=_downloadData;
- (void).cxx_destruct;
- (id)init;

@end

