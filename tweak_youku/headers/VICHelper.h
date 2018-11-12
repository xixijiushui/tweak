//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICContainerSubModule.h"

@class NSMutableArray, NSTimer, UIButton, UILabel, UISwitch, UITextView, UIView, VICInteractionData;

@interface VICHelper : VICContainerSubModule
{
    VICInteractionData *_interactionData;
    double _videoDuration;
    NSTimer *_checkADTimer;
    NSTimer *_hideEntryTimer;
    UIView *_rootView;
    UIView *_entryView;
    UIButton *_switchBtn;
    NSMutableArray *_btns;
    UILabel *_timeLable;
    UISwitch *_swtichCtr;
    UITextView *_dataTextField;
}

@property(retain, nonatomic) UITextView *dataTextField; // @synthesize dataTextField=_dataTextField;
@property(retain, nonatomic) UISwitch *swtichCtr; // @synthesize swtichCtr=_swtichCtr;
@property(retain, nonatomic) UILabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain, nonatomic) NSMutableArray *btns; // @synthesize btns=_btns;
@property(retain, nonatomic) UIButton *switchBtn; // @synthesize switchBtn=_switchBtn;
@property(retain, nonatomic) UIView *entryView; // @synthesize entryView=_entryView;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) NSTimer *hideEntryTimer; // @synthesize hideEntryTimer=_hideEntryTimer;
@property(retain, nonatomic) NSTimer *checkADTimer; // @synthesize checkADTimer=_checkADTimer;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) VICInteractionData *interactionData; // @synthesize interactionData=_interactionData;
- (void).cxx_destruct;
- (id)getFormatTime:(long long)arg1;
- (id)imageWithColor:(id)arg1;
- (id)getPointView:(id)arg1;
- (void)clearAll;
- (void)onTextFieldTap:(id)arg1;
- (void)showStageData:(long long)arg1;
- (void)hideTimeLable;
- (void)showTimeLable:(id)arg1;
- (void)onStageBtnDragOut:(id)arg1;
- (void)onStageBtnHold:(id)arg1;
- (void)onStageBtnClick:(id)arg1;
- (void)setupViews;
- (void)showHideRootView;
- (void)onEntryViewTaped:(id)arg1;
- (void)onHideEntryTimer;
- (void)clearEntryTimer;
- (void)setupEntryView;
- (void)clearCheckADTimer;
- (void)onCheckADTimer;
- (void)stop;
- (void)start;

@end
