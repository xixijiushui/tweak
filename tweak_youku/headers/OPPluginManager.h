//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, OPManagerFactory;

@interface OPPluginManager : NSObject
{
    NSDictionary *_originalData;
    NSDictionary *_defaultDic;
    OPManagerFactory *_managerFactory;
    NSMutableDictionary *_pluginDict;
}

@property(retain, nonatomic) NSMutableDictionary *pluginDict; // @synthesize pluginDict=_pluginDict;
@property(nonatomic) __weak OPManagerFactory *managerFactory; // @synthesize managerFactory=_managerFactory;
- (void).cxx_destruct;
- (id)defaultPlugins;
- (id)plugins;
- (id)plugin:(id)arg1;
- (_Bool)forceUnregisterPlugin:(id)arg1;
- (_Bool)unregisterPlugin:(id)arg1;
- (_Bool)registerPlugin:(id)arg1 params:(id)arg2;
- (void)config:(id)arg1;
- (void)uninstall;
- (void)run;
- (void)installWithManagerFactory:(id)arg1;
- (void)dealloc;

@end

