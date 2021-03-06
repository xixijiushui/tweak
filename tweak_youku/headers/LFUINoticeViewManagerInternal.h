//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFUINoticeOverlayView, LFUINoticeView, NSMutableArray, NSMutableDictionary, UIView, UIWindow;

@interface LFUINoticeViewManagerInternal : NSObject
{
    _Bool _showingMessage;
    NSMutableArray *_prendingMessages;
    NSMutableDictionary *_suspensionTokens;
    LFUINoticeOverlayView *_overlayView;
    UIView *_presentationHostView;
    UIWindow *_displayedInWindow;
    LFUINoticeView *_currentNoticeView;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool showingMessage; // @synthesize showingMessage=_showingMessage;
@property(retain, nonatomic) LFUINoticeView *currentNoticeView; // @synthesize currentNoticeView=_currentNoticeView;
@property(retain, nonatomic) UIWindow *displayedInWindow; // @synthesize displayedInWindow=_displayedInWindow;
@property(retain, nonatomic) UIView *presentationHostView; // @synthesize presentationHostView=_presentationHostView;
@property(retain, nonatomic) LFUINoticeOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSMutableDictionary *suspensionTokens; // @synthesize suspensionTokens=_suspensionTokens;
@property(retain, nonatomic) NSMutableArray *prendingMessages; // @synthesize prendingMessages=_prendingMessages;
- (void).cxx_destruct;
- (void)removeSuspensionIdentifierMainThread:(id)arg1 forcategory:(id)arg2;
- (void)addSuspensionIdentifierMainThread:(id)arg1 forCategory:(id)arg2;
- (_Bool)categorySuspended:(id)arg1;
- (_Bool)allMessagesSuspendedMainThread;
- (void)dismissAndCallCompletionBlocksOnMainThreadWithCategory:(id)arg1;
- (void)showNoticeMainThread:(id)arg1;
- (void)deativateOverlay:(id)arg1;
- (void)activeOverlay:(id)arg1;
- (void)hideNoticeViewReally:(id)arg1 withAction:(id)arg2 userPrompted:(_Bool)arg3;
- (void)displayNoticeViewForNotice:(id)arg1;
- (void)showNextNoticeIfNecessaryMainThread;
- (id)dequeueNextShowableNoticeMainThread;
- (_Bool)shouldShowNoticeRightNowMainThread:(id)arg1;
- (id)init;

@end

