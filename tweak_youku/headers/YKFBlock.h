//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFReactiveView.h"

@class CALayer, NSArray, NSString, UIColor, YKFBlockVM;

@interface YKFBlock : NSObject <YKFReactiveView>
{
    _Bool batchRefresh;
    _Bool _hidden;
    YKFBlockVM *_blockVM;
    id <YKFBlockDelegate> _delegate;
    long long _layoutType;
    NSArray *_controls;
    UIColor *_backgroundColor;
    CALayer *_backgroundLayer;
    double _width;
    double _height;
    double _minX;
    double _midX;
    double _maxX;
    double _minY;
    double _midY;
    double _maxY;
    struct CGPoint _origin;
    struct CGPoint _center;
    struct CGRect _frame;
    struct UIEdgeInsets _contentInsets;
}

+ (struct CGSize)sizeForBounds:(struct CGRect)arg1 layoutType:(long long)arg2 blockVM:(id)arg3;
+ (struct CGSize)sizeWithExpectFrame:(struct CGRect)arg1 contentInsets:(struct UIEdgeInsets)arg2 layoutType:(long long)arg3 blockVM:(id)arg4;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(nonatomic) double midY; // @synthesize midY=_midY;
@property(nonatomic) double minY; // @synthesize minY=_minY;
@property(nonatomic) double maxX; // @synthesize maxX=_maxX;
@property(nonatomic) double midX; // @synthesize midX=_midX;
@property(nonatomic) double minX; // @synthesize minX=_minX;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak id <YKFBlockDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKFBlockVM *blockVM; // @synthesize blockVM=_blockVM;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect drawFrame;
@property(readonly, nonatomic) struct CGSize size;
- (struct CGRect)translateWithFrame:(struct CGRect)arg1 Offset:(struct CGPoint)arg2;
- (void)adjustOriginOfControls;
- (void)updateOriginOfControls;
- (void)bindViewModel:(id)arg1;
- (void)layoutControlsInBoundsWhichWidth:(double)arg1 height:(double)arg2;
- (void)layoutBackgroundLayerInBlock;
- (void)adjustBlockContent;
- (void)bindControls;
- (void)updateDataWhenViewModelChanged;
- (void)configureControlsWhenInit;
- (id)initWithLayoutType:(long long)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

