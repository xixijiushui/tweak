//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface Comment : NSObject
{
    _Bool _isVip;
    NSString *_time;
    NSString *_content;
    NSString *_name;
    NSString *_username;
    NSString *_status;
    NSString *_cid;
    NSDate *_date;
    NSString *_avatar;
    double _height;
    long long _memberType;
    NSString *_vipGrade;
}

@property(copy, nonatomic) NSString *vipGrade; // @synthesize vipGrade=_vipGrade;
@property(nonatomic) long long memberType; // @synthesize memberType=_memberType;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

