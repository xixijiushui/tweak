//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASWeakSet;

@interface ASPendingStateController : NSObject
{
    struct Mutex _lock;
    struct ASPendingStateControllerFlags _flags;
    _Bool _hasChanges;
    ASWeakSet *_dirtyNodes;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) ASWeakSet *dirtyNodes; // @synthesize dirtyNodes=_dirtyNodes;
@property(readonly, nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)scheduleFlushIfNeeded;
- (void)flush;
- (void)registerNode:(id)arg1;
- (id)init;
- (_Bool)test_isFlushScheduled;

@end

