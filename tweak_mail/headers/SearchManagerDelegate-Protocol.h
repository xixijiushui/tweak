//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, SearchManager;

@protocol SearchManagerDelegate <NSObject>
- (void)searchManager:(SearchManager *)arg1 finishedSearchWithIdentifier:(NSNumber *)arg2;
- (void)searchManager:(SearchManager *)arg1 foundMessages:(NSArray *)arg2 keepExistingMessages:(_Bool)arg3 forSearchWithIdentifier:(NSNumber *)arg4 shouldWait:(_Bool)arg5;
@end

