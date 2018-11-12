//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface ChannelGroupItem : NSObject <NSCoding, NSCopying>
{
    _Bool _hasCollection;
    _Bool _showFilter;
    NSString *_title;
    NSString *_icon;
    NSString *_largeIcon;
    long long _tid;
    unsigned long long _jumpType;
    long long _jumpSubCid;
    NSString *_jumpURL;
    NSString *_cpsID;
    long long _used;
}

+ (id)parseChannelGroupItem:(id)arg1;
+ (id)parse:(id)arg1;
@property(nonatomic) long long used; // @synthesize used=_used;
@property(nonatomic) _Bool showFilter; // @synthesize showFilter=_showFilter;
@property(nonatomic) _Bool hasCollection; // @synthesize hasCollection=_hasCollection;
@property(retain, nonatomic) NSString *cpsID; // @synthesize cpsID=_cpsID;
@property(retain, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(nonatomic) long long jumpSubCid; // @synthesize jumpSubCid=_jumpSubCid;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) long long tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *largeIcon; // @synthesize largeIcon=_largeIcon;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

