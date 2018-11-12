//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView<WVWebViewProtocol>, WVPagePerformance;

@interface WVWebViewPerfRecorder : NSObject
{
    _Bool _upload;
    float _cpuUsage;
    float _usedMemory;
    UIView<WVWebViewProtocol> *_webView;
    WVPagePerformance *_pagePerformance;
    double _initTime;
}

@property(nonatomic) _Bool upload; // @synthesize upload=_upload;
@property(nonatomic) float usedMemory; // @synthesize usedMemory=_usedMemory;
@property(nonatomic) float cpuUsage; // @synthesize cpuUsage=_cpuUsage;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(retain) WVPagePerformance *pagePerformance; // @synthesize pagePerformance=_pagePerformance;
@property(nonatomic) __weak UIView<WVWebViewProtocol> *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)reportPerformance:(id)arg1;
- (void)pageDidFinishLoad:(_Bool)arg1;
- (void)pageDidDomLoadAtTime:(double)arg1;
- (void)pageDidStartLoad:(id)arg1 identifier:(id)arg2 contentType:(long long)arg3;
- (void)clearPagePerformance;
- (void)dealloc;
- (id)init;

@end
