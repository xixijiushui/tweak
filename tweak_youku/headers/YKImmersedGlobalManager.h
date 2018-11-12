//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, YKSTFeedModel;

@interface YKImmersedGlobalManager : NSObject
{
    YKSTFeedModel *_firstModel;
    YKSTFeedModel *_moreSplitLineModel;
    double _statusBarHeight;
    NSDictionary *_lastClickedExtend;
    NSDictionary *_vvClickedExtend;
    struct CGSize _portraitScreenSize;
    struct CGSize _portraitPlayerSize;
    struct CGRect _lightOnRect;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *vvClickedExtend; // @synthesize vvClickedExtend=_vvClickedExtend;
@property(copy, nonatomic) NSDictionary *lastClickedExtend; // @synthesize lastClickedExtend=_lastClickedExtend;
@property(nonatomic) struct CGSize portraitPlayerSize; // @synthesize portraitPlayerSize=_portraitPlayerSize;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) struct CGRect lightOnRect; // @synthesize lightOnRect=_lightOnRect;
@property(nonatomic) struct CGSize portraitScreenSize; // @synthesize portraitScreenSize=_portraitScreenSize;
@property(nonatomic) __weak YKSTFeedModel *moreSplitLineModel; // @synthesize moreSplitLineModel=_moreSplitLineModel;
@property(nonatomic) __weak YKSTFeedModel *firstModel; // @synthesize firstModel=_firstModel;
- (void).cxx_destruct;
- (void)verifyVvClickedExtend;
- (void)fetchLastAnalyticInfo;
- (void)resetAnalyticInfo;
- (_Bool)isWWAN;
- (_Bool)isWifi;
- (_Bool)isReachable;
@property(readonly, nonatomic) double screenH;
@property(readonly, nonatomic) double screenW;
@property(readonly, nonatomic) double moreSplitLineHeight;
@property(readonly, nonatomic) double bottomBarInteractionHeight;
@property(readonly, nonatomic) double bottomBarRecmdHeight2;
@property(readonly, nonatomic) double bottomBarTopInsection2;
@property(readonly, nonatomic) double spaceBetweenRecmdAndInteraction2;
@property(readonly, nonatomic) double bottomBarRecmdHeight1;
@property(readonly, nonatomic) double bottomBarTopInsection1;
@property(readonly, nonatomic) double spaceBetweenRecmdAndInteraction1;
@property(readonly, nonatomic) double topHeight;

@end

