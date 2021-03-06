//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, YKSTFeedModel;

@interface YKSTFeedEndUploaderView : UIView
{
    YKSTFeedModel *_model;
    id <YKSTFeedEndUploaderViewDelegate> _delegate;
    UIImageView *_bgImageView;
    UIView *_coverView;
    UIButton *_userIcon;
    UILabel *_userTitle;
    UILabel *_userDesc;
    UIButton *_followBtn;
    UIButton *_shareBtn;
    UIButton *_playBtn;
}

@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *userDesc; // @synthesize userDesc=_userDesc;
@property(retain, nonatomic) UILabel *userTitle; // @synthesize userTitle=_userTitle;
@property(retain, nonatomic) UIButton *userIcon; // @synthesize userIcon=_userIcon;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak id <YKSTFeedEndUploaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKSTFeedModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)statisticsUploaderClick;
- (void)statisticsEndGoHome;
- (void)clickUserIcon;
- (void)cilckPlay;
- (void)cilckShare;
- (void)cilckFollow;
- (id)miniAppName;
- (_Bool)isInPGC;
- (_Bool)isSelfPGC;
- (_Bool)isInPGCCurrentUser;
- (_Bool)isMaster;
- (void)setupFrames;
- (void)changeFollowBtnState:(long long)arg1;
- (void)userFollowStateChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

