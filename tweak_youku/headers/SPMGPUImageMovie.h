//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPMGPUImageOutput.h"

@class NSURL;

@interface SPMGPUImageMovie : SPMGPUImageOutput
{
    struct __CVBuffer *_currentBuffer;
    NSURL *_url;
}

@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)endProcessing;
- (void)processFrame;
- (void)startProcessing;
- (id)initWithURL:(id)arg1;

@end
