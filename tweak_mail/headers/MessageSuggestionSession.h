//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore;

@interface MessageSuggestionSession : NSObject
{
    struct __CFDictionary *_resultsMapping;
    EKEventStore *_eventStore;
}

@property(readonly, retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void)_setResult:(id)arg1 forCallToAction:(id)arg2;
- (id)_resultForCallToAction:(id)arg1;
- (id)contactForCallToAction:(id)arg1;
- (id)eventForCallToAction:(id)arg1;
- (void)setEvent:(id)arg1 forCallToAction:(id)arg2;
- (void)setContact:(id)arg1 forCallToAction:(id)arg2;
- (void)dealloc;
- (id)init;

@end
