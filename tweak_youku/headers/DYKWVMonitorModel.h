//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DYKWVMonitorModel : NSObject
{
    _Bool _isWK;
    _Bool _isCache;
    _Bool _rotation;
    _Bool _isFullScreen;
    NSString *_url;
    NSString *_page;
    NSString *_source;
    double _initTimeStamp;
    double _initTime;
    double _loadTime;
    double _renderTime;
    double _appInitTime;
    long long _statusCode;
}

@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) double appInitTime; // @synthesize appInitTime=_appInitTime;
@property(nonatomic) double renderTime; // @synthesize renderTime=_renderTime;
@property(nonatomic) double loadTime; // @synthesize loadTime=_loadTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(nonatomic) double initTimeStamp; // @synthesize initTimeStamp=_initTimeStamp;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool rotation; // @synthesize rotation=_rotation;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) _Bool isWK; // @synthesize isWK=_isWK;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)init;

@end

