//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableSet, NSRecursiveLock, NSSet, TKState;

@interface TKStateMachine : NSObject <NSCoding, NSCopying>
{
    _Bool _active;
    TKState *_initialState;
    TKState *_currentState;
    NSMutableSet *_mutableStates;
    NSMutableSet *_mutableEvents;
    NSRecursiveLock *_lock;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableSet *mutableEvents; // @synthesize mutableEvents=_mutableEvents;
@property(retain, nonatomic) NSMutableSet *mutableStates; // @synthesize mutableStates=_mutableStates;
@property(retain, nonatomic) TKState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) TKState *initialState; // @synthesize initialState=_initialState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)fireEvent:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (_Bool)canFireEvent:(id)arg1;
- (void)activate;
- (id)eventNamed:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1;
@property(readonly, nonatomic) NSSet *events;
- (_Bool)isInState:(id)arg1;
- (id)stateNamed:(id)arg1;
- (void)addStates:(id)arg1;
- (void)addState:(id)arg1;
@property(readonly, nonatomic) NSSet *states;
- (id)description;
- (id)init;

@end

