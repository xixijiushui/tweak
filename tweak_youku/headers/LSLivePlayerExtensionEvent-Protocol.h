//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol LSLivePlayerExtensionEvent <NSObject>
- (void)leaveVRMode;
- (void)enterVRMode;
- (void)lockScreenDidChange:(_Bool)arg1;
- (void)pluginWillHidden;
- (void)pluginWillShow;
- (void)toolBarDidShowAnimation;
- (void)toolBarDidHiddenAnimation;
- (void)live_endOldLive;
- (void)live_changeCamera:(NSString *)arg1;
- (void)live_changeQuality:(NSString *)arg1;
- (void)live_willBeiginNewLive;
@end

