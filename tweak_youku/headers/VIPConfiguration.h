//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, VIP_Main_ViewController, YKVIPSkinModel;

@interface VIPConfiguration : NSObject
{
    _Bool _isReloadCheckin;
    _Bool _isNewHomew;
    _Bool _isEnterBackground;
    _Bool _flowPlay;
    NSMutableArray *_cubeCardVideos;
    VIP_Main_ViewController *_vipMainVC;
    YKVIPSkinModel *_vipSkinModel;
    NSMutableArray *_exposedArray;
}

+ (_Bool)isLoginWithUserInfo;
+ (_Bool)isLogin;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *exposedArray; // @synthesize exposedArray=_exposedArray;
@property(nonatomic) _Bool flowPlay; // @synthesize flowPlay=_flowPlay;
@property(nonatomic) _Bool isEnterBackground; // @synthesize isEnterBackground=_isEnterBackground;
@property(retain, nonatomic) YKVIPSkinModel *vipSkinModel; // @synthesize vipSkinModel=_vipSkinModel;
@property(nonatomic) _Bool isNewHomew; // @synthesize isNewHomew=_isNewHomew;
@property(nonatomic) _Bool isReloadCheckin; // @synthesize isReloadCheckin=_isReloadCheckin;
@property(nonatomic) __weak VIP_Main_ViewController *vipMainVC; // @synthesize vipMainVC=_vipMainVC;
@property(retain, nonatomic) NSMutableArray *cubeCardVideos; // @synthesize cubeCardVideos=_cubeCardVideos;
- (void).cxx_destruct;

@end

