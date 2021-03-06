//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICContainerSubModule.h"

@class NSMutableArray, NSString;

@interface VICPluginManager : VICContainerSubModule
{
    NSString *_versionString;
    NSMutableArray *_pluginInfos;
    NSMutableArray *_plugins;
}

@property(retain, nonatomic) NSMutableArray *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) NSMutableArray *pluginInfos; // @synthesize pluginInfos=_pluginInfos;
@property(retain, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
- (void).cxx_destruct;
- (void)postEventForShowContainerView:(_Bool)arg1;
- (id)urlForType:(id)arg1;
- (id)defaultLayers;
- (_Bool)pluginIsRegistered:(id)arg1;
- (void)unloadAllPluginsIgnoreSticky;
- (void)unloadPlugins:(id)arg1;
- (void)unloadAllPlugins;
- (void)unloadPlugin:(id)arg1;
- (void)loadPlugin:(id)arg1;
- (void)showPlugin:(id)arg1;
- (_Bool)canBeShowed:(id)arg1;
- (void)hidePlugin:(id)arg1;
- (id)allLoadedPlugins;
- (id)pluginWithId:(id)arg1;
- (id)pluginWithName:(id)arg1;
- (_Bool)registerPlugin:(id)arg1 withClass:(id)arg2 events:(id)arg3;
- (void)configWithParams:(id)arg1;

@end

