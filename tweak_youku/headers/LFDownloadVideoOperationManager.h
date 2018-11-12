//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSOperationQueue;

@interface LFDownloadVideoOperationManager : NSObject
{
    NSOperationQueue *_downloadVideoQueue;
    NSMapTable *_downloadVideoArray;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMapTable *downloadVideoArray; // @synthesize downloadVideoArray=_downloadVideoArray;
@property(retain, nonatomic) NSOperationQueue *downloadVideoQueue; // @synthesize downloadVideoQueue=_downloadVideoQueue;
- (void).cxx_destruct;
- (void)networkStatusChangeNotification:(id)arg1;
- (id)downloadVideoOperationByUrl:(id)arg1;
- (id)downloadVideoWithURL:(id)arg1 progress:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3 compelteBlock:(CDUnknownBlockType)arg4 clipSize:(unsigned long long)arg5 highLevel:(_Bool)arg6;
- (void)cancelUrl:(id)arg1;
- (void)cancelAllDownloads;
- (void)dealloc;
- (id)init;

@end

