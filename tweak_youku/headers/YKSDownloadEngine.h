//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface YKSDownloadEngine : NSObject
{
    NSOperationQueue *_downloadQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (void)downloadWithURL:(id)arg1 toLocalPath:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end

