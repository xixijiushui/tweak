//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LFVoteDetail : NSObject
{
    _Bool _voteFromMe;
    long long _voteId;
    long long _num;
    long long _price;
    long long _voteNumberOfPerson;
    double _percent;
    NSString *_url;
    NSString *_name;
    long long _totalNum;
}

+ (id)modelWithDictionary:(id)arg1;
@property(nonatomic) long long totalNum; // @synthesize totalNum=_totalNum;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool voteFromMe; // @synthesize voteFromMe=_voteFromMe;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) long long voteNumberOfPerson; // @synthesize voteNumberOfPerson=_voteNumberOfPerson;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(nonatomic) long long voteId; // @synthesize voteId=_voteId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

