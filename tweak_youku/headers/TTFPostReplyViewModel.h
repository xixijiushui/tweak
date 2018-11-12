//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFPostReplyBaseViewModel.h"

#import "YKFPLevelNameplate.h"

@class NSArray, NSArray<YKFCommunityPostMixedContentPO>, NSAttributedString, NSDictionary, NSIndexPath, NSMutableArray, NSString, TTFFandomItemInformViewModel, TTFFandomerViewModel, TTFPostReplyDetailService, TTFansDetailViewModel, TTPCommunityInformListService, UIColor, YKFAudioViewModel, YKFCommunityPostMixedContentPO, YKFCommunityPostReplyPO, YKFPersonalHomepageJumpViewModel, YKFPostContentTop, YKFStarArrivalDetailService, YKFStararrivalDanmukuContentPO, YKFStararrivalDanmukuDetailPO, YKFStararrivalPostReplyPO;

@interface TTFPostReplyViewModel : YKFPostReplyBaseViewModel <YKFPLevelNameplate>
{
    _Bool _showMoreContentLabel;
    _Bool _isFandomGroup;
    _Bool _isJoined;
    _Bool _isStarUser;
    _Bool _haveReportPermission;
    _Bool _showFullReply;
    _Bool _canDelete;
    _Bool _canReportAbuse;
    _Bool _needToShowStarIcon;
    _Bool _isOwner;
    double _cellHeight;
    NSAttributedString *_attributedStringForContent;
    NSAttributedString *_attributedStringForComment;
    unsigned long long _postReplyType;
    NSString *_likeButtonspmCD;
    NSString *_likeButtonCtlName;
    NSDictionary *_likeButtonProperties;
    NSString *_commentButtonspmCD;
    NSString *_commentButtonCtlName;
    NSDictionary *_commentButtonProperties;
    NSString *_reportButtonspmCD;
    NSString *_reportButtonCtlName;
    NSDictionary *_reportButtonProperties;
    NSString *_picClickspmCD;
    NSString *_picClickCtlName;
    NSString *_topClickspmCD;
    NSString *_topClickCtlName;
    NSString *_audioSpmC;
    long long _floor;
    long long _fakeFloor;
    NSMutableArray *_comments;
    NSArray<YKFCommunityPostMixedContentPO> *_contents;
    YKFCommunityPostMixedContentPO *_video;
    NSString *_medalImageUrl;
    NSString *_levelImageUrl;
    NSString *_levelExplainUrl;
    NSString *_nameplate;
    long long _fansIdentity;
    NSString *_medalItemKey;
    YKFPersonalHomepageJumpViewModel *_jumpViewModel;
    NSString *_currentComment;
    struct YKFCommunityPostReplyPO *_postReplyModel;
    YKFStararrivalPostReplyPO *_starPostReplyModel;
    YKFPostContentTop *_postContentTop;
    YKFStararrivalDanmukuContentPO *_starArrivalContentPO;
    YKFStararrivalDanmukuDetailPO *_danmakuDetailPO;
    NSString *_timeLabel;
    UIColor *_timeLabelColor;
    long long _starArrivalId;
    long long _fromPage;
    CDUnknownBlockType _commentAction;
    CDUnknownBlockType _allCommentAction;
    NSIndexPath *_cellIndexPath;
    TTFFandomItemInformViewModel *_informItemVMO;
    TTFansDetailViewModel *_fansDetailViewModel;
    long long _replyId;
    NSString *_contentText;
    NSArray *_picUrls;
    NSArray *_pics;
    NSArray *_videos;
    YKFAudioViewModel *_audioModel;
    long long _userId;
    long long _level;
    NSString *_manageGroupImageUrl;
    NSArray *_atUsers;
    TTFFandomerViewModel *_fandomerViewModel;
    TTPCommunityInformListService *_informListService;
    TTFPostReplyDetailService *_postReplyDetailService;
    YKFStarArrivalDetailService *_starArrivalDetailService;
    struct CGSize _attributedStringSizeForContent;
    struct CGSize _attributedStringSizeForComment;
}

+ (id)starIconString;
+ (id)initWithStarArrivalPostCommentPO:(id)arg1;
+ (id)initiWithReplyModels:(id)arg1;
@property(retain, nonatomic) YKFStarArrivalDetailService *starArrivalDetailService; // @synthesize starArrivalDetailService=_starArrivalDetailService;
@property(retain, nonatomic) TTFPostReplyDetailService *postReplyDetailService; // @synthesize postReplyDetailService=_postReplyDetailService;
@property(retain, nonatomic) TTPCommunityInformListService *informListService; // @synthesize informListService=_informListService;
@property(retain, nonatomic) TTFFandomerViewModel *fandomerViewModel; // @synthesize fandomerViewModel=_fandomerViewModel;
@property(retain, nonatomic) NSArray *atUsers; // @synthesize atUsers=_atUsers;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(copy, nonatomic) NSString *manageGroupImageUrl; // @synthesize manageGroupImageUrl=_manageGroupImageUrl;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) YKFAudioViewModel *audioModel; // @synthesize audioModel=_audioModel;
@property(retain, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) NSArray *picUrls; // @synthesize picUrls=_picUrls;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(nonatomic) long long replyId; // @synthesize replyId=_replyId;
@property(retain, nonatomic) TTFansDetailViewModel *fansDetailViewModel; // @synthesize fansDetailViewModel=_fansDetailViewModel;
@property(retain, nonatomic) TTFFandomItemInformViewModel *informItemVMO; // @synthesize informItemVMO=_informItemVMO;
@property(retain, nonatomic) NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(copy, nonatomic) CDUnknownBlockType allCommentAction; // @synthesize allCommentAction=_allCommentAction;
@property(copy, nonatomic) CDUnknownBlockType commentAction; // @synthesize commentAction=_commentAction;
@property(nonatomic) long long fromPage; // @synthesize fromPage=_fromPage;
@property(nonatomic) long long starArrivalId; // @synthesize starArrivalId=_starArrivalId;
@property(retain, nonatomic) UIColor *timeLabelColor; // @synthesize timeLabelColor=_timeLabelColor;
@property(copy, nonatomic) NSString *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) YKFStararrivalDanmukuDetailPO *danmakuDetailPO; // @synthesize danmakuDetailPO=_danmakuDetailPO;
@property(retain, nonatomic) YKFStararrivalDanmukuContentPO *starArrivalContentPO; // @synthesize starArrivalContentPO=_starArrivalContentPO;
@property(retain, nonatomic) YKFPostContentTop *postContentTop; // @synthesize postContentTop=_postContentTop;
@property(retain, nonatomic) YKFStararrivalPostReplyPO *starPostReplyModel; // @synthesize starPostReplyModel=_starPostReplyModel;
@property(retain, nonatomic) YKFCommunityPostReplyPO *postReplyModel; // @synthesize postReplyModel=_postReplyModel;
@property(retain, nonatomic) NSString *currentComment; // @synthesize currentComment=_currentComment;
@property(retain, nonatomic) YKFPersonalHomepageJumpViewModel *jumpViewModel; // @synthesize jumpViewModel=_jumpViewModel;
@property(nonatomic) _Bool needToShowStarIcon; // @synthesize needToShowStarIcon=_needToShowStarIcon;
@property(nonatomic) _Bool canReportAbuse; // @synthesize canReportAbuse=_canReportAbuse;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool showFullReply; // @synthesize showFullReply=_showFullReply;
@property(copy, nonatomic) NSString *medalItemKey; // @synthesize medalItemKey=_medalItemKey;
@property(nonatomic) long long fansIdentity; // @synthesize fansIdentity=_fansIdentity;
@property(copy, nonatomic) NSString *nameplate; // @synthesize nameplate=_nameplate;
@property(copy, nonatomic) NSString *levelExplainUrl; // @synthesize levelExplainUrl=_levelExplainUrl;
@property(copy, nonatomic) NSString *levelImageUrl; // @synthesize levelImageUrl=_levelImageUrl;
@property(copy, nonatomic) NSString *medalImageUrl; // @synthesize medalImageUrl=_medalImageUrl;
@property(nonatomic) _Bool haveReportPermission; // @synthesize haveReportPermission=_haveReportPermission;
@property(retain, nonatomic) YKFCommunityPostMixedContentPO *video; // @synthesize video=_video;
@property(retain, nonatomic) NSArray<YKFCommunityPostMixedContentPO> *contents; // @synthesize contents=_contents;
@property(nonatomic) _Bool isStarUser; // @synthesize isStarUser=_isStarUser;
@property(nonatomic) _Bool isJoined; // @synthesize isJoined=_isJoined;
@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
@property(nonatomic) long long fakeFloor; // @synthesize fakeFloor=_fakeFloor;
@property(nonatomic) long long floor; // @synthesize floor=_floor;
@property(retain, nonatomic) NSString *audioSpmC; // @synthesize audioSpmC=_audioSpmC;
@property(retain, nonatomic) NSString *topClickCtlName; // @synthesize topClickCtlName=_topClickCtlName;
@property(retain, nonatomic) NSString *topClickspmCD; // @synthesize topClickspmCD=_topClickspmCD;
@property(retain, nonatomic) NSString *picClickCtlName; // @synthesize picClickCtlName=_picClickCtlName;
@property(retain, nonatomic) NSString *picClickspmCD; // @synthesize picClickspmCD=_picClickspmCD;
@property(retain, nonatomic) NSDictionary *reportButtonProperties; // @synthesize reportButtonProperties=_reportButtonProperties;
@property(retain, nonatomic) NSString *reportButtonCtlName; // @synthesize reportButtonCtlName=_reportButtonCtlName;
@property(retain, nonatomic) NSString *reportButtonspmCD; // @synthesize reportButtonspmCD=_reportButtonspmCD;
@property(retain, nonatomic) NSDictionary *commentButtonProperties; // @synthesize commentButtonProperties=_commentButtonProperties;
@property(retain, nonatomic) NSString *commentButtonCtlName; // @synthesize commentButtonCtlName=_commentButtonCtlName;
@property(retain, nonatomic) NSString *commentButtonspmCD; // @synthesize commentButtonspmCD=_commentButtonspmCD;
@property(retain, nonatomic) NSDictionary *likeButtonProperties; // @synthesize likeButtonProperties=_likeButtonProperties;
@property(retain, nonatomic) NSString *likeButtonCtlName; // @synthesize likeButtonCtlName=_likeButtonCtlName;
@property(retain, nonatomic) NSString *likeButtonspmCD; // @synthesize likeButtonspmCD=_likeButtonspmCD;
@property(nonatomic) unsigned long long postReplyType; // @synthesize postReplyType=_postReplyType;
@property(nonatomic) _Bool isFandomGroup; // @synthesize isFandomGroup=_isFandomGroup;
@property(nonatomic) _Bool showMoreContentLabel; // @synthesize showMoreContentLabel=_showMoreContentLabel;
@property(retain, nonatomic) NSAttributedString *attributedStringForComment; // @synthesize attributedStringForComment=_attributedStringForComment;
@property(nonatomic) struct CGSize attributedStringSizeForComment; // @synthesize attributedStringSizeForComment=_attributedStringSizeForComment;
@property(retain, nonatomic) NSAttributedString *attributedStringForContent; // @synthesize attributedStringForContent=_attributedStringForContent;
@property(nonatomic) struct CGSize attributedStringSizeForContent; // @synthesize attributedStringSizeForContent=_attributedStringSizeForContent;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (void)buildCommentWithWidth:(double)arg1;
- (void)requestDeleteReply:(CDUnknownBlockType)arg1;
- (void)navigateToPostDetailPage;
- (id)postReplyOperationsWithDefaultOperations:(id)arg1;
- (_Bool)needSeparator;
- (id)fandomerViewModelWithOperaterPermission:(id)arg1 fandomID:(long long)arg2;
- (void)praiseReply:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool isLiked;
@property(nonatomic) long long likeCount;
@property(nonatomic) long long replyCount;
- (void)makeContentTop:(id)arg1;
- (id)initWithDanmakuDetailModel:(id)arg1;
- (id)initWithStarArrivalPostCommentPO:(id)arg1;
- (id)initWithPostReplyModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
