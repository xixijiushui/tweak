//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardsController.h"

#import "YKPCBubbleDelegate.h"

@class NSString, NSTimer, UIImage, UIImageView, UIView, YKJSONClient, YKPCBubbleView, YKPCFamilyAccountModel, YKPCFamilyAccountView, YKPCUserInfoView, YKPersonalCenterStatistics;

@interface YKCMSPersonalCenterCardsViewController : CardsController <YKPCBubbleDelegate>
{
    _Bool _needWaveAnimation;
    _Bool _isFetchingData;
    _Bool _isViewAppear;
    _Bool _isDark;
    _Bool _isForceDrak;
    YKPersonalCenterStatistics *_personalCenterStatistics;
    UIImage *_headCardBgImage;
    YKPCUserInfoView *_userInfoView;
    YKPCBubbleView *_bubbleView;
    YKPCFamilyAccountView *_familyAccountView;
    YKPCFamilyAccountModel *_familyAccountModel;
    NSTimer *_showfamilyAccountViewTimer;
    YKJSONClient *_mtopJSONClient;
    UIView *_topContainerView;
    UIView *_topColorView;
    UIImageView *_top1pixalImageView;
    UIImageView *_topStretchableImageView;
    UIImageView *_headCardBgImageView;
    double _topImageHeight;
    UIImage *_userImage;
    struct CGSize _titleTransitionSize;
    struct CGPoint _initialTitleOrgin;
}

@property(retain, nonatomic) UIImage *userImage; // @synthesize userImage=_userImage;
@property(nonatomic) _Bool isForceDrak; // @synthesize isForceDrak=_isForceDrak;
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(nonatomic) double topImageHeight; // @synthesize topImageHeight=_topImageHeight;
@property(retain, nonatomic) UIImageView *headCardBgImageView; // @synthesize headCardBgImageView=_headCardBgImageView;
@property(retain, nonatomic) UIImageView *topStretchableImageView; // @synthesize topStretchableImageView=_topStretchableImageView;
@property(retain, nonatomic) UIImageView *top1pixalImageView; // @synthesize top1pixalImageView=_top1pixalImageView;
@property(retain, nonatomic) UIView *topColorView; // @synthesize topColorView=_topColorView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) YKJSONClient *mtopJSONClient; // @synthesize mtopJSONClient=_mtopJSONClient;
@property(retain, nonatomic) NSTimer *showfamilyAccountViewTimer; // @synthesize showfamilyAccountViewTimer=_showfamilyAccountViewTimer;
@property(retain, nonatomic) YKPCFamilyAccountModel *familyAccountModel; // @synthesize familyAccountModel=_familyAccountModel;
@property(retain, nonatomic) YKPCFamilyAccountView *familyAccountView; // @synthesize familyAccountView=_familyAccountView;
@property(retain, nonatomic) YKPCBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) struct CGPoint initialTitleOrgin; // @synthesize initialTitleOrgin=_initialTitleOrgin;
@property(nonatomic) struct CGSize titleTransitionSize; // @synthesize titleTransitionSize=_titleTransitionSize;
@property(retain, nonatomic) YKPCUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(nonatomic) _Bool needWaveAnimation; // @synthesize needWaveAnimation=_needWaveAnimation;
@property(retain, nonatomic) UIImage *headCardBgImage; // @synthesize headCardBgImage=_headCardBgImage;
@property(retain, nonatomic) YKPersonalCenterStatistics *personalCenterStatistics; // @synthesize personalCenterStatistics=_personalCenterStatistics;
- (void).cxx_destruct;
- (id)getHeaderTableViewCell;
- (void)fetchUserCenterSelectWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)fetchDataWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)fetchDataForRefreshWithSuccess:(CDUnknownBlockType)arg1;
- (void)fetchDataFromCacheWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)swithToFamilyAccount;
- (void)closeFamilyAccountView;
- (void)hideFamilyAccountView;
- (void)showFamilyAccountView;
- (void)getFamliyAccountInfto;
- (void)removeBubble;
- (id)setupUserInfoView;
- (void)parseCards:(id)arg1;
- (void)requestCards;
- (void)reachabilityChanged:(id)arg1;
- (void)bubbleViewFrameChanged:(id)arg1;
- (void)avatarUploadSuccess:(id)arg1;
- (void)live11BannerUnsubscribe:(id)arg1;
- (_Bool)isServerCoverImg;
- (void)headerViewCellCreated:(id)arg1;
- (void)updateHeaderBGImage;
- (void)updateTopAlpha:(double)arg1;
- (void)updateStatusBarAndButtons:(_Bool)arg1;
- (void)updateTopViewsTheme;
- (void)handleUserImageChanged:(id)arg1;
- (void)changeSkin:(id)arg1;
- (void)userImageDidChange:(id)arg1;
- (void)userLoginStateDidChanged:(id)arg1;
- (void)receveReloadNoti;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

