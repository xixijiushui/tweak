//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliBAbstractAnimator.h"

#import "EPCCompositionDelegate.h"
#import "EPCEventListener.h"
#import "EPCExpressionParserDelegate.h"
#import "EPCFileLoader.h"
#import "EPCImageLoader.h"
#import "EPCLayoutDelegate.h"
#import "EPCViewPicker.h"

@class AliBDisplayLink, EPCAdaptor, EPCGLView, NSArray, NSDictionary, NSString;

@interface AliBEpicAnimator : AliBAbstractAnimator <EPCEventListener, EPCLayoutDelegate, EPCImageLoader, EPCFileLoader, EPCViewPicker, EPCCompositionDelegate, EPCExpressionParserDelegate>
{
    CDUnknownBlockType _placeholderCallback;
    CDUnknownBlockType _placeholdersIsReadyCallback;
    CDUnknownBlockType _viewForKeyCallback;
    long long _invalidCode;
    EPCGLView *_epicView;
    NSString *_resourceUrl;
    NSArray *_dynamicResources;
    NSDictionary *_animatorInfo;
    CDUnknownBlockType _resourcePathCallback;
    AliBDisplayLink *_displayLink;
    EPCAdaptor *_epcAdapter;
}

+ (id)getResources:(id)arg1;
@property(retain, nonatomic) EPCAdaptor *epcAdapter; // @synthesize epcAdapter=_epcAdapter;
@property(retain, nonatomic) AliBDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType resourcePathCallback; // @synthesize resourcePathCallback=_resourcePathCallback;
@property(copy, nonatomic) NSDictionary *animatorInfo; // @synthesize animatorInfo=_animatorInfo;
@property(copy, nonatomic) NSArray *dynamicResources; // @synthesize dynamicResources=_dynamicResources;
@property(copy, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(retain, nonatomic) EPCGLView *epicView; // @synthesize epicView=_epicView;
@property(nonatomic) long long invalidCode; // @synthesize invalidCode=_invalidCode;
@property(copy, nonatomic) CDUnknownBlockType viewForKeyCallback; // @synthesize viewForKeyCallback=_viewForKeyCallback;
@property(copy, nonatomic) CDUnknownBlockType placeholdersIsReadyCallback; // @synthesize placeholdersIsReadyCallback=_placeholdersIsReadyCallback;
@property(copy, nonatomic) CDUnknownBlockType placeholderCallback; // @synthesize placeholderCallback=_placeholderCallback;
- (void).cxx_destruct;
- (void)EPCCompositionDidEnd;
- (void)EPCCompositionDidRepeat;
- (void)EPCCompositionDidStart;
- (void)loadFileWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadImageWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pathForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (id)viewForKey:(id)arg1;
- (void)tapAction:(id)arg1;
- (id)findLayersWithSuffix:(id)arg1 allLayers:(id)arg2;
- (id)assemblePlaceholdersWithLayers:(id)arg1;
- (void)showLayers:(id)arg1;
- (void)hideLayers:(id)arg1;
- (_Bool)valueForVariable:(id)arg1 value:(double *)arg2;
- (float)valueForPlaceholder:(id)arg1;
- (void)onTimelineEvent:(id)arg1 time:(double)arg2 layers:(id)arg3;
- (void)render;
- (id)findUrlWithKey:(id)arg1;
- (_Bool)animate;
- (_Bool)isValid;
- (void)finishComplete:(_Bool)arg1;
- (double)duration;
- (void)dealloc;
- (void)clear;
- (id)initWithInfo:(id)arg1 resoucePath:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

