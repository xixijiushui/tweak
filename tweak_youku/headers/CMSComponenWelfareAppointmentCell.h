//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CMSComponentCellProtocol.h"

@class CAGradientLayer, CMSCardVideo, NSDictionary, NSString, NSTimer, UIButton, UIControl, UILabel, UIView, VIPCMSComponentContext, VIPReserveManager;

@interface CMSComponenWelfareAppointmentCell : UITableViewCell <CMSComponentCellProtocol>
{
    CMSCardVideo *_model;
    VIPCMSComponentContext *_componentContext;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_overLabel;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UILabel *_secondLabel;
    UILabel *_colon1;
    UILabel *_colon2;
    UILabel *_daysLabel;
    UIControl *_containView;
    UIButton *_appointBtn;
    UIView *_btnBackView;
    CAGradientLayer *_btnGradientLayer;
    NSDictionary *_action;
    NSTimer *_timer;
    NSString *_vmp;
    long long _btnStatus;
    long long _appointStatus;
    VIPReserveManager *_reserveManager;
}

@property(nonatomic) __weak VIPReserveManager *reserveManager; // @synthesize reserveManager=_reserveManager;
@property(nonatomic) long long appointStatus; // @synthesize appointStatus=_appointStatus;
@property(nonatomic) long long btnStatus; // @synthesize btnStatus=_btnStatus;
@property(copy, nonatomic) NSString *vmp; // @synthesize vmp=_vmp;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(retain, nonatomic) CAGradientLayer *btnGradientLayer; // @synthesize btnGradientLayer=_btnGradientLayer;
@property(retain, nonatomic) UIView *btnBackView; // @synthesize btnBackView=_btnBackView;
@property(retain, nonatomic) UIButton *appointBtn; // @synthesize appointBtn=_appointBtn;
@property(retain, nonatomic) UIControl *containView; // @synthesize containView=_containView;
@property(retain, nonatomic) UILabel *daysLabel; // @synthesize daysLabel=_daysLabel;
@property(retain, nonatomic) UILabel *colon2; // @synthesize colon2=_colon2;
@property(retain, nonatomic) UILabel *colon1; // @synthesize colon1=_colon1;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *overLabel; // @synthesize overLabel=_overLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VIPCMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) CMSCardVideo *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshReservation;
- (void)refreshReservation:(id)arg1;
- (void)didSelectSubscriSuccess:(id)arg1 action:(id)arg2;
- (void)appoint:(id)arg1 action:(id)arg2;
- (void)appointContainClicked:(id)arg1;
- (void)appointBtnClicked:(id)arg1;
- (void)fitSubViews;
- (void)setupSubViews;
- (void)setupModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
