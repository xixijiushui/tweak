//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFCommunityPostServiceCreatePostAPI, YKFCommunitySensitiveServiceCheckRealNameAPI;

@interface YKFStarChallengePublishAPIService : NSObject
{
    YKFCommunityPostServiceCreatePostAPI *_createPostAPI;
    YKFCommunitySensitiveServiceCheckRealNameAPI *_checkRealNameAPI;
}

@property(retain, nonatomic) YKFCommunitySensitiveServiceCheckRealNameAPI *checkRealNameAPI; // @synthesize checkRealNameAPI=_checkRealNameAPI;
@property(retain, nonatomic) YKFCommunityPostServiceCreatePostAPI *createPostAPI; // @synthesize createPostAPI=_createPostAPI;
- (void).cxx_destruct;
- (_Bool)_handleRealNameStatusInfo:(id)arg1 nextTask:(CDUnknownBlockType)arg2;
- (void)checkCurrentUserRealNameStatusWithNextTask:(CDUnknownBlockType)arg1 needLoading:(_Bool)arg2 failure:(CDUnknownBlockType)arg3;
- (void)checkCurrentUserRealNameStatusWithNextTask:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)checkCurrentUserRealNameStatusWithNextTask:(CDUnknownBlockType)arg1;
- (void)doPublishWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)publishWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end
