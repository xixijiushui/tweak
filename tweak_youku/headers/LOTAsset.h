//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTLayerGroup, NSBundle, NSNumber, NSString;

@interface LOTAsset : NSObject
{
    NSString *_referenceID;
    NSNumber *_assetWidth;
    NSNumber *_assetHeight;
    NSString *_imageName;
    NSString *_imageDirectory;
    LOTLayerGroup *_layerGroup;
    NSString *_rootDirectory;
    NSBundle *_assetBundle;
}

@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(retain, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
@property(readonly, nonatomic) LOTLayerGroup *layerGroup; // @synthesize layerGroup=_layerGroup;
@property(readonly, nonatomic) NSString *imageDirectory; // @synthesize imageDirectory=_imageDirectory;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSNumber *assetHeight; // @synthesize assetHeight=_assetHeight;
@property(readonly, nonatomic) NSNumber *assetWidth; // @synthesize assetWidth=_assetWidth;
@property(readonly, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
- (void).cxx_destruct;
- (void)_mapFromJSON:(id)arg1 withAssetGroup:(id)arg2 withFramerate:(id)arg3;
- (id)initWithJSON:(id)arg1 withAssetGroup:(id)arg2 withAssetBundle:(id)arg3 withFramerate:(id)arg4;

@end

