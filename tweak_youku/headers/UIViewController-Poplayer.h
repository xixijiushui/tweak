//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (Poplayer)
+ (_Bool)ykPoplayerSwizzleSelector:(SEL)arg1 withSelector:(SEL)arg2;
+ (void)ykpl_initialize;
- (id)getIDArrayFromConfigIndex:(id)arg1 seperatedByString:(id)arg2;
- (id)filterBlackList;
- (void)postNotificationWithDictionary:(id)arg1;
- (id)convertToJSONData:(id)arg1;
- (void)poplayer_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)poplayer_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@end
