//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface YKUDThreadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_refreshActionQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *refreshActionQueue; // @synthesize refreshActionQueue=_refreshActionQueue;
- (void).cxx_destruct;
- (void)commitRefreshAction:(CDUnknownBlockType)arg1;
- (id)init;

@end
