//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@protocol LFUserModel <NSObject>
@property(copy, nonatomic) NSDate *birthday;
@property(nonatomic) int gender;
@property(nonatomic) int age;
@property(nonatomic) unsigned long long role;
@property(copy, nonatomic) NSURL *avatarURL;
@property(copy, nonatomic) NSString *nickname;
@property(copy, nonatomic) NSString *ID;
@end
