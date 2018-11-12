//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKSCommentService : NSObject
{
    _Bool _isLiking;
    NSString *_ip;
}

@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (int)errorCodeByParam:(id)arg1;
- (id)appSource;
- (long long)currentUid;
- (void)getCommentItem:(long long)arg1 videoId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (void)likeComment:(long long)arg1 videoId:(id)arg2 isLike:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)deleteComment:(long long)arg1 videoId:(id)arg2 objectType:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)addComment:(id)arg1 videoId:(id)arg2 parentCommentId:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;

@end

