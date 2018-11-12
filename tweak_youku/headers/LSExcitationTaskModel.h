//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSRewardModel, NSDictionary, NSMutableArray, NSString;

@interface LSExcitationTaskModel : NSObject
{
    double _dateFrom;
    double _dateTo;
    NSString *_extraText;
    unsigned long long _taskId;
    NSDictionary *_utParams;
    NSString *_strDescription;
    NSString *_name;
    NSMutableArray *_arrModelTarget;
    LSRewardModel *_modelReward;
}

@property(retain, nonatomic) LSRewardModel *modelReward; // @synthesize modelReward=_modelReward;
@property(retain, nonatomic) NSMutableArray *arrModelTarget; // @synthesize arrModelTarget=_arrModelTarget;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *strDescription; // @synthesize strDescription=_strDescription;
@property(retain, nonatomic) NSDictionary *utParams; // @synthesize utParams=_utParams;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSString *extraText; // @synthesize extraText=_extraText;
@property(nonatomic) double dateTo; // @synthesize dateTo=_dateTo;
@property(nonatomic) double dateFrom; // @synthesize dateFrom=_dateFrom;
- (void).cxx_destruct;
- (id)initWithDictTask:(id)arg1;

@end

