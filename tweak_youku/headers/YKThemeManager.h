//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKThemeManager : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) long long state;
- (void)refreshIconInsets;
- (void)checkState;
@property(readonly, nonatomic) double bottomInset;
@property(readonly, nonatomic) long long themeStatusBarStyle;
- (_Bool)isThemePrepared;

@end

