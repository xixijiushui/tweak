//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKUDDownloadRequestTracker.h"

@class NSDictionary, NSString, YKUDSegmentModel;

@interface YKUDSegmentDownloadRequestTracker : NSObject <YKUDDownloadRequestTracker>
{
    YKUDSegmentModel *_segment;
    NSDictionary *_header;
}

@property(retain) NSDictionary *header; // @synthesize header=_header;
@property(nonatomic) __weak YKUDSegmentModel *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (void)onEnd:(_Bool)arg1 withError:(id)arg2;
- (void)onReceiveDataBytes:(long long)arg1 totalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)onReceiveHeader:(id)arg1 response:(id)arg2 andRequest:(id)arg3;
- (void)onReceiveStatusCode:(long long)arg1;
- (void)onStart;
- (id)initWithSegment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

