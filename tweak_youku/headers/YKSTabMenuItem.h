//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface YKSTabMenuItem : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_selectedIcon;
    NSString *_iconBadge;
    NSDictionary *_userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *iconBadge; // @synthesize iconBadge=_iconBadge;
@property(copy, nonatomic) NSString *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

