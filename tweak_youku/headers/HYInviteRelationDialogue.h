//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYBaseDialogueView.h"

#import "HYCountDownTimeDelegate.h"
#import "HYCountryListDelegate.h"
#import "HYDialogueProtocol.h"

@class HYDialogueButtonView, HYDialogueCountryCodeView, HYDialogueMobileView, HYDialogueTitleView, HYFamilyRelation, HYUserSDKCountryEntity, NSString;

@interface HYInviteRelationDialogue : HYBaseDialogueView <HYCountryListDelegate, HYCountDownTimeDelegate, HYDialogueProtocol>
{
    _Bool _hasInputMobile;
    CDUnknownBlockType _invitedSussess;
    CDUnknownBlockType _invitedFailure;
    HYDialogueTitleView *_titleView;
    HYDialogueCountryCodeView *_countryView;
    HYDialogueMobileView *_mobileView;
    HYDialogueButtonView *_submitView;
    HYUserSDKCountryEntity *_region;
    HYFamilyRelation *_familyRelation;
}

@property(nonatomic) _Bool hasInputMobile; // @synthesize hasInputMobile=_hasInputMobile;
@property(retain, nonatomic) HYFamilyRelation *familyRelation; // @synthesize familyRelation=_familyRelation;
@property(retain, nonatomic) HYUserSDKCountryEntity *region; // @synthesize region=_region;
@property(retain, nonatomic) HYDialogueButtonView *submitView; // @synthesize submitView=_submitView;
@property(retain, nonatomic) HYDialogueMobileView *mobileView; // @synthesize mobileView=_mobileView;
@property(retain, nonatomic) HYDialogueCountryCodeView *countryView; // @synthesize countryView=_countryView;
@property(retain, nonatomic) HYDialogueTitleView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) CDUnknownBlockType invitedFailure; // @synthesize invitedFailure=_invitedFailure;
@property(copy, nonatomic) CDUnknownBlockType invitedSussess; // @synthesize invitedSussess=_invitedSussess;
- (void).cxx_destruct;
- (void)analytic_InputText;
- (id)extendDict;
- (id)pageName;
- (id)spm;
- (void)closeButtonTapped;
- (_Bool)disableEdge;
- (double)dialogueWidth;
- (double)dialogueHeight;
- (void)handleTextFieldDidChanged;
- (void)sentSmsCodeSuccessfully;
- (void)failedToSendSmsCodeWithError:(id)arg1;
- (void)sendSMSWithCodeType:(id)arg1 mobileNumber:(id)arg2 regionCode:(id)arg3 bizExtData:(id)arg4 AndChallengeResulut:(id)arg5;
- (void)showCountryList;
- (void)countryEntityIsSelected:(id)arg1;
- (void)setRelation:(id)arg1;
- (void)sendSMSCode;
- (void)submitButtonTap;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundImageUrl;
@property(copy, nonatomic) NSString *closeIconImageUrl;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HYDialogueContainerViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
