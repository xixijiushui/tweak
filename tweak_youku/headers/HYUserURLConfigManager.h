//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HYUserURLConfigManager : NSObject
{
}

+ (id)sharedManager;
- (void)removeOrangeConfig;
- (id)getURLStringFromKey:(id)arg1;
- (void)saveURLConfigFromOrange:(id)arg1;
- (id)loadConfigFromCache;
- (id)loadDefaultFromBundle;
- (id)loadConfig;
- (id)urlConfigPath;
- (id)urlConfigDirPath;
- (void)handleOrangeNameSpaceSDKWebViewNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end
