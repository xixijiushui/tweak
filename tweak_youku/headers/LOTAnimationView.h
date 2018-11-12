//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class LOTComposition, LOTCompositionContainer, NSBundle, NSNumber, NSString;

@interface LOTAnimationView : UIView <CAAnimationDelegate>
{
    LOTCompositionContainer *_compContainer;
    NSNumber *_playRangeStartFrame;
    NSNumber *_playRangeEndFrame;
    double _playRangeStartProgress;
    double _playRangeEndProgress;
    NSBundle *_bundle;
    double _animationProgress;
    _Bool _shouldRestoreStateWhenAttachedToWindow;
    CDUnknownBlockType _completionBlockToRestoreWhenAttachedToWindow;
    _Bool _isAnimationPlaying;
    _Bool _loopAnimation;
    _Bool _autoReverseAnimation;
    _Bool _cacheEnable;
    double _animationSpeed;
    CDUnknownBlockType _completionBlock;
    LOTComposition *_sceneModel;
}

+ (id)animationWithFilePath:(id)arg1;
+ (id)animationFromJSON:(id)arg1 inBundle:(id)arg2;
+ (id)animationFromJSON:(id)arg1;
+ (id)animationNamed:(id)arg1 inBundle:(id)arg2;
+ (id)animationNamed:(id)arg1;
@property(retain, nonatomic) LOTComposition *sceneModel; // @synthesize sceneModel=_sceneModel;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool cacheEnable; // @synthesize cacheEnable=_cacheEnable;
@property(nonatomic) double animationSpeed; // @synthesize animationSpeed=_animationSpeed;
@property(nonatomic) _Bool autoReverseAnimation; // @synthesize autoReverseAnimation=_autoReverseAnimation;
@property(nonatomic) _Bool loopAnimation; // @synthesize loopAnimation=_loopAnimation;
@property(readonly, nonatomic) _Bool isAnimationPlaying; // @synthesize isAnimationPlaying=_isAnimationPlaying;
- (void).cxx_destruct;
- (void)logHierarchyKeypaths;
- (void)setValue:(id)arg1 forKeypath:(id)arg2 atFrame:(id)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayerNamed:(id)arg2;
- (void)addSubview:(id)arg1 toLayerNamed:(id)arg2 applyTransform:(_Bool)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_layout;
- (void)_layoutAndForceUpdate;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToSuperview;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) double animationProgress;
@property(readonly, nonatomic) double animationDuration;
- (id)compositionLayers;
- (id)layerForKey:(id)arg1;
- (void)maskSubview:(id)arg1 toKeypathLayer:(id)arg2;
- (void)addSubview:(id)arg1 toKeypathLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromKeypathLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromKeypathLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toKeypathLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toKeypathLayer:(id)arg2;
- (id)keysForKeyPath:(id)arg1;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (void)forceDrawingUpdate;
- (void)setProgressWithFrame:(id)arg1 callCompletionIfNecessary:(_Bool)arg2;
- (void)setProgressWithFrame:(id)arg1;
- (void)pause;
- (void)stop;
- (void)playFromFrame:(id)arg1 toFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)playToFrame:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)playFromProgress:(double)arg1 toProgress:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)playToProgress:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)playWithCompletion:(CDUnknownBlockType)arg1;
- (void)play;
- (void)setAnimationNamed:(id)arg1;
- (void)_callCompletionIfNecessary:(_Bool)arg1;
- (_Bool)_isSpeedNegative;
- (id)_frameForProgress:(double)arg1;
- (double)_progressForFrame:(id)arg1;
- (void)_removeCurrentAnimationIfNecessary;
- (void)_restoreState;
- (void)_setupWithSceneModel:(id)arg1;
- (void)_commonInit;
- (void)_initializeAnimationContainer;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithModel:(id)arg1 inBundle:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

