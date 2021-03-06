//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView;

@interface YKShortViewErrorView : UIView
{
    long long _errorType;
    UIImageView *_backgroundImageView;
    UIView *_networkErrorView;
    UIView *_playErrorView;
    UIButton *_backButton;
}

+ (void)dismiss;
+ (void)showInView:(id)arg1 type:(long long)arg2;
+ (void)loadUpdate;
+ (void)deinitialize;
+ (id)sharedInstance;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *playErrorView; // @synthesize playErrorView=_playErrorView;
@property(retain, nonatomic) UIView *networkErrorView; // @synthesize networkErrorView=_networkErrorView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (void)didRefreshBtnClicked:(id)arg1;
- (void)backAction;
- (id)init;

@end

