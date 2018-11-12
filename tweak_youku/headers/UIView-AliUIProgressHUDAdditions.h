//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (AliUIProgressHUDAdditions)
+ (id)_allHUDsForView:(id)arg1;
+ (unsigned long long)_hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;
- (id)showHUDAnimated:(_Bool)arg1 message:(id)arg2 dalayTime:(double)arg3;
- (void)showHUDAnimated:(_Bool)arg1 message:(id)arg2;
- (void)removeAllHUDAnimated:(_Bool)arg1;
- (void)showHUD:(id)arg1 image:(id)arg2 animated:(_Bool)arg3 hideAfter:(double)arg4;
- (void)popupMessage:(id)arg1 offsetY:(double)arg2 animated:(_Bool)arg3;
- (_Bool)showHudStatus;
- (void)setShowHudStatus:(_Bool)arg1;
- (void)handleShowTimer:(id)arg1;
- (void)showHUDAnimated:(_Bool)arg1 afterDelay:(double)arg2;
- (id)showHUD:(id)arg1 animated:(_Bool)arg2 hideAfter:(double)arg3;
- (void)showTimedHUD:(id)arg1 animated:(_Bool)arg2 hideAfter:(double)arg3;
- (void)showHUD:(id)arg1 animated:(_Bool)arg2;
- (void)hideHUDAnimated:(_Bool)arg1;
- (id)showLoadingHUDWithAnimate:(_Bool)arg1;
- (void)showHUDAnimated:(_Bool)arg1;
@end

