//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OPLayoutControlPtotocol.h"
#import "OPLayoutModelGroupDelegate.h"

@class NSDictionary, NSString, OPLayoutManager, OPManagerFactory, UIView;

@interface OPLayoutControl : NSObject <OPLayoutModelGroupDelegate, OPLayoutControlPtotocol>
{
    _Bool _enabledConfigEvents;
    OPManagerFactory *_managerFactory;
    OPLayoutManager *_layoutManager;
    NSString *_layoutControlid;
    UIView *_containerView;
    NSDictionary *_params;
}

@property(nonatomic) _Bool enabledConfigEvents; // @synthesize enabledConfigEvents=_enabledConfigEvents;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *layoutControlid; // @synthesize layoutControlid=_layoutControlid;
@property(nonatomic) __weak OPLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) __weak OPManagerFactory *managerFactory; // @synthesize managerFactory=_managerFactory;
- (void).cxx_destruct;
- (void)update:(id)arg1;
- (void)received:(id)arg1;
- (void)uninstall;
- (void)run;
- (void)install:(id)arg1 params:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)onUpdate:(id)arg1;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

