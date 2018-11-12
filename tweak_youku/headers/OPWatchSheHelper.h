//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, OPWatchSheModel, YKJSONClient;

@interface OPWatchSheHelper : NSObject
{
    _Bool _watchSheSwitch;
    NSArray *_watchSheModels;
    OPWatchSheModel *_currentWatchSheModel;
    YKJSONClient *_jsonClient;
}

+ (_Bool)needShowWatchSheTips;
+ (void)saveWatchSheTipsState;
+ (void)saveWatchSheWithModel:(id)arg1 sid:(id)arg2;
+ (double)nextProgressValueWithSections:(id)arg1 currentTime:(double)arg2 threshold:(double)arg3;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(nonatomic) _Bool watchSheSwitch; // @synthesize watchSheSwitch=_watchSheSwitch;
@property(retain, nonatomic) OPWatchSheModel *currentWatchSheModel; // @synthesize currentWatchSheModel=_currentWatchSheModel;
@property(copy, nonatomic) NSArray *watchSheModels; // @synthesize watchSheModels=_watchSheModels;
- (void).cxx_destruct;
- (id)findFirstWatchSheModelWithSID:(id)arg1;
- (long long)findIndexWithModel:(id)arg1;
- (void)fetchWatchSheDataWithVID:(id)arg1 showID:(id)arg2 coverImageURL:(id)arg3 manager:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)initWithJSONClient:(id)arg1;

@end

