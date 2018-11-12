//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildSmallPlayerPlugin.h"

@class ChildPayPagModelFactory, UIButton, UIImageView, UILabel;

@interface ChildPayPlugin : ChildSmallPlayerPlugin
{
    UIImageView *_kubaoIv;
    UIButton *_midButton;
    UILabel *_loginLabel;
    ChildPayPagModelFactory *_memberFactory;
}

@property(retain, nonatomic) ChildPayPagModelFactory *memberFactory; // @synthesize memberFactory=_memberFactory;
@property(retain, nonatomic) UILabel *loginLabel; // @synthesize loginLabel=_loginLabel;
@property(retain, nonatomic) UIButton *midButton; // @synthesize midButton=_midButton;
@property(retain, nonatomic) UIImageView *kubaoIv; // @synthesize kubaoIv=_kubaoIv;
- (void).cxx_destruct;
- (void)tapBtn:(id)arg1;
- (_Bool)isVip;
- (void)willRefreshPlayer;
- (void)login:(id)arg1;
- (void)receiveMemberInfoDidChange;
- (void)appendSubView;
- (void)initViews;
- (void)setContent:(id)arg1;
- (void)refreshView;
- (void)speek;
- (void)setupSubviews;
- (void)playSceneDidChangeFromOldPlaySceneToNewPlayScene:(id)arg1;
- (void)playStateDidChangeFromOldPlayStateToNewPlayState:(id)arg1;
- (void)onChildDataLoad;
- (void)onReceived:(id)arg1;
- (void)onRun;
- (id)init;

@end

