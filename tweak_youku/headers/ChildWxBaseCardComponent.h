//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildWxComponent.h"

#import "CAAnimationDelegate.h"
#import "ChildBaseCardViewDelegate.h"
#import "ChildWxComponentDelegate.h"

@class ChildJSUTData, NSString;

@interface ChildWxBaseCardComponent : ChildWxComponent <ChildBaseCardViewDelegate, ChildWxComponentDelegate, CAAnimationDelegate>
{
    _Bool _listenOnAddBlackList;
    ChildJSUTData *_utdata;
}

@property(retain, nonatomic) ChildJSUTData *utdata; // @synthesize utdata=_utdata;
@property(nonatomic) _Bool listenOnAddBlackList; // @synthesize listenOnAddBlackList=_listenOnAddBlackList;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)tryAddToBlackList:(id)arg1;
- (id)getHAction;
- (id)getSeriesId;
- (id)getShowName;
- (id)getShowId;
- (void)childBaseCardViewOnAddToBlackList;
- (void)childBaseCardViewOnLongPressed;
- (void)childBaseCardViewOnTap;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

