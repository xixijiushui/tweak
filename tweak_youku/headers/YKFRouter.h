//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, UINavigationController, UIViewController, UIWindow;

@interface YKFRouter : NSObject
{
    id <YKFRouterBridge> _routerBridge;
}

+ (id)defaultRouter;
@property(retain, nonatomic) id <YKFRouterBridge> routerBridge; // @synthesize routerBridge=_routerBridge;
- (void).cxx_destruct;
@property(readonly, nonatomic) UINavigationController *navigationController;
@property(readonly, nonatomic) UIViewController *prevViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
@property(readonly, nonatomic) UIViewController *mainTopViewController;
@property(readonly, nonatomic) UIWindow *window;
- (void)setupRouterBridge:(id)arg1;
- (_Bool)checkURLValid:(id)arg1;
- (_Bool)routeToURL:(id)arg1 withParams:(id)arg2 withRequestCode:(long long)arg3;
- (_Bool)routeToURL:(id)arg1 withParams:(id)arg2;
- (void)reloadConfigurations;
- (id)init;
- (id)_topViewController:(id)arg1;
- (_Bool)_handleByPluginsWithSchemeURLString:(id)arg1 params:(id)arg2;
- (_Bool)ykf_routeToURLWithSPM:(id)arg1 withParams:(id)arg2;
- (void)setRouterPlugins:(id)arg1;
@property(readonly, nonatomic) NSArray *routerPlugins;
- (void)setRouterHandlerHosts:(id)arg1;
@property(readonly, nonatomic) NSDictionary *routerHandlerHosts;
- (void)_reloadConfigurations;
- (void)_loadConfigurations;
- (void)_loadALLSchemesAndPlugins;
- (void)_loadPluginsForDic:(id)arg1;
- (void)_addRoutePluginWithClassName:(id)arg1 level:(long long)arg2;
- (void)_loadSchemeForDic:(id)arg1;
- (void)_addRouterHandlerWithHost:(id)arg1 pattern:(id)arg2 targetClassName:(id)arg3 selectorName:(id)arg4;
- (_Bool)_handleSchemeURL:(id)arg1 params:(id)arg2;
- (void)_excuteInterPageActionWithTargetVC:(id)arg1 animated:(_Bool)arg2 isPush:(_Bool)arg3;
- (void)_configViewController:(id)arg1 params:(id)arg2;
- (id)_fetchTargetViewControllerWithURL:(id)arg1;

@end

