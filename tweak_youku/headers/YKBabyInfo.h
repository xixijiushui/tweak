//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface YKBabyInfo : NSObject <NSCoding>
{
    int _gender;
    NSString *_birthday;
    NSString *_name;
    NSString *_avatar;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(nonatomic) int gender; // @synthesize gender=_gender;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
