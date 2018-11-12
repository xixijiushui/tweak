//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession, NSObject<OS_dispatch_source>;

@interface YKFVideoEditor : NSObject
{
    id <YKFVideoEditorExportDelegate> _exportDelegate;
    AVAssetExportSession *_exportSession;
    NSObject<OS_dispatch_source> *_pollingTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(nonatomic) __weak id <YKFVideoEditorExportDelegate> exportDelegate; // @synthesize exportDelegate=_exportDelegate;
- (void).cxx_destruct;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)fire;
- (double)degressFromAssetTrack:(id)arg1;
- (void)mergeVideoWithModels:(id)arg1 outputURL:(id)arg2;

@end
