//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBar.h"

@interface YKTabBarImpl : UITabBar
{
}

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
@property(nonatomic) _Bool pressed;
- (void)longPress:(id)arg1;
- (void)addLongGestureForFirstItem;

// Remaining properties
@property(nonatomic) __weak id <YKTabBarDelegate> delegate; // @dynamic delegate;

@end
