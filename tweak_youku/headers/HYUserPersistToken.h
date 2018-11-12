//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface HYUserPersistToken : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_tokenString;
    double _startTime;
    double _endTime;
    NSString *_ytid;
    NSString *_yktk;
}

+ (id)objectWithJsonString:(id)arg1;
+ (id)persistTokenWithTokenString:(id)arg1 ytid:(id)arg2 yktk:(id)arg3 startTime:(double)arg4 endTime:(double)arg5;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *yktk; // @synthesize yktk=_yktk;
@property(readonly, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
- (void).cxx_destruct;
- (id)jsonString;
- (id)jsonDictionary;
- (_Bool)needsToUpdate;
- (_Bool)isExpired;
- (id)refreshDate;
- (id)expireDate;
- (id)startDate;
- (double)refreshDuration;
- (double)validDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

