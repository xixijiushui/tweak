//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFPostReplyBaseViewModel.h"

@class APPPostVideoViewModel, NSArray, NSAttributedString, NSIndexPath, NSString, TTFPostReplyViewModel, YKFAudioViewModel, YKFReplyUserInfoViewModel;

@interface YKFStarReplyViewModel : YKFPostReplyBaseViewModel
{
    _Bool _isStarHome;
    _Bool _hideRefBorder;
    _Bool _showMoreContentLabel;
    NSAttributedString *_attributedStringForActivityContent;
    NSAttributedString *_attributedStringForRefText;
    long long _starComingId;
    NSString *_activityType;
    NSString *_activityContent;
    NSString *_activityLink;
    NSString *_refText;
    NSString *_refUserTitle;
    long long _replyType;
    long long _royalAssentUserId;
    unsigned long long _refTextLineNumber;
    APPPostVideoViewModel *_refVideo;
    NSArray *_refPics;
    YKFAudioViewModel *_refAudioViewModel;
    YKFReplyUserInfoViewModel *_userInfo;
    TTFPostReplyViewModel *_replyTextViewModel;
    YKFAudioViewModel *_activeAudioViewModel;
    long long _replyId;
    long long _commentId;
    NSIndexPath *_cellIndexPath;
    NSString *_spmC;
    struct CGSize _attributedStringSizeForActivityContent;
    struct CGSize _attributedStringSizeForRefText;
}

+ (id)initWithCommunityUserActivityPO:(id)arg1 spmC:(id)arg2;
+ (id)initiWithReplyModels:(id)arg1 spmC:(id)arg2 showComment:(_Bool)arg3;
+ (id)initiWithReplyModels:(id)arg1 spmC:(id)arg2;
@property(retain, nonatomic) NSString *spmC; // @synthesize spmC=_spmC;
@property(retain, nonatomic) NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(nonatomic) _Bool showMoreContentLabel; // @synthesize showMoreContentLabel=_showMoreContentLabel;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(nonatomic) long long replyId; // @synthesize replyId=_replyId;
@property(retain, nonatomic) YKFAudioViewModel *activeAudioViewModel; // @synthesize activeAudioViewModel=_activeAudioViewModel;
@property(nonatomic) _Bool hideRefBorder; // @synthesize hideRefBorder=_hideRefBorder;
@property(retain, nonatomic) TTFPostReplyViewModel *replyTextViewModel; // @synthesize replyTextViewModel=_replyTextViewModel;
@property(retain, nonatomic) YKFReplyUserInfoViewModel *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) YKFAudioViewModel *refAudioViewModel; // @synthesize refAudioViewModel=_refAudioViewModel;
@property(retain, nonatomic) NSArray *refPics; // @synthesize refPics=_refPics;
@property(retain, nonatomic) APPPostVideoViewModel *refVideo; // @synthesize refVideo=_refVideo;
@property(nonatomic) unsigned long long refTextLineNumber; // @synthesize refTextLineNumber=_refTextLineNumber;
@property(nonatomic) long long royalAssentUserId; // @synthesize royalAssentUserId=_royalAssentUserId;
@property(nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(retain, nonatomic) NSString *refUserTitle; // @synthesize refUserTitle=_refUserTitle;
@property(retain, nonatomic) NSString *refText; // @synthesize refText=_refText;
@property(retain, nonatomic) NSString *activityLink; // @synthesize activityLink=_activityLink;
@property(retain, nonatomic) NSString *activityContent; // @synthesize activityContent=_activityContent;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(nonatomic) _Bool isStarHome; // @synthesize isStarHome=_isStarHome;
@property(nonatomic) long long starComingId; // @synthesize starComingId=_starComingId;
@property(retain, nonatomic) NSAttributedString *attributedStringForRefText; // @synthesize attributedStringForRefText=_attributedStringForRefText;
@property(nonatomic) struct CGSize attributedStringSizeForRefText; // @synthesize attributedStringSizeForRefText=_attributedStringSizeForRefText;
@property(retain, nonatomic) NSAttributedString *attributedStringForActivityContent; // @synthesize attributedStringForActivityContent=_attributedStringForActivityContent;
@property(nonatomic) struct CGSize attributedStringSizeForActivityContent; // @synthesize attributedStringSizeForActivityContent=_attributedStringSizeForActivityContent;
- (void).cxx_destruct;

@end

