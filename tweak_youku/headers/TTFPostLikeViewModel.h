//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class TTFPostLikeService;

@interface TTFPostLikeViewModel : ALMBaseViewModel
{
    TTFPostLikeService *_postLikeService;
}

@property(retain, nonatomic) TTFPostLikeService *postLikeService; // @synthesize postLikeService=_postLikeService;
- (void).cxx_destruct;
- (void)sendPostReplyUnLikeWithPostId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendPostReplyLikeWithPostId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendPostUnLikeWithPostId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendPostLikeWithPostId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end

