//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTFPostPublishTimeManager, YKFCommunityPostServiceCreatePostAPI;

@interface YKFPostPublishCenter : NSObject
{
    _Bool _publishing;
    YKFCommunityPostServiceCreatePostAPI *_createPostAPI;
    TTFPostPublishTimeManager *_publishTimeManager;
}

+ (id)defaultCenter;
@property(nonatomic) _Bool publishing; // @synthesize publishing=_publishing;
@property(retain, nonatomic) TTFPostPublishTimeManager *publishTimeManager; // @synthesize publishTimeManager=_publishTimeManager;
@property(retain, nonatomic) YKFCommunityPostServiceCreatePostAPI *createPostAPI; // @synthesize createPostAPI=_createPostAPI;
- (void).cxx_destruct;
- (void)publishMixedPostWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)doPublishWithModel:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)callback2Block:(CDUnknownBlockType)arg1 errorInfo:(id)arg2 errorCode:(long long)arg3;

@end

