//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFPostReplyBaseViewModel.h"

#import "YKFCommonReplyToolBarViewModelProtocol.h"

@class NSDictionary, NSString, RACCommand, YKFCommunityPraiseServiceCancelPraisePostAPI, YKFCommunityPraiseServiceCancelPraiseTrendAPI, YKFCommunityPraiseServicePraisePostAPI, YKFCommunityPraiseServicePraiseTrendAPI, YKFStararrivalPraiseServiceCancelPraiseAPI, YKFStararrivalPraiseServicePraiseAPI;

@interface YKFReplyToolBarViewModel : YKFPostReplyBaseViewModel <YKFCommonReplyToolBarViewModelProtocol>
{
    _Bool _isLiked;
    _Bool _hasReplyContent;
    RACCommand *_showReplyToolCommand;
    long long _likeCount;
    unsigned long long _commentCount;
    long long _fandomId;
    long long _targetId;
    unsigned long long _targetType;
    unsigned long long _replyToolBarType;
    RACCommand *_commentCommand;
    RACCommand *_shareCommand;
    RACCommand *_praiseCommand;
    RACCommand *_switchCommand;
    NSString *_likeSpmCD;
    NSString *_likeCtrName;
    NSDictionary *_likeProperties;
    NSString *_commentSpmCD;
    NSString *_commentCtrName;
    NSDictionary *_commentProperties;
    NSString *_shareSpmCD;
    NSString *_shareCtrName;
    NSDictionary *_shareProperties;
    YKFStararrivalPraiseServicePraiseAPI *_praiseStarArrivalAPI;
    YKFStararrivalPraiseServiceCancelPraiseAPI *_cancelPraiseStarArrivalAPI;
    YKFCommunityPraiseServicePraiseTrendAPI *_praiseTrendAPI;
    YKFCommunityPraiseServiceCancelPraiseTrendAPI *_cancelPraiseTrendAPI;
    YKFCommunityPraiseServicePraisePostAPI *_praisePostAPI;
    YKFCommunityPraiseServiceCancelPraisePostAPI *_cancelPraisePostAPI;
}

@property(retain, nonatomic) YKFCommunityPraiseServiceCancelPraisePostAPI *cancelPraisePostAPI; // @synthesize cancelPraisePostAPI=_cancelPraisePostAPI;
@property(retain, nonatomic) YKFCommunityPraiseServicePraisePostAPI *praisePostAPI; // @synthesize praisePostAPI=_praisePostAPI;
@property(retain, nonatomic) YKFCommunityPraiseServiceCancelPraiseTrendAPI *cancelPraiseTrendAPI; // @synthesize cancelPraiseTrendAPI=_cancelPraiseTrendAPI;
@property(retain, nonatomic) YKFCommunityPraiseServicePraiseTrendAPI *praiseTrendAPI; // @synthesize praiseTrendAPI=_praiseTrendAPI;
@property(retain, nonatomic) YKFStararrivalPraiseServiceCancelPraiseAPI *cancelPraiseStarArrivalAPI; // @synthesize cancelPraiseStarArrivalAPI=_cancelPraiseStarArrivalAPI;
@property(retain, nonatomic) YKFStararrivalPraiseServicePraiseAPI *praiseStarArrivalAPI; // @synthesize praiseStarArrivalAPI=_praiseStarArrivalAPI;
@property(retain, nonatomic) NSDictionary *shareProperties; // @synthesize shareProperties=_shareProperties;
@property(copy, nonatomic) NSString *shareCtrName; // @synthesize shareCtrName=_shareCtrName;
@property(copy, nonatomic) NSString *shareSpmCD; // @synthesize shareSpmCD=_shareSpmCD;
@property(retain, nonatomic) NSDictionary *commentProperties; // @synthesize commentProperties=_commentProperties;
@property(copy, nonatomic) NSString *commentCtrName; // @synthesize commentCtrName=_commentCtrName;
@property(copy, nonatomic) NSString *commentSpmCD; // @synthesize commentSpmCD=_commentSpmCD;
@property(retain, nonatomic) NSDictionary *likeProperties; // @synthesize likeProperties=_likeProperties;
@property(copy, nonatomic) NSString *likeCtrName; // @synthesize likeCtrName=_likeCtrName;
@property(copy, nonatomic) NSString *likeSpmCD; // @synthesize likeSpmCD=_likeSpmCD;
@property(retain, nonatomic) RACCommand *switchCommand; // @synthesize switchCommand=_switchCommand;
@property(retain, nonatomic) RACCommand *praiseCommand; // @synthesize praiseCommand=_praiseCommand;
@property(retain, nonatomic) RACCommand *shareCommand; // @synthesize shareCommand=_shareCommand;
@property(retain, nonatomic) RACCommand *commentCommand; // @synthesize commentCommand=_commentCommand;
@property(nonatomic) _Bool hasReplyContent; // @synthesize hasReplyContent=_hasReplyContent;
@property(nonatomic) unsigned long long replyToolBarType; // @synthesize replyToolBarType=_replyToolBarType;
@property(nonatomic) unsigned long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) long long targetId; // @synthesize targetId=_targetId;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) RACCommand *showReplyToolCommand; // @synthesize showReplyToolCommand=_showReplyToolCommand;
- (void).cxx_destruct;
- (double)heightOfCommonReplyToolBar;
- (void)praisePost:(CDUnknownBlockType)arg1;
- (id)init;

@end

