//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageCallToAction, NSArray;

@protocol MFSuggestionHandlingDelegate <NSObject>
- (void)displayMultipleCallsToAction:(NSArray *)arg1 sender:(id)arg2;
- (void)ignoredAction:(MessageCallToAction *)arg1 sender:(id)arg2;
- (void)confirmedAction:(MessageCallToAction *)arg1 sender:(id)arg2;
@end

