//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, OPFlickeringLabel, UIImageView, UILabel;

@interface OPDolbyAnimationView : UIView
{
    long long _viewState;
    UIView *_finishedBackgroundView;
    UIView *_containerView;
    UIImageView *_loadingImageView;
    NSMutableArray *_loadingImageArray;
    OPFlickeringLabel *_loadingLabel;
    UILabel *_finishedLabel;
    UIImageView *_finishedMemberImageView;
}

@property(retain, nonatomic) UIImageView *finishedMemberImageView; // @synthesize finishedMemberImageView=_finishedMemberImageView;
@property(retain, nonatomic) UILabel *finishedLabel; // @synthesize finishedLabel=_finishedLabel;
@property(retain, nonatomic) OPFlickeringLabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) NSMutableArray *loadingImageArray; // @synthesize loadingImageArray=_loadingImageArray;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *finishedBackgroundView; // @synthesize finishedBackgroundView=_finishedBackgroundView;
@property(nonatomic) long long viewState; // @synthesize viewState=_viewState;
- (void).cxx_destruct;
- (void)refreshSubviews;
- (void)stopLoadingAnimate;
- (void)loadingFinished;
- (void)startLoadingAnimate;
- (void)finishLabelAnimate;
- (void)startAnimateWithFinishLabel;
- (void)dolbyFinish;
- (void)updateState:(long long)arg1;
- (void)appendSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

