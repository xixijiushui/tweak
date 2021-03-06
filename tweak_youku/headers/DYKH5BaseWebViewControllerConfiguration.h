//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYKH5WebViewConfiguration.h"

@class NSString, UIColor, UIFont, UIViewController;

@interface DYKH5BaseWebViewControllerConfiguration : DYKH5WebViewConfiguration
{
    _Bool _shouldShowNavigationBar;
    _Bool _showProgressBar;
    _Bool _showMoreBtn;
    _Bool _showBackBtn;
    _Bool _isAlwaysShowDefaultTitle;
    _Bool _hidesBottomBarWhenPushed;
    _Bool _shouldShowHuanmuADStyle;
    _Bool _shouldModalPresent;
    _Bool _disableUserBack;
    _Bool _enableCloseAfterPresentAppStore;
    double _navigationBarHeight;
    double _navigationBarContentTopPadding;
    double _navigationBarBottomLineHeight;
    UIColor *_navigationBarBottomLineColor;
    long long _navigationStyle;
    UIColor *_topViewBackgroundColor;
    UIColor *_progressColor;
    double _contentInsetTop;
    double _contentInsetBottom;
    UIFont *_titleFont;
    UIColor *_titleColor;
    NSString *_defaultTitle;
    UIViewController *_sourceController;
    long long _forceDeviceOrientation;
    struct CGRect _viewFrame;
}

+ (id)configurationWithActionModel:(id)arg1;
+ (id)configuration;
@property(nonatomic) _Bool enableCloseAfterPresentAppStore; // @synthesize enableCloseAfterPresentAppStore=_enableCloseAfterPresentAppStore;
@property(nonatomic) _Bool disableUserBack; // @synthesize disableUserBack=_disableUserBack;
@property(nonatomic) _Bool shouldModalPresent; // @synthesize shouldModalPresent=_shouldModalPresent;
@property(nonatomic) _Bool shouldShowHuanmuADStyle; // @synthesize shouldShowHuanmuADStyle=_shouldShowHuanmuADStyle;
@property(nonatomic) long long forceDeviceOrientation; // @synthesize forceDeviceOrientation=_forceDeviceOrientation;
@property(nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(nonatomic) _Bool hidesBottomBarWhenPushed; // @synthesize hidesBottomBarWhenPushed=_hidesBottomBarWhenPushed;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) _Bool isAlwaysShowDefaultTitle; // @synthesize isAlwaysShowDefaultTitle=_isAlwaysShowDefaultTitle;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool showBackBtn; // @synthesize showBackBtn=_showBackBtn;
@property(nonatomic) _Bool showMoreBtn; // @synthesize showMoreBtn=_showMoreBtn;
@property(nonatomic) double contentInsetBottom; // @synthesize contentInsetBottom=_contentInsetBottom;
@property(nonatomic) double contentInsetTop; // @synthesize contentInsetTop=_contentInsetTop;
@property(nonatomic) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *topViewBackgroundColor; // @synthesize topViewBackgroundColor=_topViewBackgroundColor;
@property(nonatomic) long long navigationStyle; // @synthesize navigationStyle=_navigationStyle;
@property(retain, nonatomic) UIColor *navigationBarBottomLineColor; // @synthesize navigationBarBottomLineColor=_navigationBarBottomLineColor;
@property(nonatomic) double navigationBarBottomLineHeight; // @synthesize navigationBarBottomLineHeight=_navigationBarBottomLineHeight;
@property(nonatomic) double navigationBarContentTopPadding; // @synthesize navigationBarContentTopPadding=_navigationBarContentTopPadding;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) _Bool shouldShowNavigationBar; // @synthesize shouldShowNavigationBar=_shouldShowNavigationBar;
- (void).cxx_destruct;
- (id)initWithActionModel:(id)arg1;
- (id)init;

@end

