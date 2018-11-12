//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface UTExposureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_exposureSerialQueue;
    struct NSMutableDictionary *_datas;
    struct NSMutableDictionary *_exposingDatas;
    NSMutableSet *_exposedDataKeys;
}

+ (id)blockWithView:(id)arg1;
+ (id)viewIdWithView:(id)arg1;
+ (id)exposedKeyWithBlock:(id)arg1 andViewId:(id)arg2;
+ (void)viewBecomeInVisible:(id)arg1;
+ (void)viewBecomeVisible:(id)arg1;
+ (_Bool)isViewVisible:(id)arg1;
+ (void)findDestViewInSubviewsAndAdjustState:(id)arg1 recursive:(_Bool)arg2;
+ (void)handlerAutoExposure:(id)arg1;
+ (id)utExposureViewTagWithView:(id)arg1;
+ (id)urlFromView:(id)arg1;
+ (void)_commitItems:(id)arg1;
+ (void)refreshBlock:(id)arg1 controlName:(id)arg2 viewIndex:(id)arg3;
+ (void)refreshBlock:(id)arg1 controlName:(id)arg2;
+ (void)refreshBlock:(id)arg1;
+ (void)setState:(unsigned long long)arg1 forView:(id)arg2;
+ (void)adjustStateForView:(id)arg1 recursive:(_Bool)arg2;
+ (void)commitPolymerInfoForAllPage;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableSet *exposedDataKeys; // @synthesize exposedDataKeys=_exposedDataKeys;
@property(retain, nonatomic) NSMutableDictionary *exposingDatas; // @synthesize exposingDatas=_exposingDatas;
@property(retain, nonatomic) NSMutableDictionary *datas; // @synthesize datas=_datas;
- (void).cxx_destruct;
- (id)_containIndex:(id)arg1 inItems:(id)arg2;
- (void)_removeItemsWithControlName:(id)arg1 inPage:(id)arg2;
- (void)_addItem:(id)arg1;
- (id)_itemForControlName:(id)arg1 inPage:(id)arg2;
- (id)_itemsForPage:(id)arg1;
- (id)_itemsForAllPage;
- (void)_addExposingItem:(id)arg1;
- (id)_exposingItemsForControlName:(id)arg1;
- (id)getSerialQueue;
- (void)handlerNotificationForUTExposure:(id)arg1;
- (void)dealloc;
- (id)init;

@end
