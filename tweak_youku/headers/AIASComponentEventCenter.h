//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIASCommonEventCenter.h"

@interface AIASComponentEventCenter : AIASCommonEventCenter
{
}

+ (id)shareInstance;
- (void)fireEvent:(id)arg1 eventCode:(id)arg2 param:(id)arg3;
- (void)unregisterEvent:(id)arg1 listener:(id)arg2;
- (void)registerEvent:(id)arg1 listener:(id)arg2;

@end
