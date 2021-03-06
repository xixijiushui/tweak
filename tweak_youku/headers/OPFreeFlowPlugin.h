//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class OPLayoutModel, UIImageView;

@interface OPFreeFlowPlugin : OPPlugin
{
    OPLayoutModel *_moduleLayout;
    _Bool _isWillShow;
    long long _alertTrafficType;
    UIImageView *_mobileImageView;
    UIImageView *_unicomImageView;
    UIImageView *_telecomImageView;
    long long _carrierType;
}

@property(nonatomic) long long carrierType; // @synthesize carrierType=_carrierType;
@property(retain, nonatomic) UIImageView *telecomImageView; // @synthesize telecomImageView=_telecomImageView;
@property(retain, nonatomic) UIImageView *unicomImageView; // @synthesize unicomImageView=_unicomImageView;
@property(retain, nonatomic) UIImageView *mobileImageView; // @synthesize mobileImageView=_mobileImageView;
@property(nonatomic) long long alertTrafficType; // @synthesize alertTrafficType=_alertTrafficType;
- (void).cxx_destruct;
- (void)removeModuleTask;
- (void)refreshMobileSubviews;
- (void)refreshSubviews;
- (void)appendModuleTask;
- (void)setupModuleTask;
- (void)receiveNetworkStateDidChange;
- (void)preparePlayFreeFlowVideo:(_Bool)arg1;
- (void)playModeIsChangingFrom;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

@end

