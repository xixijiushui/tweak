//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class PLPullToRefreshView;

@interface UIScrollView (PLPullToRefresh)
@property(nonatomic) _Bool plShowsPullToRefresh; // @dynamic plShowsPullToRefresh;
@property(readonly, nonatomic) PLPullToRefreshView *plPullToRefreshView; // @dynamic plPullToRefreshView;
- (void)setPlPullToRefreshView:(id)arg1;
- (void)pl_resetOffsetAndTriggerPullToRefresh;
- (void)pl_triggerPullToRefresh;
- (void)pl_addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1;
- (void)pl_addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1 position:(unsigned long long)arg2;
@end
