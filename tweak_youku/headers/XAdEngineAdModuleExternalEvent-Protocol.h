//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XAdEngineAdModuleExternalEvent
@property(nonatomic) long long externalEvents;
- (void)endModuleExternalEvent:(long long)arg1;
- (void)startModuleExternalEvent:(long long)arg1;

@optional
- (_Bool)hasExternalEvents;
- (void)resetExternalEvents;
- (void)removeExternalEvent:(long long)arg1;
- (void)addExternalEvent:(long long)arg1;
- (_Bool)supportExternalEvent:(long long)arg1;
@end
