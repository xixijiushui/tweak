//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UIViewController;

@interface XAdEngineImageAdView : UIView
{
    _Bool mLocal;
    int mDuration;
    id <XAdEngineImageAdViewDelegate> mDelegate;
    unsigned long long mAdSource;
    NSString *mClickURL;
    UIImageView *mYoukuImageView;
    NSString *_mAdContentURL;
    UIViewController *_mRootViewController;
    struct CGRect _mAdFrame;
}

@property(nonatomic) struct CGRect mAdFrame; // @synthesize mAdFrame=_mAdFrame;
@property(retain, nonatomic) UIViewController *mRootViewController; // @synthesize mRootViewController=_mRootViewController;
@property(copy, nonatomic) NSString *mAdContentURL; // @synthesize mAdContentURL=_mAdContentURL;
@property(retain, nonatomic) UIImageView *youkuImageView; // @synthesize youkuImageView=mYoukuImageView;
@property(nonatomic) _Bool local; // @synthesize local=mLocal;
@property(nonatomic) int duration; // @synthesize duration=mDuration;
@property(nonatomic) __weak NSString *clickURL; // @synthesize clickURL=mClickURL;
@property(nonatomic) unsigned long long adSource; // @synthesize adSource=mAdSource;
@property(nonatomic) __weak id <XAdEngineImageAdViewDelegate> delegate; // @synthesize delegate=mDelegate;
- (void).cxx_destruct;
- (void)adviewRequestTimeOut;
- (void)adviewClicked;
- (void)adviewClosed;
- (void)adviewShowFailure;
- (void)adviewShowSuccess;
- (void)adviewRequesting;
- (void)loadFooterOfPad;
- (void)loadFooterOfPhone;

@end

