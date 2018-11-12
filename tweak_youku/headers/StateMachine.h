//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Character, NSDictionary;

@interface StateMachine : NSObject
{
    unsigned long long _currentState;
    NSDictionary *_currentStateToAnimationStateMap;
    unsigned long long _lastState;
    Character *_character;
}

+ (id)createStateMachineWithState:(unsigned long long)arg1 onCharacter:(id)arg2;
@property(nonatomic) __weak Character *character; // @synthesize character=_character;
@property unsigned long long lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) NSDictionary *currentStateToAnimationStateMap; // @synthesize currentStateToAnimationStateMap=_currentStateToAnimationStateMap;
@property unsigned long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (_Bool)dealEnterStateChasing;
- (_Bool)dealEnterStateDancing;
- (_Bool)dealEnterStateCute2;
- (_Bool)dealEnterStateCute1;
- (_Bool)dealEnterStateHi;
- (_Bool)dealEnterStateBye;
- (_Bool)dealEnterStateBusy;
- (_Bool)dealEnterStateTurning;
- (_Bool)dealEnterStateGossip;
- (_Bool)dealEnterStateTalk;
- (_Bool)dealEnterStateListening;
- (_Bool)dealEnterStateIdle;
- (void)backToIdle:(id)arg1;
- (_Bool)changeStateTo:(unsigned long long)arg1 forceToChange:(_Bool)arg2;
- (void)initWithCharacter:(id)arg1;

@end

