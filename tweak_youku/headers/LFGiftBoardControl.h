//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GiftBoardViewDelegate.h"

@class LFGiftBoardView, LFGiftService, LFNewGiftNumberView, NSArray, NSString, UIView;

@interface LFGiftBoardControl : NSObject <GiftBoardViewDelegate>
{
    _Bool _ready;
    _Bool _showing;
    LFGiftService *_giftService;
    UIView *_hostView;
    NSString *_roomId;
    NSString *_outargs;
    NSString *_screenId;
    CDUnknownBlockType _didTapRecharge;
    CDUnknownBlockType _didSendGift;
    CDUnknownBlockType _didSendRedEnvelope;
    CDUnknownBlockType _didSendGiftError;
    CDUnknownBlockType _didReceiveError;
    CDUnknownBlockType _didSendGiftBoardHeight;
    CDUnknownBlockType _didSendGiftBoardDisplayStatusChange;
    CDUnknownBlockType _didLoginFromGift;
    LFNewGiftNumberView *_numberView;
    LFGiftBoardView *_giftBoardView;
    UIView *_responseView;
    NSArray *_redPacDic;
    NSString *_showID;
    NSString *_acthorId;
    long long _diyNum;
}

@property(nonatomic) long long diyNum; // @synthesize diyNum=_diyNum;
@property(copy, nonatomic) NSString *acthorId; // @synthesize acthorId=_acthorId;
@property(copy, nonatomic) NSString *showID; // @synthesize showID=_showID;
@property(retain, nonatomic) NSArray *redPacDic; // @synthesize redPacDic=_redPacDic;
@property(retain, nonatomic) UIView *responseView; // @synthesize responseView=_responseView;
@property(retain, nonatomic) LFGiftBoardView *giftBoardView; // @synthesize giftBoardView=_giftBoardView;
@property(retain, nonatomic) LFNewGiftNumberView *numberView; // @synthesize numberView=_numberView;
@property(copy, nonatomic) CDUnknownBlockType didLoginFromGift; // @synthesize didLoginFromGift=_didLoginFromGift;
@property(copy, nonatomic) CDUnknownBlockType didSendGiftBoardDisplayStatusChange; // @synthesize didSendGiftBoardDisplayStatusChange=_didSendGiftBoardDisplayStatusChange;
@property(copy, nonatomic) CDUnknownBlockType didSendGiftBoardHeight; // @synthesize didSendGiftBoardHeight=_didSendGiftBoardHeight;
@property(copy, nonatomic) CDUnknownBlockType didReceiveError; // @synthesize didReceiveError=_didReceiveError;
@property(copy, nonatomic) CDUnknownBlockType didSendGiftError; // @synthesize didSendGiftError=_didSendGiftError;
@property(copy, nonatomic) CDUnknownBlockType didSendRedEnvelope; // @synthesize didSendRedEnvelope=_didSendRedEnvelope;
@property(copy, nonatomic) CDUnknownBlockType didSendGift; // @synthesize didSendGift=_didSendGift;
@property(copy, nonatomic) CDUnknownBlockType didTapRecharge; // @synthesize didTapRecharge=_didTapRecharge;
@property(copy, nonatomic) NSString *screenId; // @synthesize screenId=_screenId;
@property(copy, nonatomic) NSString *outargs; // @synthesize outargs=_outargs;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(readonly, nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
@property(readonly, nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) LFGiftService *giftService; // @synthesize giftService=_giftService;
- (void).cxx_destruct;
- (void)giftClose;
- (void)sendBoardHeight:(double)arg1;
- (void)tagGiftSDKForYoukuNeedLogin;
- (void)tagSendStarButtonActId:(id)arg1 suc:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)tagSendPresentButton:(id)arg1 name:(id)arg2 withPresentCount:(long long)arg3 andActId:(id)arg4 coins:(long long)arg5 suc:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;
- (void)tagSendRedPacketButton:(id)arg1 suc:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)tapRechageButton;
- (void)panResopnse;
- (void)tapResponseView;
- (void)showCustomKeyBoard;
- (void)showGiftBoard;
- (void)show;
- (void)dealloc;
- (void)createGiftBoardView;
- (void)reloadPresentView;
- (void)loadRedPackets;
- (void)reloadRedPackets;
- (void)loadRedPacketsFromCache;
- (void)loadGiftConfigure;
- (void)loadGift;
- (id)initWithShowID:(id)arg1 acthorID:(id)arg2 diyNumber:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

