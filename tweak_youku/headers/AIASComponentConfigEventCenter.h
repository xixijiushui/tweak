//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIASCommonEventCenter.h"

@interface AIASComponentConfigEventCenter : AIASCommonEventCenter
{
}

+ (id)shareInstance;
- (void)fireDisableStatusChange:(id)arg1 componentName:(id)arg2 status:(_Bool)arg3;
- (void)fireConfigChange:(id)arg1 componentName:(id)arg2 config:(id)arg3;
- (void)fireResourceChange:(id)arg1 componentName:(id)arg2 res:(id)arg3;
- (void)unregisterEvent:(id)arg1 componentName:(id)arg2 listener:(id)arg3;
- (void)registerEvent:(id)arg1 componentName:(id)arg2 listener:(id)arg3;
- (id)keyFromIdAndName:(id)arg1 componentName:(id)arg2;

@end

