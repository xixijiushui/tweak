//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DYKUploadOSSMonitor : NSObject
{
    NSMutableDictionary *_modelKeys;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *modelKeys; // @synthesize modelKeys=_modelKeys;
- (void).cxx_destruct;
- (void)zds:(id)arg1 key:(id)arg2;
- (void)commitActionModel:(id)arg1;
- (id)getAllkeyFromClass:(Class)arg1;
- (void)doregisterKey:(id)arg1 class:(Class)arg2;
- (void)registerKey:(id)arg1 class:(Class)arg2;
- (id)init;

@end

