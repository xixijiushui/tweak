//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OSSTask;

@interface OSSTaskCompletionSource : NSObject
{
    OSSTask *_task;
}

+ (id)taskCompletionSource;
@property(readonly, nonatomic) OSSTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (_Bool)trySetCancelled;
- (_Bool)trySetException:(id)arg1;
- (_Bool)trySetError:(id)arg1;
- (_Bool)trySetResult:(id)arg1;
- (void)cancel;
- (void)setException:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (id)init;

@end

