//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LFVoteActivity : NSObject
{
    _Bool _isVoted;
    _Bool _isShowResult;
    _Bool _isFree;
    long long _voteId;
    NSString *_title;
    NSString *_activityMark;
    long long _price;
    unsigned long long _voteNums;
    NSArray *_voteDetails;
    unsigned long long _voteState;
}

+ (id)modelWithDictionary:(id)arg1;
@property(nonatomic) unsigned long long voteState; // @synthesize voteState=_voteState;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(nonatomic) _Bool isShowResult; // @synthesize isShowResult=_isShowResult;
@property(nonatomic) _Bool isVoted; // @synthesize isVoted=_isVoted;
@property(copy, nonatomic) NSArray *voteDetails; // @synthesize voteDetails=_voteDetails;
@property(nonatomic) unsigned long long voteNums; // @synthesize voteNums=_voteNums;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *activityMark; // @synthesize activityMark=_activityMark;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long voteId; // @synthesize voteId=_voteId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

