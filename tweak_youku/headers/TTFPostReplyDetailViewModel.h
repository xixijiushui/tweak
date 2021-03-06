//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFPostReplyBaseViewModel.h"

@class NSArray, TTFFandomItemInformViewModel, TTFFandomerViewModel, TTFPostReplyDetailService, TTPCommunityInformListService, YKFCommunityPostReplyPO, YKFStarArrivalDetailService;

@interface TTFPostReplyDetailViewModel : YKFPostReplyBaseViewModel
{
    _Bool _isFandomGroupPost;
    _Bool _deleteCommentPermission;
    long long _from;
    NSArray *_commentsArray;
    YKFCommunityPostReplyPO *_replyPOModel;
    YKFStarArrivalDetailService *_starArrivalDetailService;
    TTFPostReplyDetailService *_postReplyDetailService;
    TTPCommunityInformListService *_informListService;
    TTFFandomerViewModel *_fandomerVMO;
    TTFFandomItemInformViewModel *_informItemVMO;
}

@property(retain, nonatomic) TTFFandomItemInformViewModel *informItemVMO; // @synthesize informItemVMO=_informItemVMO;
@property(retain, nonatomic) TTFFandomerViewModel *fandomerVMO; // @synthesize fandomerVMO=_fandomerVMO;
@property(retain, nonatomic) TTPCommunityInformListService *informListService; // @synthesize informListService=_informListService;
@property(retain, nonatomic) TTFPostReplyDetailService *postReplyDetailService; // @synthesize postReplyDetailService=_postReplyDetailService;
@property(retain, nonatomic) YKFStarArrivalDetailService *starArrivalDetailService; // @synthesize starArrivalDetailService=_starArrivalDetailService;
@property(nonatomic) _Bool deleteCommentPermission; // @synthesize deleteCommentPermission=_deleteCommentPermission;
@property(retain, nonatomic) YKFCommunityPostReplyPO *replyPOModel; // @synthesize replyPOModel=_replyPOModel;
@property(retain, nonatomic) NSArray *commentsArray; // @synthesize commentsArray=_commentsArray;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(nonatomic) _Bool isFandomGroupPost; // @synthesize isFandomGroupPost=_isFandomGroupPost;
- (void).cxx_destruct;
- (void)navigateToPostDetailPage;
- (id)postReplyOperationsWithDefaultOperations:(id)arg1;
- (void)addCommentToReplyReplyId:(long long)arg1 commentId:(long long)arg2 contentText:(id)arg3 targetId:(long long)arg4 targetType:(id)arg5 fandomId:(long long)arg6 complete:(CDUnknownBlockType)arg7;
- (void)fetchReplyCommentsReplyId:(long long)arg1 sceneId:(id)arg2 sceneType:(long long)arg3 pageSize:(int)arg4 pageNumber:(int)arg5 complete:(CDUnknownBlockType)arg6;
- (void)fetchReplyCommentsReplyId:(long long)arg1 pageSize:(int)arg2 pageNumber:(int)arg3 complete:(CDUnknownBlockType)arg4;
- (void)fetchReplyDetailWithReplyId:(long long)arg1 sceneId:(id)arg2 sceneType:(long long)arg3 complete:(CDUnknownBlockType)arg4;
- (void)fetchReplyDetailWithReplyId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end

