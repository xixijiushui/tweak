//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKWeexViewController.h"

@class BaseLoadingView, NSDictionary, NSMutableArray, UIButton, UIControl, UILabel, UIView;

@interface YKPaymentWXViewController : YKWeexViewController
{
    UIControl *_popView;
    BaseLoadingView *_loadingView;
    UIView *_errorView;
    UILabel *_bindLabel;
    UILabel *_desbel;
    UIView *_bindView;
    UIButton *_bindButton;
    UIButton *_closeBindBtn;
    NSMutableArray *_obsevrArr;
    NSDictionary *_userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSMutableArray *obsevrArr; // @synthesize obsevrArr=_obsevrArr;
@property(retain, nonatomic) UIButton *closeBindBtn; // @synthesize closeBindBtn=_closeBindBtn;
@property(retain, nonatomic) UIButton *bindButton; // @synthesize bindButton=_bindButton;
@property(retain, nonatomic) UIView *bindView; // @synthesize bindView=_bindView;
@property(retain, nonatomic) UILabel *desbel; // @synthesize desbel=_desbel;
@property(retain, nonatomic) UILabel *bindLabel; // @synthesize bindLabel=_bindLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) BaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIControl *popView; // @synthesize popView=_popView;
- (void).cxx_destruct;
- (void)jumpToPopAd;
- (void)bindBtnEvent;
- (void)closeBindView;
- (void)showBindView;
- (void)touchPop;
- (void)showAdPopView:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)refreshWeex;
- (void)wxrender:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)changeForUser:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removePayResultNotification;
- (void)addPayResultNotification;
- (void)jumpToolsWithDict:(id)arg1;
- (void)hideNetworkErrorView;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)viewDidLoad;
- (void)registerWXSDKEngineModule;

@end

