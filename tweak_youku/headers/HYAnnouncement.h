//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface HYAnnouncement : NSObject <NSSecureCoding>
{
    NSString *_link;
    NSString *_noticeType;
    NSString *_word;
    NSNumber *_startTime;
    NSString *_iconUrl;
    NSNumber *_endTime;
}

+ (id)buildFromDict:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *word; // @synthesize word=_word;
@property(copy, nonatomic) NSString *noticeType; // @synthesize noticeType=_noticeType;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

