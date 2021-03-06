//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICContainerSubModule.h"

@class NSMutableArray, NSString;

@interface VICLayerManager : VICContainerSubModule
{
    long long _limitNumberOfLayers;
    NSString *_versionString;
    NSMutableArray *_layerInfos;
    NSMutableArray *_layers;
}

@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSMutableArray *layerInfos; // @synthesize layerInfos=_layerInfos;
@property(retain, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(nonatomic) long long limitNumberOfLayers; // @synthesize limitNumberOfLayers=_limitNumberOfLayers;
- (void).cxx_destruct;
- (void)removeAllLayer;
- (void)removeLayers:(id)arg1;
- (void)removeLayer:(id)arg1;
- (id)defaultLayer;
- (id)layerWithName:(id)arg1;
- (void)configWithParams:(id)arg1;

@end

