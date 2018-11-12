//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTFSignInResultCardViewModelProtocol.h"

@class NSString, YKFCommunitybaseUserConfigServiceOnOffSignRemindCfgAPI;

@interface TTFSignInResultCardViewItem : NSObject <TTFSignInResultCardViewModelProtocol>
{
    _Bool _remindOn;
    id <TTFSignInCardViewModelProtocol> _cardItem;
    id <TTFSignInInfoBoardViewModelProtocol> _signInfo;
    long long _signInDays;
    long long _EXP;
    long long _starlight;
    NSString *_fandomShareUrl;
    long long _fandomId;
    long long _sourceType;
    long long _defaultStatus;
    YKFCommunitybaseUserConfigServiceOnOffSignRemindCfgAPI *_api;
}

@property(retain, nonatomic) YKFCommunitybaseUserConfigServiceOnOffSignRemindCfgAPI *api; // @synthesize api=_api;
@property(nonatomic, getter=ykf_defaultStatus) long long defaultStatus; // @synthesize defaultStatus=_defaultStatus;
@property(nonatomic, getter=ykf_sourceType) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic, getter=ykf_remindOn) _Bool remindOn; // @synthesize remindOn=_remindOn;
@property(nonatomic, getter=ykf_fandomId) long long fandomId; // @synthesize fandomId=_fandomId;
@property(copy, nonatomic, getter=ykf_fandomShareUrl) NSString *fandomShareUrl; // @synthesize fandomShareUrl=_fandomShareUrl;
@property(nonatomic, getter=ykf_starlight) long long starlight; // @synthesize starlight=_starlight;
@property(nonatomic, getter=ykf_EXP) long long EXP; // @synthesize EXP=_EXP;
@property(nonatomic, getter=ykf_signInDays) long long signInDays; // @synthesize signInDays=_signInDays;
@property(retain, nonatomic, getter=ykf_signInfo) id <TTFSignInInfoBoardViewModelProtocol> signInfo; // @synthesize signInfo=_signInfo;
@property(retain, nonatomic, getter=ykf_cardItem) id <TTFSignInCardViewModelProtocol> cardItem; // @synthesize cardItem=_cardItem;
- (void).cxx_destruct;
- (void)ykf_toggleRemindSwitch:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
