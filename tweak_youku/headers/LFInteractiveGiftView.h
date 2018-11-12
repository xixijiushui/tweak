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

@class LFAudienceAnchorRankShowItem, LFHintExtensionView, LFInteractiveCollectionFootView, LFRoomModel, NSIndexPath, NSMutableArray, NSString, NSTimer, UIButton, UICollectionView, UIImageView, UILabel, UINavigationController;

@interface LFInteractiveGiftView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIAlertViewDelegate, CAAnimationDelegate>
{
    _Bool _notFristSelect;
    LFRoomModel *_roomModel;
    LFAudienceAnchorRankShowItem *_itemObj;
    UINavigationController *_nav;
    CDUnknownBlockType _choseActorBlock;
    CDUnknownBlockType _goRecharge;
    CDUnknownBlockType _interactiveNeedLogin;
    CDUnknownBlockType _getMicFromRoom;
    UIImageView *_actorHeadImageView;
    UILabel *_actorNameLabel;
    id <InteractiveDelegate> _delegate;
    NSString *_categoryId;
    long long _roomType;
    NSString *_masterId;
    UIView *_bottomView;
    UIView *_actorView;
    UILabel *_fromLabel;
    UIImageView *_arrowImageView;
    UIButton *_sendBtn;
    UICollectionView *_giftCollectionView;
    LFHintExtensionView *_tipView;
    LFInteractiveCollectionFootView *_payView;
    NSMutableArray *_fromLabelArray;
    NSMutableArray *_sectionDataArray;
    NSMutableArray *_dataArray;
    NSIndexPath *_lastSelectCellIdx;
    id _giftObject;
    NSString *_anchorId;
    NSTimer *_timer;
    double _comboSeconds;
    long long _sendCount;
}

@property(nonatomic) long long sendCount; // @synthesize sendCount=_sendCount;
@property(nonatomic) double comboSeconds; // @synthesize comboSeconds=_comboSeconds;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(retain, nonatomic) id giftObject; // @synthesize giftObject=_giftObject;
@property(retain, nonatomic) NSIndexPath *lastSelectCellIdx; // @synthesize lastSelectCellIdx=_lastSelectCellIdx;
@property(nonatomic) _Bool notFristSelect; // @synthesize notFristSelect=_notFristSelect;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *sectionDataArray; // @synthesize sectionDataArray=_sectionDataArray;
@property(retain, nonatomic) NSMutableArray *fromLabelArray; // @synthesize fromLabelArray=_fromLabelArray;
@property(retain, nonatomic) LFInteractiveCollectionFootView *payView; // @synthesize payView=_payView;
@property(retain, nonatomic) LFHintExtensionView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UICollectionView *giftCollectionView; // @synthesize giftCollectionView=_giftCollectionView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) UIView *actorView; // @synthesize actorView=_actorView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(copy, nonatomic) NSString *masterId; // @synthesize masterId=_masterId;
@property(nonatomic) long long roomType; // @synthesize roomType=_roomType;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) __weak id <InteractiveDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *actorNameLabel; // @synthesize actorNameLabel=_actorNameLabel;
@property(retain, nonatomic) UIImageView *actorHeadImageView; // @synthesize actorHeadImageView=_actorHeadImageView;
@property(copy, nonatomic) CDUnknownBlockType getMicFromRoom; // @synthesize getMicFromRoom=_getMicFromRoom;
@property(copy, nonatomic) CDUnknownBlockType interactiveNeedLogin; // @synthesize interactiveNeedLogin=_interactiveNeedLogin;
@property(copy, nonatomic) CDUnknownBlockType goRecharge; // @synthesize goRecharge=_goRecharge;
@property(copy, nonatomic) CDUnknownBlockType choseActorBlock; // @synthesize choseActorBlock=_choseActorBlock;
@property(nonatomic) __weak UINavigationController *nav; // @synthesize nav=_nav;
@property(retain, nonatomic) LFAudienceAnchorRankShowItem *itemObj; // @synthesize itemObj=_itemObj;
@property(retain, nonatomic) LFRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)choseActorChangeFrame;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)selfShowOrHide:(_Bool)arg1;
- (void)removeFromLabel;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)playAnimation:(long long)arg1;
- (void)stopTimer;
- (void)combo;
- (void)startTimer;
- (id)getAttributedStringWithFirstStr:(id)arg1 andSize:(double)arg2 andColor:(id)arg3 WithSecondStr:(id)arg4 andSecondSize:(double)arg5 andSecondColor:(id)arg6;
- (void)reloadFoot;
- (void)updateStatus;
- (void)initialDatas;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)sendGift;
- (void)tapActor;
- (void)registerSome;
- (void)setUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
