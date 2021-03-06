//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAnalyticsReporterBase.h"

@class NSDate, NSMutableDictionary, NSMutableSet;

@interface ICSnapshotAnalyticsReporter : ICAnalyticsReporterBase
{
    _Bool _previousLoggingHasFinished;
    NSDate *_timeStampForPreviousLogging;
    NSMutableDictionary *_blocksForNonCountKeys;
    NSMutableSet *_distributionKeysToResetBeforeLogging;
    unsigned long long _keysThatHaveFinishedLogging;
}

+ (id)sharedReporter;
@property unsigned long long keysThatHaveFinishedLogging; // @synthesize keysThatHaveFinishedLogging=_keysThatHaveFinishedLogging;
@property(retain) NSMutableSet *distributionKeysToResetBeforeLogging; // @synthesize distributionKeysToResetBeforeLogging=_distributionKeysToResetBeforeLogging;
@property(retain) NSMutableDictionary *blocksForNonCountKeys; // @synthesize blocksForNonCountKeys=_blocksForNonCountKeys;
@property(retain, nonatomic) NSDate *timeStampForPreviousLogging; // @synthesize timeStampForPreviousLogging=_timeStampForPreviousLogging;
@property _Bool previousLoggingHasFinished; // @synthesize previousLoggingHasFinished=_previousLoggingHasFinished;
- (void).cxx_destruct;
- (_Bool)shouldConsiderLegacyAccount:(struct NoteAccountObject *)arg1;
- (_Bool)localAccountIsMigrated;
- (id)legacyContext;
- (id)predicateForPPNotes;
- (id)ICFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2;
- (id)legacyFetchRequestWithEntityName:(id)arg1 andPredicate:(id)arg2;
- (void)performLoggingOnlyForNonCountKeys:(id)arg1;
- (void)performRepetitiveClearAndLogForNonCountKeys:(id)arg1;
- (void)performClearAndLogForNonCountKeys;
- (id)init;

@end

