//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SearchTabScrollerbar;

@protocol SearchTabScrollerbarDelegate <NSObject>
- (void)selectView:(SearchTabScrollerbar *)arg1 didSelectAtIndex:(long long)arg2;

@optional
- (void)selectView:(SearchTabScrollerbar *)arg1 willSelectAtIndex:(long long)arg2;
@end

