//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EPCAssetGroup, EPCExpressionParser, EPCFramebuffer, EPCLayoutManager, EPCTexture2D, EPCTimeline, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface EPCComposition : NSObject
{
    NSMutableArray *_layers;
    NSMutableDictionary *_layerMap;
    _Bool _initialized;
    EPCTexture2D *_blackTexture;
    EPCTexture2D *_clearTexture;
    EPCTexture2D *_dissolveTexture;
    EPCFramebuffer *_blendTarget;
    EPCTexture2D *_blendTexture;
    EPCTexture2D *_blendTexture2;
    unsigned int _normalProgramId;
    unsigned int _dissolveProgramId;
    unsigned int _compositionProgramId;
    unsigned int _vertexArrayBuffer;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    EPCFramebuffer *_outputFramebuffer;
    EPCTexture2D *_outputRenderbuffer;
    _Bool _opaque;
    int _contentMode;
    NSString *_compositionName;
    NSString *_compositionID;
    EPCLayoutManager *_layoutManager;
    CDStruct_79c71658 _size;
    double _duration;
    EPCAssetGroup *_assetGroup;
    EPCTimeline *_timeline;
}

@property(readonly, nonatomic) NSMutableDictionary *layerMap; // @synthesize layerMap=_layerMap;
@property(retain, nonatomic) EPCTimeline *timeline; // @synthesize timeline=_timeline;
@property(nonatomic) __weak EPCAssetGroup *assetGroup; // @synthesize assetGroup=_assetGroup;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_79c71658 size; // @synthesize size=_size;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) __weak EPCLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(copy, nonatomic) NSString *compositionID; // @synthesize compositionID=_compositionID;
@property(copy, nonatomic) NSString *compositionName; // @synthesize compositionName=_compositionName;
- (void).cxx_destruct;
- (void)createQuad;
- (void)createProgram;
- (void)createRenderTarget;
- (void)createTextures;
- (void)createFramebufferRenderbuffer;
- (void)glInitialize;
- (id)outputTexture;
- (id)framebuffer;
- (id)compositeLayer;
- (void)maskLayers;
- (CDStruct_0bcbd2dc)calculateViewport;
- (void)renderLayer:(double)arg1;
- (void)clearColorBuffer;
- (void)update:(double)arg1;
@property(readonly, nonatomic) NSArray *layers; // @dynamic layers;
- (id)activeCameraLayer;
- (void)removeLayer:(id)arg1;
- (void)moveLayer:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)insertLayer:(id)arg1 atIndex:(int)arg2;
- (void)addLayer:(id)arg1;
- (id)initWithSize:(CDStruct_79c71658)arg1 timeline:(id)arg2;
- (void)_commonInitialize;
- (void)clearGL;
- (void)dealloc;
- (id)init;
- (void)applyPlaceholder;
@property(copy, nonatomic) NSString *placeholderHeight;
@property(copy, nonatomic) NSString *placeholderWidth;
- (void)applyExpressions;
- (id)getHeightExpression;
- (_Bool)updateHeightExpression:(id)arg1;
- (id)getWidthExpression;
- (_Bool)updateWidthExpression:(id)arg1;
@property(retain, nonatomic) EPCExpressionParser *heightParser;
@property(copy, nonatomic) NSString *heightExpression;
@property(retain, nonatomic) EPCExpressionParser *widthParser;
@property(copy, nonatomic) NSString *widthExpression;
- (id)toJSONDictionary;
- (void)_mapFromJSON:(id)arg1;
- (id)initWithJSON:(id)arg1 assetGroup:(id)arg2 timeline:(id)arg3;

@end

