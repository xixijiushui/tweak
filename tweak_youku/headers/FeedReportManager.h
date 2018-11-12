//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FeedReportViewDelegate.h"

@class FeedReportView, LOTAnimationView, NSString;

@interface FeedReportManager : NSObject <FeedReportViewDelegate>
{
    _Bool _hasNoShow;
    CDUnknownBlockType _closeCompletionBlock;
    FeedReportView *_reportView;
    LOTAnimationView *_aniView;
}

@property(nonatomic) _Bool hasNoShow; // @synthesize hasNoShow=_hasNoShow;
@property(retain, nonatomic) LOTAnimationView *aniView; // @synthesize aniView=_aniView;
@property(retain, nonatomic) FeedReportView *reportView; // @synthesize reportView=_reportView;
@property(copy, nonatomic) CDUnknownBlockType closeCompletionBlock; // @synthesize closeCompletionBlock=_closeCompletionBlock;
- (void).cxx_destruct;
- (void)uploadAnalyticsKey:(id)arg1 value:(id)arg2;
- (void)like;
- (void)closeImpl;
- (void)close;
- (void)gotoFeedReportPage;
- (void)showFeedReportViewAtView:(id)arg1;
- (void)saveNoShow;
- (void)saveHasShowed;
- (_Bool)isNeedShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

