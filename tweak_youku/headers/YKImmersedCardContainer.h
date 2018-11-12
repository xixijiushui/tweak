//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSTFeedContainer.h"

@class UIView, YKImmersedGlobalManager, YKSTFeedsManager, YKimmersedMoreSplitLine;

@interface YKImmersedCardContainer : YKSTFeedContainer
{
    _Bool _lightOn;
    UIView *_maskView;
    YKimmersedMoreSplitLine *_moreSplitLine;
    YKImmersedGlobalManager *_globalMgr;
    YKSTFeedsManager *_feedsManager;
}

+ (double)heightForWidth:(double)arg1 model:(id)arg2;
+ (id)subfeedviewsClass;
@property(nonatomic) __weak YKSTFeedsManager *feedsManager; // @synthesize feedsManager=_feedsManager;
@property(nonatomic) __weak YKImmersedGlobalManager *globalMgr; // @synthesize globalMgr=_globalMgr;
@property(retain, nonatomic) YKimmersedMoreSplitLine *moreSplitLine; // @synthesize moreSplitLine=_moreSplitLine;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) _Bool lightOn; // @synthesize lightOn=_lightOn;
- (void).cxx_destruct;
- (struct CGRect)playerFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)gotoRecommend;
- (void)maskTapped:(id)arg1;
- (_Bool)handlePostEvent:(id)arg1 userInfo:(id)arg2;
- (void)ykfeedView:(id)arg1 onRecvEvent:(id)arg2 userInfo:(id)arg3;
- (void)stickPlayer:(id)arg1;
- (void)lightOffWithAnimate:(_Bool)arg1;
- (void)lightOnWithAnimate:(_Bool)arg1;
- (void)setModel:(id)arg1;
- (void)fillUI;
- (id)init;

@end

