//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UTTraceStack : NSObject
{
    NSMutableArray *mTraceStack;
    int _capacity;
}

+ (id)defaultInstance;
@property int capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (id)getTraceStack;
- (void)addTrace:(id)arg1;
- (id)init;

@end

