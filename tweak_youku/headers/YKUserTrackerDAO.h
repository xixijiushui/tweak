//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSString;

@interface YKUserTrackerDAO : NSObject
{
    FMDatabase *_database;
    NSString *_storeKey;
}

@property(retain, nonatomic) NSString *storeKey; // @synthesize storeKey=_storeKey;
@property(retain, nonatomic) FMDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)detailedStringWithAction:(id)arg1 extend:(id)arg2;
- (id)queryWithSQL:(id)arg1;
- (void)vacuumWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)databaseCount;
- (id)queryUniqueViewActionsWithFormattedDateString:(id)arg1;
- (id)queryLatestN:(long long)arg1;
- (id)queryAll;
- (id)queryWithTimestamp:(double)arg1;
- (_Bool)drain;
- (void)deleteLatestN:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)deleteWithTimestamp:(double)arg1;
- (void)updateDrops:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)updatePage:(id)arg1 action:(id)arg2 timestamp:(double)arg3 extend:(id)arg4;
- (_Bool)create;
- (id)databaseFilePath;
- (id)connection;
- (void)dealloc;
- (id)initWithStoreKey:(id)arg1;
- (id)init;

@end
