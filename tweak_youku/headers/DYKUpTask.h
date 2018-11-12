//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, OSSClient, OSSTask;

@interface DYKUpTask : NSObject
{
    NSOperationQueue *_uploadQueue;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    OSSClient *_uploadClient;
    OSSTask *_ossTask;
    id <DYKUpFileInfoProvider> _fileInfo;
    id <DYKUpOSSInfoProvider> _ossInfo;
    id <DYKUpStsInfoProvider> _stsInfo;
}

@property(retain, nonatomic) id <DYKUpStsInfoProvider> stsInfo; // @synthesize stsInfo=_stsInfo;
@property(retain, nonatomic) id <DYKUpOSSInfoProvider> ossInfo; // @synthesize ossInfo=_ossInfo;
@property(retain, nonatomic) id <DYKUpFileInfoProvider> fileInfo; // @synthesize fileInfo=_fileInfo;
@property(retain, nonatomic) OSSTask *ossTask; // @synthesize ossTask=_ossTask;
@property(retain, nonatomic) OSSClient *uploadClient; // @synthesize uploadClient=_uploadClient;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSOperationQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
- (void).cxx_destruct;
- (id)putRequest;
- (id)credentialWithAccessKeyId:(id)arg1 secretKeyId:(id)arg2 securityToken:(id)arg3;
- (id)clientWithSts:(id)arg1 ossInfo:(id)arg2;
- (void)resume;
- (void)cancel;
- (id)initWithFileInfo:(id)arg1 ossFileInfo:(id)arg2 stsInfo:(id)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6 error:(id *)arg7;

@end
