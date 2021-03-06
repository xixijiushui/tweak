//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFCommunityPostServiceCreatePostAPI, YKFCommunityPostServiceModifyPostAPI;

@interface TTFPublishPostService : NSObject
{
    YKFCommunityPostServiceCreatePostAPI *_createPostAPI;
    YKFCommunityPostServiceModifyPostAPI *_modifyPostAPI;
}

@property(retain, nonatomic) YKFCommunityPostServiceModifyPostAPI *modifyPostAPI; // @synthesize modifyPostAPI=_modifyPostAPI;
@property(retain, nonatomic) YKFCommunityPostServiceCreatePostAPI *createPostAPI; // @synthesize createPostAPI=_createPostAPI;
- (void).cxx_destruct;
- (void)publishMixedPostWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)publishVotePostWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)modifyMixedPostWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)modifyVotePostWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end

