//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSAttributedString, NSString, YKFCommunityplayVoteCampaignServiceVoteAPI, YKFPKPlayerViewModel;

@interface YKFPKViewModel : ALMBaseViewModel
{
    _Bool _tagHidden;
    long long _voteId;
    long long _processStatus;
    long long _paticipateStatus;
    long long _numberOfLinesInTitle;
    long long _numberOfLinesInSubtitle;
    NSString *_title;
    NSString *_subTitle;
    NSString *_tag;
    YKFPKPlayerViewModel *_playerOne;
    YKFPKPlayerViewModel *_playerTwo;
    NSString *_deadline;
    NSString *_participants;
    NSString *_jumpURL;
    NSAttributedString *_attributedTitleString;
    YKFCommunityplayVoteCampaignServiceVoteAPI *_voteAPI;
    double _viewHeight;
}

+ (id)modelPropertyBlacklist;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) YKFCommunityplayVoteCampaignServiceVoteAPI *voteAPI; // @synthesize voteAPI=_voteAPI;
@property(retain, nonatomic) NSAttributedString *attributedTitleString; // @synthesize attributedTitleString=_attributedTitleString;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSString *deadline; // @synthesize deadline=_deadline;
@property(retain, nonatomic) YKFPKPlayerViewModel *playerTwo; // @synthesize playerTwo=_playerTwo;
@property(retain, nonatomic) YKFPKPlayerViewModel *playerOne; // @synthesize playerOne=_playerOne;
@property(nonatomic) _Bool tagHidden; // @synthesize tagHidden=_tagHidden;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long numberOfLinesInSubtitle; // @synthesize numberOfLinesInSubtitle=_numberOfLinesInSubtitle;
@property(nonatomic) long long numberOfLinesInTitle; // @synthesize numberOfLinesInTitle=_numberOfLinesInTitle;
@property(nonatomic) long long paticipateStatus; // @synthesize paticipateStatus=_paticipateStatus;
@property(nonatomic) long long processStatus; // @synthesize processStatus=_processStatus;
@property(nonatomic) long long voteId; // @synthesize voteId=_voteId;
- (void).cxx_destruct;
- (void)voteWithVoteId:(long long)arg1 voteOptionId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)voteWithOptionId:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (id)initWithVotePO:(id)arg1;
- (void)commonInitWithDataModel:(id)arg1;
- (void)updatePercent:(long long)arg1 num2:(long long)arg2;
- (double)calculateViewHeight;
- (double)heightOfView;

@end
