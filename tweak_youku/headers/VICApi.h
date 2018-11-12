//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VICContainer;

@interface VICApi : NSObject
{
    VICContainer *_container;
}

+ (_Bool)switchOn;
@property(retain, nonatomic) VICContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deinit;
- (void)postEvent:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)registerEvent:(id)arg1 withObserver:(id)arg2;
- (_Bool)registerAdapter:(id)arg1 withProtocol:(id)arg2;
- (_Bool)registerAdapterClass:(id)arg1 withProtocol:(id)arg2;
- (_Bool)registerPlugin:(id)arg1 withClass:(id)arg2 events:(id)arg3;
- (void)stopLoading;
- (void)startLoading;
- (id)containerView;
- (void)loadConfigWithLayersPlist:(id)arg1 pluginsPlist:(id)arg2;
- (void)setViewController:(id)arg1;
- (void)registerWeexModules;
- (void)setup;
- (id)init;

@end

