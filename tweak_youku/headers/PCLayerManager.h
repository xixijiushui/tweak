//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBLMPopRequestDelegate.h"

@class NSString, PCLayerConfigCenter, PCRequestList;

@interface PCLayerManager : NSObject <TBLMPopRequestDelegate>
{
    PCLayerConfigCenter *_configCenter;
    PCRequestList *_requestList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PCRequestList *requestList; // @synthesize requestList=_requestList;
@property(retain, nonatomic) PCLayerConfigCenter *configCenter; // @synthesize configCenter=_configCenter;
- (void).cxx_destruct;
- (void)onDiscard:(id)arg1;
- (void)onForceRemoved:(id)arg1;
- (void)onWaiting:(id)arg1;
- (void)onReady:(id)arg1;
- (_Bool)valideUris:(id)arg1;
- (id)layerRequestWithConfig:(id)arg1;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (void)tryOpen:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
