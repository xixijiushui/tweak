//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface UINavigationController (Poplayer)
+ (_Bool)ykPoplayerSwizzleSelector:(SEL)arg1 withSelector:(SEL)arg2;
+ (void)ykpl_initialize;
- (void)postNotificationWithDictionary:(id)arg1;
- (id)convertToJSONData:(id)arg1;
- (id)poplayer_popToRootViewControllerAnimated:(_Bool)arg1;
- (id)poplayer_popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)poplayer_popViewControllerAnimated:(_Bool)arg1;
- (void)poplayer_setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)poplayer_pushViewController:(id)arg1 animated:(_Bool)arg2;
@end

