//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFCommunityActionServiceCreateShareAPI, YKFCommunityFandomFansServiceIsFollowFandomsAPI, YKFCommunityplayVoteCampaignServiceVoteAPI, YKFStararrivalCommentServiceAddDanmuCommentAPI, YKFStararrivalCommentServiceAddReplyCommentAPI, YKFStararrivalCommentServiceGetDanmuCommentsAPI, YKFStararrivalCommentServiceGetReplyCommentsAPI, YKFStararrivalCommentServiceRemoveCommentAPI, YKFStararrivalPraiseServiceCancelPraiseDanmuAPI, YKFStararrivalPraiseServiceCancelPraiseReplyAPI, YKFStararrivalPraiseServicePraiseDanmuAPI, YKFStararrivalPraiseServicePraiseReplyAPI, YKFStararrivalReplyServiceDeleteReplyAPI, YKFStararrivalStarDanmuServiceGetDanmuDetailAPI, YKFStararrivalStarServiceCancelStarArrivalAPI, YKFStararrivalStarServiceGetStarArrivalDetailAPI, YKFStararrivalStarServiceReserveStarArrivalAPI, YKFStararrivalToolActServiceGetToolInfoAPI;

@interface YKFStarArrivalDetailService : NSObject
{
    YKFStararrivalStarServiceGetStarArrivalDetailAPI *_starArrivalDetailAPI;
    YKFCommunityActionServiceCreateShareAPI *_createShareAPI;
    YKFStararrivalStarServiceReserveStarArrivalAPI *_reserveStarArrivalAPI;
    YKFStararrivalStarServiceCancelStarArrivalAPI *_cancelStarArrivalAPI;
    YKFCommunityplayVoteCampaignServiceVoteAPI *_voteAPI;
    YKFCommunityFandomFansServiceIsFollowFandomsAPI *_isFollowFandomsAPI;
    YKFStararrivalPraiseServicePraiseDanmuAPI *_praiseDanmuAPI;
    YKFStararrivalPraiseServiceCancelPraiseDanmuAPI *_cancelPraiseDanmuAPI;
    YKFStararrivalCommentServiceAddDanmuCommentAPI *_addDanmuCommentAPI;
    YKFStararrivalStarDanmuServiceGetDanmuDetailAPI *_getDanmuDetailAPI;
    YKFStararrivalCommentServiceGetDanmuCommentsAPI *_getDanmuCommentsAPI;
    YKFStararrivalCommentServiceRemoveCommentAPI *_removeCommentsAPI;
    YKFStararrivalPraiseServicePraiseReplyAPI *_praiseReplyAPI;
    YKFStararrivalPraiseServiceCancelPraiseReplyAPI *_cancelPraiseReplyAPI;
    YKFStararrivalCommentServiceAddReplyCommentAPI *_addReplyCommentAPI;
    YKFStararrivalReplyServiceDeleteReplyAPI *_deleteReplyAPI;
    YKFStararrivalCommentServiceGetReplyCommentsAPI *_getReplyCommentsAPI;
    YKFStararrivalToolActServiceGetToolInfoAPI *_getToolInfoAPI;
}

+ (long long)replyFromValue;
+ (_Bool)isStarArrivalPage;
@property(retain, nonatomic) YKFStararrivalToolActServiceGetToolInfoAPI *getToolInfoAPI; // @synthesize getToolInfoAPI=_getToolInfoAPI;
@property(retain, nonatomic) YKFStararrivalCommentServiceGetReplyCommentsAPI *getReplyCommentsAPI; // @synthesize getReplyCommentsAPI=_getReplyCommentsAPI;
@property(retain, nonatomic) YKFStararrivalReplyServiceDeleteReplyAPI *deleteReplyAPI; // @synthesize deleteReplyAPI=_deleteReplyAPI;
@property(retain, nonatomic) YKFStararrivalCommentServiceAddReplyCommentAPI *addReplyCommentAPI; // @synthesize addReplyCommentAPI=_addReplyCommentAPI;
@property(retain, nonatomic) YKFStararrivalPraiseServiceCancelPraiseReplyAPI *cancelPraiseReplyAPI; // @synthesize cancelPraiseReplyAPI=_cancelPraiseReplyAPI;
@property(retain, nonatomic) YKFStararrivalPraiseServicePraiseReplyAPI *praiseReplyAPI; // @synthesize praiseReplyAPI=_praiseReplyAPI;
@property(retain, nonatomic) YKFStararrivalCommentServiceRemoveCommentAPI *removeCommentsAPI; // @synthesize removeCommentsAPI=_removeCommentsAPI;
@property(retain, nonatomic) YKFStararrivalCommentServiceGetDanmuCommentsAPI *getDanmuCommentsAPI; // @synthesize getDanmuCommentsAPI=_getDanmuCommentsAPI;
@property(retain, nonatomic) YKFStararrivalStarDanmuServiceGetDanmuDetailAPI *getDanmuDetailAPI; // @synthesize getDanmuDetailAPI=_getDanmuDetailAPI;
@property(retain, nonatomic) YKFStararrivalCommentServiceAddDanmuCommentAPI *addDanmuCommentAPI; // @synthesize addDanmuCommentAPI=_addDanmuCommentAPI;
@property(retain, nonatomic) YKFStararrivalPraiseServiceCancelPraiseDanmuAPI *cancelPraiseDanmuAPI; // @synthesize cancelPraiseDanmuAPI=_cancelPraiseDanmuAPI;
@property(retain, nonatomic) YKFStararrivalPraiseServicePraiseDanmuAPI *praiseDanmuAPI; // @synthesize praiseDanmuAPI=_praiseDanmuAPI;
@property(retain, nonatomic) YKFCommunityFandomFansServiceIsFollowFandomsAPI *isFollowFandomsAPI; // @synthesize isFollowFandomsAPI=_isFollowFandomsAPI;
@property(retain, nonatomic) YKFCommunityplayVoteCampaignServiceVoteAPI *voteAPI; // @synthesize voteAPI=_voteAPI;
@property(retain, nonatomic) YKFStararrivalStarServiceCancelStarArrivalAPI *cancelStarArrivalAPI; // @synthesize cancelStarArrivalAPI=_cancelStarArrivalAPI;
@property(retain, nonatomic) YKFStararrivalStarServiceReserveStarArrivalAPI *reserveStarArrivalAPI; // @synthesize reserveStarArrivalAPI=_reserveStarArrivalAPI;
@property(retain, nonatomic) YKFCommunityActionServiceCreateShareAPI *createShareAPI; // @synthesize createShareAPI=_createShareAPI;
@property(retain, nonatomic) YKFStararrivalStarServiceGetStarArrivalDetailAPI *starArrivalDetailAPI; // @synthesize starArrivalDetailAPI=_starArrivalDetailAPI;
- (void).cxx_destruct;
- (void)fetchToolinfoWithStarDetailId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)fetchReplyCommentsReplyId:(long long)arg1 pageSize:(int)arg2 pageNumber:(int)arg3 complete:(CDUnknownBlockType)arg4;
- (void)deleteReplyWithReplyId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)addCommentToReplyReplyId:(long long)arg1 commentId:(long long)arg2 contentText:(id)arg3 audios:(id)arg4 targetId:(long long)arg5 fandomId:(long long)arg6 complete:(CDUnknownBlockType)arg7;
- (void)cancelPraiseReplyWithReplyId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)praiseReplyWithReplyId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removeCommentWithCommentId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)getDanmuCommentWithDanmuId:(long long)arg1 starArrivalId:(long long)arg2 page:(int)arg3 complete:(CDUnknownBlockType)arg4;
- (void)fetchDanmakuDetailWithDanmakuId:(long long)arg1 starArrivalId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)addDanmuComment:(long long)arg1 starArrivalId:(long long)arg2 commentId:(long long)arg3 comment:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (void)praiseDanmu:(long long)arg1 starArrivalId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)cancelPraiseDanmu:(long long)arg1 starArrivalId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)checkCurrentUserIsFollowFandom:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)voteWithVoteId:(long long)arg1 voteOptionId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)cancelStarArrivalWithStarArriveId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)reserveStarArrivalWithStarArriveId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)fetchShareIdWithShareUrl:(id)arg1 gmtAction:(long long)arg2 targetId:(long long)arg3 targetType:(long long)arg4 complete:(CDUnknownBlockType)arg5;
- (void)fetchStarArrivalShareId:(id)arg1 targetId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)fetchArriveDetailWithStarArriveId:(long long)arg1 complete:(CDUnknownBlockType)arg2;

@end
