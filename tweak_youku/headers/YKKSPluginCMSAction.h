//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSPluginDelegate.h"

@class KSInstance, NSString, UITapGestureRecognizer;

@interface YKKSPluginCMSAction : NSObject <KSPluginDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    KSInstance *_instance;
}

@property(nonatomic) __weak KSInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)ksInstance:(id)arg1 rootView:(id)arg2 renderStart:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

