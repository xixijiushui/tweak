//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RACStream : NSObject
{
    NSString *_name;
}

+ (id)return:(id)arg1;
+ (id)empty;
+ (id)concat:(id)arg1;
+ (id)zip:(id)arg1 reduce:(CDUnknownBlockType)arg2;
+ (id)zip:(id)arg1;
+ (id)join:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)setNameWithFormat:(id)arg1;
- (id)zipWith:(id)arg1;
- (id)concat:(id)arg1;
- (id)bind:(CDUnknownBlockType)arg1;
- (id)init;
- (id)distinctUntilChanged;
- (id)skipWhileBlock:(CDUnknownBlockType)arg1;
- (id)skipUntilBlock:(CDUnknownBlockType)arg1;
- (id)takeWhileBlock:(CDUnknownBlockType)arg1;
- (id)takeUntilBlock:(CDUnknownBlockType)arg1;
- (id)scanWithStart:(id)arg1 reduceWithIndex:(CDUnknownBlockType)arg2;
- (id)scanWithStart:(id)arg1 reduce:(CDUnknownBlockType)arg2;
- (id)take:(unsigned long long)arg1;
- (id)skip:(unsigned long long)arg1;
- (id)startWith:(id)arg1;
- (id)reduceEach:(CDUnknownBlockType)arg1;
- (id)ignore:(id)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)combinePreviousWithStart:(id)arg1 reduce:(CDUnknownBlockType)arg2;
- (id)mapReplace:(id)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)flatten;
- (id)flattenMap:(CDUnknownBlockType)arg1;

@end

