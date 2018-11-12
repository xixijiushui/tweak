//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CPModuleDelegate.h"
#import "CPModuleViewDelegate.h"

@class EPActivityView, MPModuleManager, NSString;

@interface EPLoadingView : UIView <CPModuleDelegate, CPModuleViewDelegate>
{
    EPActivityView *_activityView;
    unsigned long long _moduleID;
    MPModuleManager *_moduleManager;
    unsigned long long _visibility;
    id <MediaPlayerFeature><GeneralPlayerFeature> _moduleDelegate;
}

@property(nonatomic) id <MediaPlayerFeature><GeneralPlayerFeature> moduleDelegate; // @synthesize moduleDelegate=_moduleDelegate;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(nonatomic) MPModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
@property(nonatomic) unsigned long long moduleID; // @synthesize moduleID=_moduleID;
- (void).cxx_destruct;
- (void)removeActivityView;
- (void)setupActivityView;
- (void)willShow;
- (void)willHide;
- (long long)viewIndex;
- (void)layout:(long long)arg1;
- (void)endSection:(id)arg1;
- (void)willSection:(id)arg1;
- (void)willPlay;
- (void)preload;
- (void)endPend;
- (void)willPend;
- (long long)moduleType;
- (void)initModule;
- (void)deinitModule;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

