//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChildBaseRouterProtocol.h"

@class NSString, UIViewController;

@interface ChildBaseRouterImpl : NSObject <ChildBaseRouterProtocol>
{
}

- (_Bool)popCurrentTopViewControllerAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController *currentTopViewController;
- (void)removeOldPlayVc;
- (_Bool)routeToPlayVideoWithShowId:(id)arg1;
- (_Bool)routeToURL:(id)arg1 withParams:(id)arg2;
- (_Bool)routerWithHAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

