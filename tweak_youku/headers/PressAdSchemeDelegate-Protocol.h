//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol PressAdSchemeDelegate <NSObject>

@optional
- (void)pressAdShowEnd;
- (void)pressAdShowStart;
- (void)pressAdLoadFailed:(NSError *)arg1;
- (void)pressAdLoadSuccessWithAdInfos:(id)arg1 embedInfos:(id)arg2;
- (void)pressAdLoadStart;
@end

