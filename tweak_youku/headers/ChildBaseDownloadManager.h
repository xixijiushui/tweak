//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChildBaseDownloadProtocol.h"

@class NSString;

@interface ChildBaseDownloadManager : NSObject <ChildBaseDownloadProtocol>
{
    id <ChildBaseDownloadProtocol> _downloadManagerHandler;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <ChildBaseDownloadProtocol> downloadManagerHandler; // @synthesize downloadManagerHandler=_downloadManagerHandler;
- (void).cxx_destruct;
- (void)removeDownloadCompleted:(id)arg1;
- (void)removeDownload:(id)arg1;
- (id)startDownload:(id)arg1;
- (id)getDownloadFinishVideosBySid:(id)arg1;
- (id)getRealDownloadList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

