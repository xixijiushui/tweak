//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface ChildBaseRouter : NSObject
{
    id <ChildBaseRouterProtocol> _routerHandler;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <ChildBaseRouterProtocol> routerHandler; // @synthesize routerHandler=_routerHandler;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *currentTopViewController;
- (_Bool)popCurrentTopViewControllerAnimated:(_Bool)arg1;
- (_Bool)routeToPlayVideoWithShowId:(id)arg1;
- (_Bool)routeWithHAction:(id)arg1;
- (_Bool)routeToURL:(id)arg1 withParams:(id)arg2;

@end

