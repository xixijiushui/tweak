//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray, NSArray<YKFStararrivalVoteOptionPO>, NSString;

@interface YKFStararrivalVotePO : YKFAPIModel
{
    NSString *_tdescription;
    long long _gmtStart;
    long long _gmtStop;
    long long _obj_id;
    NSArray *_imageUrls;
    long long _optionalNumber;
    NSArray<YKFStararrivalVoteOptionPO> *_options;
    long long _participants;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long participants; // @synthesize participants=_participants;
@property(retain, nonatomic) NSArray<YKFStararrivalVoteOptionPO> *options; // @synthesize options=_options;
@property(nonatomic) long long optionalNumber; // @synthesize optionalNumber=_optionalNumber;
@property(retain, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(nonatomic) long long gmtStop; // @synthesize gmtStop=_gmtStop;
@property(nonatomic) long long gmtStart; // @synthesize gmtStart=_gmtStart;
@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

