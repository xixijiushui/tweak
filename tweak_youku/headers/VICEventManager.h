//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICContainerSubModule.h"

#import "VICEventPostProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface VICEventManager : VICContainerSubModule <VICEventPostProtocol>
{
    _Bool _isForeach;
    NSMutableDictionary *_observerInfo;
    NSMutableArray *_delObservers;
}

@property(retain, nonatomic) NSMutableArray *delObservers; // @synthesize delObservers=_delObservers;
@property(nonatomic) _Bool isForeach; // @synthesize isForeach=_isForeach;
@property(retain, nonatomic) NSMutableDictionary *observerInfo; // @synthesize observerInfo=_observerInfo;
- (void).cxx_destruct;
- (void)postEvent:(id)arg1;
- (void)safeRemoveObserver;
- (void)removeObserver:(id)arg1;
- (_Bool)registerEvent:(id)arg1 withObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

