//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol YKShareDelegate <NSObject>

@optional
@property(copy, nonatomic) NSString *unInstallIcon;
@property(copy, nonatomic) NSString *shareIconName;
@property(copy, nonatomic) NSString *iconPath;
@property(nonatomic) double expires;
@property(copy, nonatomic) NSString *accessToken;
@property(copy, nonatomic) NSString *uid;
@property(copy, nonatomic) NSString *name;
- (_Bool)isShowInstall;
- (_Bool)isInstall;
- (_Bool)supportRefresh;
@end
