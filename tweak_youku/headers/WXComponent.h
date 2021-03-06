//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "UIGestureRecognizerDelegate.h"

@class CALayer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, WXBoxShadow, WXSDKInstance, WXThreadSafeCounter, WXTouchGestureRecognizer, WXTransform, WXTransition;

@interface WXComponent : NSObject <UIGestureRecognizerDelegate, NSCopying>
{
    NSString *_type;
    NSMutableArray *_subcomponents;
    struct wx_css_node *_cssNode;
    _Bool _isLayoutDirty;
    struct CGRect _calculatedFrame;
    struct CGPoint _absolutePosition;
    long long _positionType;
    WXTransition *_transition;
    UIColor *_backgroundColor;
    NSString *_backgroundImage;
    _Bool _clipToBounds;
    UIView *_view;
    double _opacity;
    long long _visibility;
    WXBoxShadow *_originalBoxShadow;
    WXBoxShadow *_lastBoxShadow;
    WXBoxShadow *_boxShadow;
    NSString *_roles;
    NSString *_ariaLabel;
    NSString *_ariaHidden;
    NSString *_accessible;
    NSString *_accessibilityHintContent;
    NSString *_groupAccessibilityChildren;
    NSString *_testId;
    _Bool _accessibilityMagicTapEvent;
    NSMutableDictionary *_pseudoClassStyles;
    NSMutableDictionary *_updatedPseudoClassStyles;
    _Bool _isListenPseudoTouch;
    _Bool _appearEvent;
    _Bool _disappearEvent;
    UITapGestureRecognizer *_tapGesture;
    NSMutableArray *_swipeGestures;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPanGestureRecognizer *_panGesture;
    _Bool _listenPanStart;
    _Bool _listenPanMove;
    _Bool _listenPanEnd;
    _Bool _listenHorizontalPan;
    _Bool _listenVerticalPan;
    WXTouchGestureRecognizer *_touchGesture;
    CALayer *_layer;
    _Bool _useCompositing;
    _Bool _isCompositingChild;
    WXThreadSafeCounter *_displayCounter;
    UIColor *_borderTopColor;
    UIColor *_borderRightColor;
    UIColor *_borderLeftColor;
    UIColor *_borderBottomColor;
    double _borderTopWidth;
    double _borderRightWidth;
    double _borderLeftWidth;
    double _borderBottomWidth;
    double _borderTopLeftRadius;
    double _borderTopRightRadius;
    double _borderBottomLeftRadius;
    double _borderBottomRightRadius;
    long long _borderTopStyle;
    long long _borderRightStyle;
    long long _borderBottomStyle;
    long long _borderLeftStyle;
    _Bool _isFixed;
    _Bool _async;
    _Bool _isNeedJoinLayoutSystem;
    _Bool _lazyCreateView;
    WXTransform *_transform;
    _Bool _isTemplate;
    WXComponent *_templateComponent;
    CDUnknownBlockType _bindingMatch;
    CDUnknownBlockType _bindingRepeat;
    NSString *_repeatIndexIdentify;
    NSString *_repeatLabelIdentify;
    NSString *_virtualComponentId;
    _Bool _isRepeating;
    _Bool _isSkipUpdate;
    _Bool _dataBindOnce;
    NSMutableDictionary *_bindingProps;
    NSMutableDictionary *_bindingAttributes;
    NSMutableDictionary *_bindingStyles;
    NSMutableDictionary *_bindingEvents;
    NSMutableDictionary *_eventParameters;
    NSString *_ref;
    NSMutableDictionary *_styles;
    NSMutableDictionary *_attributes;
    NSMutableArray *_events;
    struct _opaque_pthread_mutex_t _propertyMutex;
    struct _opaque_pthread_mutexattr_t _propertMutexAttr;
    WXComponent *_supercomponent;
    id <WXScrollerProtocol> _ancestorScroller;
    WXSDKInstance *_weexInstance;
    _Bool _isViewFrameSyncWithCalculated;
    unsigned long long _componentType;
    unsigned long long _displayType;
}

+ (void)hookComponentViewDidLoad;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool isViewFrameSyncWithCalculated; // @synthesize isViewFrameSyncWithCalculated=_isViewFrameSyncWithCalculated;
@property(nonatomic) unsigned long long componentType; // @synthesize componentType=_componentType;
@property(readonly, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(retain) WXTransform *transform; // @synthesize transform=_transform;
- (void).cxx_destruct;
- (void)resetStyles:(id)arg1;
- (id)imageFromLayer:(id)arg1;
- (void)_configWXComponentA11yWithAttributes:(id)arg1;
- (void)setGradientLayer;
- (void)readyToRender;
- (void)setNativeTransform:(struct CGAffineTransform)arg1;
- (void)updateAttributes:(id)arg1;
- (void)updateStyles:(id)arg1;
- (void)_updateAttributesOnMainThread:(id)arg1;
- (void)_updateStylesOnMainThread:(id)arg1 resetStyles:(id)arg2;
- (void)_removeEventOnComponentThread:(id)arg1;
- (void)_addEventOnComponentThread:(id)arg1;
- (void)_updateAttributesOnComponentThread:(id)arg1;
- (void)_modifyStyles:(id)arg1;
- (_Bool)_isTransitionOnMainThreadStyles:(id)arg1;
- (_Bool)_isTransitionTag:(id)arg1;
- (void)_updateStylesOnComponentThread:(id)arg1 resetStyles:(id)arg2 isUpdateStyles:(_Bool)arg3;
- (id)ancestorScroller;
- (void)_didInserted;
- (void)_moveToSupercomponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_removeFromSupercomponent;
- (void)_removeSubcomponent:(id)arg1;
- (void)_insertSubcomponent:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) __weak WXComponent *supercomponent;
@property(readonly, nonatomic) NSArray *subcomponents;
- (id)_paramsForEvent:(id)arg1;
- (void)_addEventParams:(id)arg1;
@property(readonly, nonatomic) struct wx_css_node *cssNode;
- (struct CGPoint)absolutePosition;
@property(readonly, nonatomic) struct CGRect calculatedFrame;
@property(readonly, nonatomic) CALayer *layer;
- (void)_handleFirstScreenTime;
- (void)_resetNativeBorderRadius;
- (void)_buildViewHierarchyLazily;
@property(readonly, nonatomic) UIView *view;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak WXSDKInstance *weexInstance;
@property(readonly, nonatomic) NSArray *events;
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, nonatomic) NSDictionary *pseudoClassStyles;
@property(readonly, nonatomic) NSDictionary *styles;
- (void)dealloc;
- (unsigned long long)_parseAccessibilityTraitsWithTraits:(unsigned long long)arg1 roles:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)hookedComponentViewDidLoad;
- (void)hookedAViewDidLoad;
- (id)getRecycleListComponent;
- (id)touchResultWithScreenLocation:(struct CGPoint)arg1 pageLocation:(struct CGPoint)arg2 identifier:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)checkRemoveTouchGesture;
- (void)removeTouchCancelEvent;
- (void)removeTouchEndEvent;
- (void)removeTouchMoveEvent;
- (void)removeTouchStartEvent;
- (void)addTouchCancelEvent;
- (void)addTouchEndEvent;
- (void)addTouchMoveEvent;
- (void)addTouchStartEvent;
- (id)touchGesture;
- (void)checkRemovePanGesture;
- (void)removeVerticalPanEvent;
- (void)removeHorizontalPanEvent;
- (void)removePanEndEvent;
- (void)removePanMoveEvent;
- (void)removePanStartEvent;
- (void)onPan:(id)arg1;
- (void)addVerticalPanEvent;
- (void)addHorizontalPanEvent;
- (void)addPanEndEvent;
- (void)addPanMoveEvent;
- (void)addPanStartEvent;
- (void)addPanGesture;
- (void)onLongPress:(id)arg1;
- (void)removeLongPressEvent;
- (void)addLongPressEvent;
- (void)onSwipe:(id)arg1;
- (void)removeSwipeEvent;
- (void)addSwipeEvent;
- (void)onClick:(id)arg1;
- (void)removeClickEvent;
- (void)addClickEvent;
- (void)removeAccessibilityMagicTapEvent;
- (void)addAccessibilityMagicTapEvent;
- (void)removePseudoTouchEvent;
- (void)removeDisappearEvent;
- (void)removeAppearEvent;
- (void)addDisappearEvent;
- (void)addAppearEvent;
- (void)_removeAllEvents;
- (void)_removeEventOnMainThread:(id)arg1;
- (void)_addEventOnMainThread:(id)arg1;
- (void)_initPseudoEvents:(_Bool)arg1;
- (void)_initEvents:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)fireEvent:(id)arg1 params:(id)arg2 domChanges:(id)arg3;
- (void)fireEvent:(id)arg1 params:(id)arg2;
- (void)_unloadViewWithReusing:(_Bool)arg1;
- (void)_resetStyles:(id)arg1;
- (void)resetBorder:(id)arg1;
- (void)_updateViewStyles:(id)arg1;
- (void)_transitionUpdateViewProperty:(id)arg1;
- (void)_initViewPropertyWithStyles:(id)arg1;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)viewWillLoad;
- (void)moveToSuperview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromSuperview;
- (void)willRemoveSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isViewLoaded;
- (id)loadView;
- (void)configBoxShadow:(id)arg1;
- (_Bool)equalBoxShadow:(id)arg1 withBoxShadow:(id)arg2;
- (void)resetViewLayer;
- (id)getViewBoxShadow:(id)arg1;
- (void)_parse:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)setNavigationWithStyles:(id)arg1;
- (void)setNavigationItemWithParam:(id)arg1 position:(long long)arg2;
- (void)setNavigationBackgroundColor:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)_updateNavBarAttributes:(id)arg1;
- (void)_setupNavBarWithStyles:(id)arg1 attributes:(id)arg2;
- (id)navigator;
- (void)_resetCSSNode:(id)arg1;
- (void)_fillCSSNode:(id)arg1;
- (double)WXPixelType:(id)arg1;
- (void)_layoutDidFinish;
- (struct CGPoint)computeNewAbsolutePosition:(struct CGPoint)arg1;
- (void)_calculateFrameWithSuperAbsolutePosition:(struct CGPoint)arg1 gatherDirtyComponents:(id)arg2;
- (void)_frameDidCalculated:(_Bool)arg1;
- (unsigned long long)_childrenCountForLayout;
- (void)_recomputeCSSNodeChildren;
- (void)_resetCSSNodeStyles:(id)arg1;
- (void)_updateCSSNodeStyles:(id)arg1;
- (void)_initCSSNodeWithStyles:(id)arg1;
- (void)layoutDidFinish;
- (CDUnknownBlockType)measureBlock;
- (_Bool)needsLayout;
- (void)setNeedsLayout;
- (CDUnknownBlockType)bindingBlockWithExpression:(struct WXJSExpression *)arg1;
- (void)_storeBindings:(id)arg1 type:(unsigned long long)arg2;
- (void)_storeBindingsWithProps:(id)arg1 styles:(id)arg2 attributes:(id)arg3 events:(id)arg4;
- (void)_repeat:(id)arg1 inData:(id)arg2;
- (void)updateBindingData:(id)arg1;
- (void)recoveryPseudoStyles:(id)arg1;
- (id)getPseudoClassStylesByKeys:(id)arg1;
- (id)getPseudoClassStyles:(id)arg1 level:(long long)arg2;
- (id)getPseudoClassStyles:(id)arg1;
- (id)getPseudoKey:(id)arg1;
- (void)updatePseudoClassStyles:(id)arg1;
- (id)parseStyles:(id)arg1;
- (CDUnknownBlockType)displayCompletionBlock;
- (CDUnknownBlockType)displayBlock;
- (_Bool)_bitmapOpaqueWithSize:(struct CGSize)arg1;
- (void)_handleBorders:(id)arg1 isUpdating:(_Bool)arg2;
- (_Bool)_needsDrawBorder;
- (void)_drawBorderWithContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (void)_collectCompositingDisplayBlocks:(id)arg1 context:(struct CGContext *)arg2 isCancelled:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_compositeDisplayBlock;
- (id)endDrawContext:(struct CGContext *)arg1;
- (struct CGContext *)beginDrawContext:(struct CGRect)arg1;
- (void)triggerDisplay;
- (void)_willDisplayLayer:(id)arg1;
- (void)_initCompositingAttribute:(id)arg1;
- (CDUnknownBlockType)_displayCompletionBlock;
- (CDUnknownBlockType)_displayBlock;
- (void)didFinishDrawingLayer:(_Bool)arg1;
- (id)drawRect:(struct CGRect)arg1;
- (_Bool)needsDrawRect;
- (void)setNeedsDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

