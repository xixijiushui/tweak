//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, YKChannelComponentButton, YKChannelFollowButton, YKSTFeedHeaderModel;

@interface YKChannelSTNavBarView : UIView
{
    long long _type;
    UIView *_backgroundView;
    YKChannelComponentButton *_componentButton;
    UILabel *_titleLabel;
    YKChannelFollowButton *_followButton;
    UILabel *_noHeaderTitleLabel;
    UIButton *_backBtn;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _shareCallback;
    CDUnknownBlockType _followCallback;
    CDUnknownBlockType _arrowCloseCallback;
    YKSTFeedHeaderModel *_headModel;
}

+ (double)barHeight;
@property(retain, nonatomic) YKSTFeedHeaderModel *headModel; // @synthesize headModel=_headModel;
@property(copy, nonatomic) CDUnknownBlockType arrowCloseCallback; // @synthesize arrowCloseCallback=_arrowCloseCallback;
@property(copy, nonatomic) CDUnknownBlockType followCallback; // @synthesize followCallback=_followCallback;
@property(copy, nonatomic) CDUnknownBlockType shareCallback; // @synthesize shareCallback=_shareCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *noHeaderTitleLabel; // @synthesize noHeaderTitleLabel=_noHeaderTitleLabel;
@property(retain, nonatomic) YKChannelFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YKChannelComponentButton *componentButton; // @synthesize componentButton=_componentButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)followClicked;
- (void)setCloseCallback:(CDUnknownBlockType)arg1 shareCallback:(CDUnknownBlockType)arg2 followCallback:(CDUnknownBlockType)arg3 arrowCloseCallback:(CDUnknownBlockType)arg4;
- (void)setModel:(id)arg1;
- (void)setNoHeaderTitle:(id)arg1;
- (void)setElementsAlpha:(double)arg1;
- (void)setupInitStatus:(long long)arg1;
- (void)backButtonClick;
- (void)createUINoHeader;
- (void)createUIWithHeader;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)height;

@end

