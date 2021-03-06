//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "AIALikeViewUTProtocal.h"

@class AIALikeComponent, AIALikeView, LSLiveInfoModel, NSString;

@interface LSChannelPriseComponent : WXComponent <AIALikeViewUTProtocal>
{
    _Bool _animation;
    long long _width;
    long long _height;
    long long _flowHeight;
    NSString *_liveId;
    AIALikeView *_likeView;
    AIALikeComponent *_likeCom;
    AIALikeComponent *_likeComponent;
    LSLiveInfoModel *_liveInfoModel;
    long long _flowCount;
}

@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic) long long flowCount; // @synthesize flowCount=_flowCount;
@property(retain, nonatomic) LSLiveInfoModel *liveInfoModel; // @synthesize liveInfoModel=_liveInfoModel;
@property(retain, nonatomic) AIALikeComponent *likeComponent; // @synthesize likeComponent=_likeComponent;
@property(retain, nonatomic) AIALikeComponent *likeCom; // @synthesize likeCom=_likeCom;
@property(retain, nonatomic) AIALikeView *likeView; // @synthesize likeView=_likeView;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) long long flowHeight; // @synthesize flowHeight=_flowHeight;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)dealloc;
- (id)loadView;
- (void)layoutDidFinish;
- (void)updateFlowHeight:(long long)arg1;
- (void)requestFullInfo:(id)arg1:(CDUnknownBlockType)arg2:(CDUnknownBlockType)arg3;
- (void)updateLiveId:(id)arg1;
- (void)showAnimationView:(_Bool)arg1 withCount:(long long)arg2;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

