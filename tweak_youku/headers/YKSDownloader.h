//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YKSDownloader : NSObject
{
    NSMutableArray *_taskQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
- (void).cxx_destruct;
- (void)cancelAllTask;
- (void)startTask:(id)arg1 withObserver:(id)arg2;
- (id)init;
- (void)dealloc;

@end
