//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class LFGiftBoardStarCell, LFGiftCollectionViewLayout, LFGiftNumberBoardView, LFNewGiftNumberView, LFRadarAnnularView, LFSendGiftComboView, NSArray, NSIndexPath, NSMutableArray, NSString, NSTimer, UIButton, UICollectionView, UIImageView, UILabel, UIPageControl, UIScrollView;

@interface LFGiftBoardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIAlertViewDelegate, CAAnimationDelegate>
{
    _Bool _isShow;
    _Bool _numDiyBoardShow;
    _Bool _notFristSelect;
    _Bool _lastIsRed;
    _Bool _lastIsStar;
    _Bool _starEnable;
    _Bool _alertShow;
    _Bool _isiPhoneX;
    id <GiftBoardViewDelegate> _presentDelegate;
    CDUnknownBlockType _keyboardBlock;
    UILabel *_countLabel;
    UIScrollView *_giftBoardBGView;
    UIView *_topView;
    long long _diyNum;
    NSString *_acthorID;
    UIView *_bgView;
    UILabel *_topTagLabel;
    UICollectionView *_giftBoardView;
    UIView *_bottomView;
    LFGiftCollectionViewLayout *_layout;
    UIPageControl *_pageControl;
    UILabel *_coinNumLabel;
    UIButton *_payBtn;
    UILabel *_fromLabel;
    UIButton *_sendBtn;
    UIView *_countView;
    UIImageView *_tipsView;
    UIImageView *_countArrowImgView;
    LFGiftBoardStarCell *_starCell;
    LFSendGiftComboView *_sendComboView;
    LFRadarAnnularView *_radarView;
    LFGiftNumberBoardView *_numBoard;
    LFNewGiftNumberView *_numberView;
    UIView *_iPhoneXGapView;
    NSMutableArray *_dataArray;
    NSMutableArray *_giftTypeArray;
    NSMutableArray *_sectionItemNumArray;
    NSMutableArray *_liveHouseSectionItemNumArray;
    NSMutableArray *_sectionNameArray;
    NSMutableArray *_topBtnArray;
    NSMutableArray *_sectionPageArray;
    NSMutableArray *_sectionStartPageArray;
    NSMutableArray *_segmentInfoArray;
    NSMutableArray *_fromLabelArray;
    NSArray *_redPackets;
    NSIndexPath *_lastSelectCellIdx;
    long long _lastIdx;
    id _giftObject;
    long long _needPrice;
    NSTimer *_timer;
    long long _comboSeconds;
    long long _sendCount;
    double _sendGiftTime;
    double _now;
    NSString *_allGiftId;
}

@property(copy, nonatomic) NSString *allGiftId; // @synthesize allGiftId=_allGiftId;
@property(nonatomic) _Bool isiPhoneX; // @synthesize isiPhoneX=_isiPhoneX;
@property(nonatomic) double now; // @synthesize now=_now;
@property(nonatomic) double sendGiftTime; // @synthesize sendGiftTime=_sendGiftTime;
@property(nonatomic) long long sendCount; // @synthesize sendCount=_sendCount;
@property(nonatomic) long long comboSeconds; // @synthesize comboSeconds=_comboSeconds;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long needPrice; // @synthesize needPrice=_needPrice;
@property(retain, nonatomic) id giftObject; // @synthesize giftObject=_giftObject;
@property(nonatomic) _Bool alertShow; // @synthesize alertShow=_alertShow;
@property(nonatomic) _Bool starEnable; // @synthesize starEnable=_starEnable;
@property(nonatomic) _Bool lastIsStar; // @synthesize lastIsStar=_lastIsStar;
@property(nonatomic) _Bool lastIsRed; // @synthesize lastIsRed=_lastIsRed;
@property(nonatomic) long long lastIdx; // @synthesize lastIdx=_lastIdx;
@property(retain, nonatomic) NSIndexPath *lastSelectCellIdx; // @synthesize lastSelectCellIdx=_lastSelectCellIdx;
@property(nonatomic) _Bool notFristSelect; // @synthesize notFristSelect=_notFristSelect;
@property(retain, nonatomic) NSArray *redPackets; // @synthesize redPackets=_redPackets;
@property(retain, nonatomic) NSMutableArray *fromLabelArray; // @synthesize fromLabelArray=_fromLabelArray;
@property(retain, nonatomic) NSMutableArray *segmentInfoArray; // @synthesize segmentInfoArray=_segmentInfoArray;
@property(retain, nonatomic) NSMutableArray *sectionStartPageArray; // @synthesize sectionStartPageArray=_sectionStartPageArray;
@property(retain, nonatomic) NSMutableArray *sectionPageArray; // @synthesize sectionPageArray=_sectionPageArray;
@property(retain, nonatomic) NSMutableArray *topBtnArray; // @synthesize topBtnArray=_topBtnArray;
@property(retain, nonatomic) NSMutableArray *sectionNameArray; // @synthesize sectionNameArray=_sectionNameArray;
@property(retain, nonatomic) NSMutableArray *liveHouseSectionItemNumArray; // @synthesize liveHouseSectionItemNumArray=_liveHouseSectionItemNumArray;
@property(retain, nonatomic) NSMutableArray *sectionItemNumArray; // @synthesize sectionItemNumArray=_sectionItemNumArray;
@property(retain, nonatomic) NSMutableArray *giftTypeArray; // @synthesize giftTypeArray=_giftTypeArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIView *iPhoneXGapView; // @synthesize iPhoneXGapView=_iPhoneXGapView;
@property(retain, nonatomic) LFNewGiftNumberView *numberView; // @synthesize numberView=_numberView;
@property(retain, nonatomic) LFGiftNumberBoardView *numBoard; // @synthesize numBoard=_numBoard;
@property(retain, nonatomic) LFRadarAnnularView *radarView; // @synthesize radarView=_radarView;
@property(retain, nonatomic) LFSendGiftComboView *sendComboView; // @synthesize sendComboView=_sendComboView;
@property(retain, nonatomic) LFGiftBoardStarCell *starCell; // @synthesize starCell=_starCell;
@property(retain, nonatomic) UIImageView *countArrowImgView; // @synthesize countArrowImgView=_countArrowImgView;
@property(retain, nonatomic) UIImageView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UILabel *coinNumLabel; // @synthesize coinNumLabel=_coinNumLabel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) LFGiftCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UICollectionView *giftBoardView; // @synthesize giftBoardView=_giftBoardView;
@property(retain, nonatomic) UILabel *topTagLabel; // @synthesize topTagLabel=_topTagLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) NSString *acthorID; // @synthesize acthorID=_acthorID;
@property(nonatomic) long long diyNum; // @synthesize diyNum=_diyNum;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIScrollView *giftBoardBGView; // @synthesize giftBoardBGView=_giftBoardBGView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) _Bool numDiyBoardShow; // @synthesize numDiyBoardShow=_numDiyBoardShow;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) CDUnknownBlockType keyboardBlock; // @synthesize keyboardBlock=_keyboardBlock;
@property(nonatomic) __weak id <GiftBoardViewDelegate> presentDelegate; // @synthesize presentDelegate=_presentDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeFromLabel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)playAnimation:(long long)arg1;
- (void)stopTimer;
- (void)combo;
- (void)startTimer;
- (void)reloadPresentData:(id)arg1 acthorID:(id)arg2 diyNum:(long long)arg3 redPac:(id)arg4;
- (void)closeGiftView;
- (void)numberBoardHideGiftBoardShow;
- (void)giftBoardShow;
- (void)numBoardHideAndShowKeyBoard;
- (void)numBoardShow;
- (void)tapGiftCount;
- (void)sendGiftSuccessDeleteCoins;
- (void)updateCoinsMethod;
- (void)updateCoinsNum;
- (void)updateBottomBarStatus;
- (void)topBtnClick:(id)arg1;
- (void)tapRechargeButton:(id)arg1;
- (void)showSdkForYoukuLoginAlert;
- (void)sendGiftAction;
- (void)sendBtnChangeSendComboView:(_Bool)arg1;
- (void)sendGift;
- (void)btnLong:(id)arg1;
- (id)__getOctalArrayWithNumber:(long long)arg1;
- (id)__getLiveHouseOctalArrayWithNumber:(long long)arg1;
- (void)processPageData;
- (void)processSectionItemData;
- (id)arrayScreen:(id)arg1;
- (void)addDataReload;
- (void)loadAllPresentDatas:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)arrayIndexWithSection:(long long)arg1 item:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)putTopBtn;
- (void)showTips;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showNotEnoughCoinsAlert;
- (void)addViews;
- (void)addNotif;
- (id)initWithNeedData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

