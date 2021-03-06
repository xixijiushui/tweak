//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, YCSInnerShareObject, YKFCommunityPostServiceCreatePostAPI;

@interface YCSShareService : NSObject
{
    id <YCSInnerShareManagerDelegate> _delegate;
    YCSInnerShareObject *_shareObject;
    long long _currentScene;
    NSMutableDictionary *_uploadInfo;
    YKFCommunityPostServiceCreatePostAPI *_createPostAPI;
}

+ (id)shareService;
@property(retain, nonatomic) YKFCommunityPostServiceCreatePostAPI *createPostAPI; // @synthesize createPostAPI=_createPostAPI;
@property(retain, nonatomic) NSMutableDictionary *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(nonatomic) long long currentScene; // @synthesize currentScene=_currentScene;
@property(retain, nonatomic) YCSInnerShareObject *shareObject; // @synthesize shareObject=_shareObject;
@property(nonatomic) __weak id <YCSInnerShareManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)networkType;
- (void)collectUploadFailed:(id)arg1;
- (void)collectUploadSuccess;
- (void)collectUploadStartEvent;
- (void)collectPublishSuccess;
- (void)processPublishFailed:(id)arg1;
- (void)request;
- (void)requestShareNoUI:(long long)arg1;
- (void)doPublishWithModel:(long long)arg1 videopicurl:(id)arg2 vid:(id)arg3 imageUrl:(id)arg4 Complete:(CDUnknownBlockType)arg5;
- (void)publishWithAnalytics;
- (void)cancelPublish;
- (void)publish;
- (int)shareScene;
- (int)currentType;

@end

