//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "YTInstallAppViewDelegate.h"

@class MPVolumeView, NSArray, NSDictionary, NSString, RInstallDeviceSheet, UIButton, UILabel, UIScrollView, UITableView, UITextField, UIView, WVWebView, YKJSONClient, YTInstallAppView, YTWirelessNetworkStatusView, YTWirelessRunningView, YTWirelessSearchingView, YoukuNavBarContentView;

@interface YTMultiscreenDevListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, YTInstallAppViewDelegate, UITextFieldDelegate>
{
    _Bool _isFromLivePage;
    _Bool _isHasViewDidLayoutSubviews;
    _Bool _mbHasSupportInstallDevices;
    _Bool _mbEnableKMInstall;
    NSString *_fromPage;
    NSDictionary *_dictData;
    YoukuNavBarContentView *_titleBar;
    UIButton *_refreshButton;
    UILabel *_topStatusLabel;
    UITableView *_tableView;
    NSArray *_itemList;
    WVWebView *_webView;
    UIView *_centerDivideView;
    YTInstallAppView *_containerInstallView;
    UIScrollView *_containerScrollView;
    MPVolumeView *_volumeView;
    YTWirelessRunningView *_runningView;
    YTWirelessSearchingView *_searchingView;
    YTWirelessNetworkStatusView *_networkStatusView;
    YKJSONClient *_jsonClient;
    NSDictionary *_mtopDataExtDic;
    NSString *_mWifiSSID;
    RInstallDeviceSheet *_installeSheet;
    UIView *_modelContainView;
    UIView *_verifyCodeContainView;
    UILabel *_verifyLabel;
    UITextField *_verifyTextView;
}

@property(retain, nonatomic) UITextField *verifyTextView; // @synthesize verifyTextView=_verifyTextView;
@property(retain, nonatomic) UILabel *verifyLabel; // @synthesize verifyLabel=_verifyLabel;
@property(retain, nonatomic) UIView *verifyCodeContainView; // @synthesize verifyCodeContainView=_verifyCodeContainView;
@property(retain, nonatomic) UIView *modelContainView; // @synthesize modelContainView=_modelContainView;
@property(nonatomic) _Bool mbEnableKMInstall; // @synthesize mbEnableKMInstall=_mbEnableKMInstall;
@property(nonatomic) _Bool mbHasSupportInstallDevices; // @synthesize mbHasSupportInstallDevices=_mbHasSupportInstallDevices;
@property(retain, nonatomic) RInstallDeviceSheet *installeSheet; // @synthesize installeSheet=_installeSheet;
@property(retain, nonatomic) NSString *mWifiSSID; // @synthesize mWifiSSID=_mWifiSSID;
@property(retain, nonatomic) NSDictionary *mtopDataExtDic; // @synthesize mtopDataExtDic=_mtopDataExtDic;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(nonatomic) _Bool isHasViewDidLayoutSubviews; // @synthesize isHasViewDidLayoutSubviews=_isHasViewDidLayoutSubviews;
@property(retain, nonatomic) YTWirelessNetworkStatusView *networkStatusView; // @synthesize networkStatusView=_networkStatusView;
@property(retain, nonatomic) YTWirelessSearchingView *searchingView; // @synthesize searchingView=_searchingView;
@property(retain, nonatomic) YTWirelessRunningView *runningView; // @synthesize runningView=_runningView;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(retain, nonatomic) YTInstallAppView *containerInstallView; // @synthesize containerInstallView=_containerInstallView;
@property(retain, nonatomic) UIView *centerDivideView; // @synthesize centerDivideView=_centerDivideView;
@property(retain, nonatomic) WVWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *topStatusLabel; // @synthesize topStatusLabel=_topStatusLabel;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) YoukuNavBarContentView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) NSDictionary *dictData; // @synthesize dictData=_dictData;
@property(copy, nonatomic) NSString *fromPage; // @synthesize fromPage=_fromPage;
@property(nonatomic) _Bool isFromLivePage; // @synthesize isFromLivePage=_isFromLivePage;
- (void).cxx_destruct;
- (void)openUrl;
- (void)install_openSheet;
- (void)appEnterForeground:(id)arg1;
- (void)onHandleReachabilityChanged:(id)arg1;
- (_Bool)isMobileNetworkOn;
- (_Bool)isWifiAPOn;
- (_Bool)isWifiOn;
- (void)requestSceneMtopInfo:(CDUnknownBlockType)arg1;
- (void)processMtopInfo:(id)arg1;
- (_Bool)isHasKMInstalledDevice;
- (_Bool)isExistsCanInstallDevice;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showAirplayDeviceListView;
- (void)selectDevice:(id)arg1;
- (void)processWirelessItem:(id)arg1;
- (id)generateWirelessItemList;
- (void)updateWirelessDeviceList;
- (void)startSearchDevice:(id)arg1;
- (void)onHandleShowAirPlayDeviceListNotification:(id)arg1;
- (void)onHandleWirelessPlayerNotification:(id)arg1;
- (void)onHandleInstallVerfiyCodeAppNotification:(id)arg1;
- (void)onHandleInstallAppNotification:(id)arg1;
- (void)onHandleRefreshAction:(id)arg1;
- (void)onHandleBackButtonAction:(id)arg1;
- (_Bool)isIphoneX;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateStatusView;
- (void)updateSubviews:(_Bool)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)showVerifyCode;
- (void)verifyCodeContainViewAction:(id)arg1;
- (void)modelContainViewAction:(id)arg1;
- (void)creatSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleForViewReady;
- (void)viewDidLayoutSubviews;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

