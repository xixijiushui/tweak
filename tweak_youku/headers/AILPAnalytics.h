//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AILPAnalytics : NSObject
{
    id <AILPAnalyticsProtocol> _adapter;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <AILPAnalyticsProtocol> adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (void)pageDisappear:(id)arg1 properties:(id)arg2;
- (void)updatePageObject:(id)arg1 properties:(id)arg2;
- (void)updatePageObject:(id)arg1 pageName:(id)arg2;
- (void)pageAppear:(id)arg1 properties:(id)arg2;
- (void)customEvent:(id)arg1 eventId:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 properties:(id)arg6;
- (void)event:(id)arg1 label:(id)arg2 properties:(id)arg3;

@end

