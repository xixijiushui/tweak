//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LFShareRequest : NSObject
{
}

+ (void)createShareContentWithContext:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_getShortVideoShreTopicAfterPublishWithShareConfig:(id)arg1 shareType:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)_getShreTopicWithShareConfig:(id)arg1 shareType:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getShareLiveTopicWithConfig:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getShareTopicWithConfig:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)createShareContentWithContext:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end

