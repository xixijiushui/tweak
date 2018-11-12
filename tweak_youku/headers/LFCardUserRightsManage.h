//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class LFCard, NSString, UIView;

@interface LFCardUserRightsManage : NSObject <UIActionSheetDelegate, UIAlertViewDelegate>
{
    CDUnknownBlockType _banClick;
    CDUnknownBlockType _unBanClick;
    CDUnknownBlockType _becomeAdminClick;
    CDUnknownBlockType _cancelAdminClick;
    CDUnknownBlockType _kickoutClick;
    CDUnknownBlockType _unKickoutClick;
    CDUnknownBlockType _tickGlobalClick;
    CDUnknownBlockType _forceStopActionClick;
    NSString *_authorID;
    UIView *_displayView;
    LFCard *_card;
}

+ (id)cardUserRightsManageWithAuthorID:(id)arg1 displayToView:(id)arg2;
@property(retain, nonatomic) LFCard *card; // @synthesize card=_card;
@property(nonatomic) __weak UIView *displayView; // @synthesize displayView=_displayView;
@property(copy, nonatomic) NSString *authorID; // @synthesize authorID=_authorID;
@property(copy, nonatomic) CDUnknownBlockType forceStopActionClick; // @synthesize forceStopActionClick=_forceStopActionClick;
@property(copy, nonatomic) CDUnknownBlockType tickGlobalClick; // @synthesize tickGlobalClick=_tickGlobalClick;
@property(copy, nonatomic) CDUnknownBlockType unKickoutClick; // @synthesize unKickoutClick=_unKickoutClick;
@property(copy, nonatomic) CDUnknownBlockType kickoutClick; // @synthesize kickoutClick=_kickoutClick;
@property(copy, nonatomic) CDUnknownBlockType cancelAdminClick; // @synthesize cancelAdminClick=_cancelAdminClick;
@property(copy, nonatomic) CDUnknownBlockType becomeAdminClick; // @synthesize becomeAdminClick=_becomeAdminClick;
@property(copy, nonatomic) CDUnknownBlockType unBanClick; // @synthesize unBanClick=_unBanClick;
@property(copy, nonatomic) CDUnknownBlockType banClick; // @synthesize banClick=_banClick;
- (void).cxx_destruct;
- (double)_secondsWithString:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)_forceStopActionSheet;
- (id)_kickOutAtionSheet;
- (id)_banUserAtionSheet;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showUserRightsSheetViewWithCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

