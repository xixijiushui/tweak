//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFJSONModelToYYModelAdapter.h"

@class NSDictionary, NSString, RACSignal, RACSubject, YKFAPIModel;

@interface ALMBaseViewModel : YKFJSONModelToYYModelAdapter
{
    _Bool _enableUpdateSignal;
    YKFAPIModel *_dataModel;
    unsigned long long _viewModelState;
    long long _uniqueID;
    RACSubject *_updateSignal;
}

+ (id)modelPropertyBlacklist;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) RACSubject *updateSignal; // @synthesize updateSignal=_updateSignal;
@property(nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) unsigned long long viewModelState; // @synthesize viewModelState=_viewModelState;
@property(retain, nonatomic) YKFAPIModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) _Bool enableUpdateSignal; // @synthesize enableUpdateSignal=_enableUpdateSignal;
- (void).cxx_destruct;
- (id)loadData;
- (id)reloadData;
- (id)identifierString;
- (void)enqueueUpdate;
- (id)rac_updateSignal;
@property(readonly, getter=rac_listUpdateSignal) RACSignal *rac_updateSignal;
- (id)initWithDataModel:(id)arg1;
- (id)ykf_currentSpmWithSpmCD:(id)arg1;
@property(retain, nonatomic) NSDictionary *ykf_properties;
@property(copy, nonatomic) NSString *ykf_pageName;
@property(copy, nonatomic) NSString *ykf_spmB;
@property(copy, nonatomic) NSString *ykf_spmA;
@property(nonatomic) long long indexInCachedList;

@end
