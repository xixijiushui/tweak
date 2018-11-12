//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBCPostCardViewModel.h"

#import "APBCFooterViewModelProtocol.h"
#import "APBCHeaderViewModelProtocol.h"
#import "APBCPostBrandHeaderViewVM.h"

@class APBCHeaderOptionViewModel, APBCInformOptionViewModel, NSArray, NSAttributedString, NSDictionary, NSString, TTFFandomService;

@interface APBCPostCardGeneralViewModel : APBCPostCardViewModel <APBCPostBrandHeaderViewVM, APBCHeaderViewModelProtocol, APBCFooterViewModelProtocol>
{
    APBCHeaderOptionViewModel *_headerOptionViewModel;
    APBCInformOptionViewModel *_informOptionViewModel;
    NSAttributedString *_fromFandomName;
    TTFFandomService *_fandomService;
    NSArray *_relativeInfos;
    NSDictionary *_relativeDict;
    NSDictionary *_fandomsDict;
    struct CGSize _fromFandomNameSize;
}

@property(retain, nonatomic) NSDictionary *fandomsDict; // @synthesize fandomsDict=_fandomsDict;
@property(retain, nonatomic) NSDictionary *relativeDict; // @synthesize relativeDict=_relativeDict;
@property(retain, nonatomic) NSArray *relativeInfos; // @synthesize relativeInfos=_relativeInfos;
@property(retain, nonatomic) TTFFandomService *fandomService; // @synthesize fandomService=_fandomService;
@property(nonatomic) struct CGSize fromFandomNameSize; // @synthesize fromFandomNameSize=_fromFandomNameSize;
@property(retain, nonatomic) NSAttributedString *fromFandomName; // @synthesize fromFandomName=_fromFandomName;
- (void).cxx_destruct;
- (void)routeToPostDetailPage;
- (id)publishTimeString;
- (id)publisherName;
- (id)publisherAvatarUrl;
- (void)excuteExtensionInfoClickedAction;
- (id)extensionInfoString;
- (void)joinToCommunity;
- (void)_doJoinToCommunity;
- (_Bool)isJoined;
- (id)recommendInfo;
- (void)routeToFandomHomepage;
- (long long)fandomContentNum;
- (long long)fandomMemberNum;
- (id)fandomInfo;
- (id)fandomName;
- (id)fandomAvatarUrl;
- (void)routeToPersonalHomepage;
- (void)excellentClickReport;
- (void)achievementClickReport;
- (void)updateDataForKey:(id)arg1 value:(id)arg2;
- (id)dramaInfoURL;
- (id)dramaInfoImage;
- (id)dramaInfoTitle;
- (_Bool)hideBottomLine;
- (long long)praiseType;
- (long long)praiseCount;
- (long long)bizId;
- (_Bool)isPraised;
- (id)displayCommentCountString;
- (id)displayPraiseCountString;
- (int)fandomType;
- (void)goToFromFandomPage;
- (void)clickedActionWithRelativeInfo:(id)arg1;
- (_Bool)isVideoPostInReview;
- (_Bool)isOptionMenuHidden;
- (id)userMedalLinkUrl;
- (id)userMedalImageUrl;
- (_Bool)isExcellentPost;
- (long long)objectType;
- (long long)bizIdForHeaderView;
- (_Bool)isVisitedByStar;
- (_Bool)isPostByArtist;
- (long long)postCardType;
- (id)medalImageUrl;
- (id)nameplate;
- (_Bool)levelImageHidden;
- (id)levelImageUrl;
- (id)manageGroupImageUrl;
- (long long)userLevel;
- (id)joinImageUrl;
- (_Bool)isJoin;
- (_Bool)canGotoPersonalPage;
- (long long)fandomId;
- (id)informOptionViewModel;
- (id)headerOptionViewModel;
- (_Bool)isPostByLoginUser;
- (id)viewCountString;
- (id)avatarSchemeURL;
- (id)recommendReason;
- (id)displayTimeString;
- (id)posterName;
- (long long)fansIdentity;
- (long long)userIdentify;
- (id)avatarUrl;
- (id)apbc_brandDecorateImageName;
- (id)apbc_brandImageName;

// Remaining properties
@property(retain, nonatomic) NSAttributedString *attributedString;
@property(nonatomic) struct CGSize attributedStringSize;
@property(retain, nonatomic) NSAttributedString *attributedTitleString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double postContentHeight;
@property(readonly) Class superclass;
@property(nonatomic) long long titleHeight;

@end
