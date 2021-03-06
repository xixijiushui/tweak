//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFTabViewControllerPlugin.h"

@class NSString, YKFTabViewController;

@interface YKFTabViewControllerPlugin_Base : NSObject <YKFTabViewControllerPlugin>
{
    YKFTabViewController *_tabViewController;
}

@property(nonatomic) YKFTabViewController *tabViewController; // @synthesize tabViewController=_tabViewController;
- (void)scrollViewDidScrollToIndex:(long long)arg1;
- (void)scrollViewWillScrollFromIndex:(long long)arg1;
- (void)scrollViewHorizontalScroll:(double)arg1;
- (void)scrollViewVerticalScroll:(double)arg1;
- (void)removePlugin;
- (void)loadPlugin;
- (void)initPlugin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

