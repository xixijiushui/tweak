//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASControlNode.h"

@class ASTextNode, ASWeakMapEntry, CADisplayLink, NSString, UIColor, UIImage;

@interface ASImageNode : ASControlNode
{
    struct Mutex _displayLinkLock;
    id <ASAnimatedImageProtocol> _animatedImage;
    _Bool _animatedImagePaused;
    NSString *_animatedImageRunLoopMode;
    CADisplayLink *_displayLink;
    double _playHead;
    unsigned long long _playedLoops;
    UIImage *_image;
    ASWeakMapEntry *_weakCacheEntry;
    CDUnknownBlockType _displayCompletionBlock;
    ASTextNode *_debugLabelNode;
    _Bool _cropEnabled;
    _Bool _forceUpscaling;
    struct CGSize _forcedSize;
    struct CGRect _cropRect;
    struct CGRect _cropDisplayBounds;
    CDUnknownBlockType _imageModificationBlock;
    UIColor *_placeholderColor;
    double _lastDisplayLinkFire;
}

+ (id)createContentsForkey:(id)arg1 drawParameters:(id)arg2 isCancelled:(CDUnknownBlockType)arg3;
+ (id)contentsForkey:(id)arg1 drawParameters:(id)arg2 isCancelled:(CDUnknownBlockType)arg3;
+ (id)displayWithParameters:(id)arg1 isCancelled:(CDUnknownBlockType)arg2;
+ (_Bool)shouldShowImageScalingOverlay;
+ (void)setShouldShowImageScalingOverlay:(_Bool)arg1;
@property(nonatomic) double lastDisplayLinkFire; // @synthesize lastDisplayLinkFire=_lastDisplayLinkFire;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugLabelAttributes;
- (void)layout;
@property(copy, nonatomic) CDUnknownBlockType imageModificationBlock; // @synthesize imageModificationBlock=_imageModificationBlock;
@property(nonatomic) struct CGSize forcedSize;
@property(nonatomic) _Bool forceUpscaling;
@property(nonatomic) struct CGRect cropRect;
- (void)setCropEnabled:(_Bool)arg1 recropImmediately:(_Bool)arg2 inBounds:(struct CGRect)arg3;
@property(nonatomic, getter=isCropEnabled) _Bool cropEnabled;
- (void)clearContents;
- (void)setNeedsDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)displayDidFinish;
- (id)drawParametersForAsyncLayer:(id)arg1;
- (id)_locked_Image;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_locked_setImage:(id)arg1;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (id)placeholderImage;
- (void)dealloc;
- (id)init;
- (unsigned long long)frameIndexAtPlayHeadPosition:(double)arg1;
- (void)displayLinkFired:(id)arg1;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)_locked_stopAnimating;
- (void)stopAnimating;
- (void)_locked_startAnimating;
- (void)startAnimating;
- (void)_locked_setShouldAnimate:(_Bool)arg1;
- (void)setShouldAnimate:(_Bool)arg1;
@property(retain, nonatomic) NSString *animatedImageRunLoopMode;
- (void)_locked_setCoverImage:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)_locked_setCoverImageCompleted:(id)arg1;
- (void)setCoverImageCompleted:(id)arg1;
@property(nonatomic) _Bool animatedImagePaused;
@property(retain, nonatomic) id <ASAnimatedImageProtocol> animatedImage;
- (void)animatedImageSet:(id)arg1 previousAnimatedImage:(id)arg2;
- (void)_locked_setAnimatedImage:(id)arg1;
- (void)invalidateAnimatedImage;

@end

