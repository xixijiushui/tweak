//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AILPBlockMessageDelegate, AILPLUploadInfo, AILPLiveInfo;

@interface AILPLiveStateHandler : NSObject
{
    AILPLiveInfo *_liveInfo;
    AILPBlockMessageDelegate *_stateDelegate;
    id <AILPLiveInfoDataSource> _datasource;
    id <AILPLStateHandlerProtocol> _delegate;
    AILPLUploadInfo *_uploadInfo;
}

@property(retain, nonatomic) AILPLUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(nonatomic) __weak id <AILPLStateHandlerProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AILPLiveInfoDataSource> datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) AILPBlockMessageDelegate *stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property(readonly, nonatomic) AILPLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void).cxx_destruct;
- (void)fetchUploadInfoWithMicNum:(id)arg1 sign:(id)arg2;
- (id)init;

@end

