//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface LFULUser : NSObject
{
    _Bool _isFollowing;
    _Bool _isBlocking;
    int _gender;
    NSString *_ID;
    NSString *_name;
    NSURL *_avatarURL;
}

@property(nonatomic) _Bool isBlocking; // @synthesize isBlocking=_isBlocking;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(copy, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

