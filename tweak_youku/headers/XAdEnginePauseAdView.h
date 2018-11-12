//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class CAGradientLayer, NSBlockOperation, NSString, UIButton, UIControl, UIImageView, UILabel, UITapGestureRecognizer, XAdMarkView;

@interface XAdEnginePauseAdView : UIView <UIGestureRecognizerDelegate>
{
    UIButton *_closeButton;
    UIButton *_muteButton;
    UIControl *_replayButton;
    UIView *_containerView;
    UIControl *_replayView;
    UITapGestureRecognizer *_tapGesture;
    double _pause_width;
    double _pause_Height;
    _Bool _isLive;
    _Bool _isFullScreen;
    _Bool _isShowWatchList;
    id <XAdEngineContentAdViewDelegate> _contentAdViewDelegate;
    UIView *_contentView;
    long long _adContentType;
    UIView *_goWatchContainer;
    UIImageView *_goWatchImageView;
    UILabel *_goWatchDescLabel;
    UIView *_addWatchListContainer;
    UIImageView *_addWatchListImageView;
    UILabel *_addWatchListLabel;
    UITapGestureRecognizer *_addWatchListGesture;
    UIView *_watchListCover;
    CAGradientLayer *_watchListGradient;
    NSBlockOperation *_showAddSusTipsOperation;
    XAdMarkView *_descLabel;
    XAdMarkView *_dspLabel;
    UIView *_descContainer;
}

@property(retain, nonatomic) UIView *descContainer; // @synthesize descContainer=_descContainer;
@property(retain, nonatomic) XAdMarkView *dspLabel; // @synthesize dspLabel=_dspLabel;
@property(retain, nonatomic) XAdMarkView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSBlockOperation *showAddSusTipsOperation; // @synthesize showAddSusTipsOperation=_showAddSusTipsOperation;
@property(retain, nonatomic) CAGradientLayer *watchListGradient; // @synthesize watchListGradient=_watchListGradient;
@property(retain, nonatomic) UIView *watchListCover; // @synthesize watchListCover=_watchListCover;
@property(retain, nonatomic) UITapGestureRecognizer *addWatchListGesture; // @synthesize addWatchListGesture=_addWatchListGesture;
@property(retain, nonatomic) UILabel *addWatchListLabel; // @synthesize addWatchListLabel=_addWatchListLabel;
@property(retain, nonatomic) UIImageView *addWatchListImageView; // @synthesize addWatchListImageView=_addWatchListImageView;
@property(retain, nonatomic) UIView *addWatchListContainer; // @synthesize addWatchListContainer=_addWatchListContainer;
@property(retain, nonatomic) UILabel *goWatchDescLabel; // @synthesize goWatchDescLabel=_goWatchDescLabel;
@property(retain, nonatomic) UIImageView *goWatchImageView; // @synthesize goWatchImageView=_goWatchImageView;
@property(retain, nonatomic) UIView *goWatchContainer; // @synthesize goWatchContainer=_goWatchContainer;
@property(nonatomic) _Bool isShowWatchList; // @synthesize isShowWatchList=_isShowWatchList;
@property(nonatomic) long long adContentType; // @synthesize adContentType=_adContentType;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <XAdEngineContentAdViewDelegate> contentAdViewDelegate; // @synthesize contentAdViewDelegate=_contentAdViewDelegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addFavoriteTapAction:(id)arg1;
- (void)replayTapped;
- (void)adviewClicked;
- (void)muteBtnTapped;
- (void)closeBtnTapped;
- (void)showWatchListView;
- (void)hideWatchListView;
- (void)setWatchListViewHidden:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)showReplay:(_Bool)arg1;
- (void)showMute:(_Bool)arg1;
- (void)setAvailable:(_Bool)arg1;
- (void)resetContentSize:(struct CGSize)arg1;
- (void)updateDspName:(id)arg1;
- (void)updateAdContentView:(id)arg1 AdType:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutWatchListPhoneUIs;
- (void)layoutWatchListPadUIs;
- (void)layoutWatchListUIs;
- (void)reorderViews;
- (void)layoutPadUIs;
- (void)layoutPhoneUIs;
- (void)layoutUIs;
- (void)loadPadUIs;
- (void)loadPhoneUIs;
- (void)loadUIs;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
