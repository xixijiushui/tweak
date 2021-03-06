//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKUploadManagerDelegate.h"

@class NSString, TRFUploadTask;

@interface OPSSUploader : NSObject <DYKUploadManagerDelegate>
{
    TRFUploadTask *_uploadTask;
    NSString *_currentVideoName;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _progressingBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType progressingBlock; // @synthesize progressingBlock=_progressingBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) NSString *currentVideoName; // @synthesize currentVideoName=_currentVideoName;
@property(retain, nonatomic) TRFUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
- (void).cxx_destruct;
- (void)taskDidCancel:(id)arg1;
- (void)taskDidFailed:(id)arg1;
- (void)taskUploadProgress:(id)arg1;
- (void)taskDidSuccess:(id)arg1;
- (void)uploadImage:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)retry;
- (void)uploadVideo:(id)arg1 progressing:(CDUnknownBlockType)arg2 completeBlock:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

