//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TRDThreadService : NSObject
{
    NSObject<OS_dispatch_queue> *_trdThreadHandle;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *trdThreadHandle; // @synthesize trdThreadHandle=_trdThreadHandle;
- (void).cxx_destruct;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)init;

@end

