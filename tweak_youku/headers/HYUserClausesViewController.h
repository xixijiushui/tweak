//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HYWordDetectDelegate.h"

@class HYPreRegAuthCodeInfo, HYWordDetectTextView, NSString, UIButton, UILabel, UIView;

@interface HYUserClausesViewController : UIViewController <HYWordDetectDelegate>
{
    id <HYUserClausesViewDelegate> _delegate;
    UIView *_containerView;
    UILabel *_titleLabel;
    HYWordDetectTextView *_contentsView;
    UIButton *_closeButton;
    HYPreRegAuthCodeInfo *_info;
}

@property(retain, nonatomic) HYPreRegAuthCodeInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak HYWordDetectTextView *contentsView; // @synthesize contentsView=_contentsView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <HYUserClausesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textView:(id)arg1 didTappedWord:(id)arg2;
- (id)contentsStyle;
- (id)titleStyle;
- (id)normalTextColor;
- (id)emphasizedTextColor;
- (void)configureContentsView;
- (void)configureTitelView;
- (void)closeButtonTapped:(id)arg1;
- (void)showPrivacyPolicy;
- (void)showUserAgreement;
- (void)showWebPageWithUrl:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPreRegAuthCodeInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

