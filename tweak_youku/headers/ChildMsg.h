//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChildMsg : NSObject
{
    long long _msgId;
    long long _sort;
    long long _wanxiangId;
    NSString *_buttonLabel;
    NSString *_extra;
    NSString *_name;
    NSString *_pic;
    NSString *_type;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSString *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(nonatomic) long long wanxiangId; // @synthesize wanxiangId=_wanxiangId;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;

@end

