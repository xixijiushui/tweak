//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SearchRecommandHistoryManager : NSObject
{
}

+ (id)sharedInstance;
- (id)readModelFromUserDefaults:(id)arg1;
- (void)notifyBeforeClearAllSearchHistory;
- (void)notifyBeforeClearSearchHistory:(id)arg1;
- (void)notifySearchOver:(id)arg1 videoModel:(id)arg2;
- (void)notifyBeforeSaveHistoryKeyword;

@end

