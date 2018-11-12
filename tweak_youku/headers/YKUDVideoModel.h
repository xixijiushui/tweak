//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSNumber, NSString;

@interface YKUDVideoModel : NSObject
{
    _Bool _resolveRetryFlag;
    _Bool _resolvingAsync;
    _Bool _adChanged;
    _Bool _singleVideoRetried;
    _Bool _hasLogo;
    _Bool _segmentsChanged;
    NSString *_vid;
    NSString *_cacheSource;
    NSString *_language;
    unsigned long long _videoDefinition;
    NSString *_taskId;
    double _addedTimestamp;
    NSArray *_segments;
    NSArray *_ads;
    NSDictionary *_adInfo;
    unsigned long long _errorStage;
    NSError *_error;
    unsigned long long _downloadState;
    long long _totolSize;
    NSString *_title;
    double _currentBaseSpeed;
    double _currentExtraSpeed;
    long long _singleVideoRetriedCount;
    NSArray *_points;
    NSDictionary *_preview;
    NSNumber *_playDuration;
    NSNumber *_showVideoType;
    long long _isPhoneStream;
    NSArray *_videoTypeArray;
    NSDictionary *_upsInfo;
    NSString *_sessionId;
    long long _actionSequence;
    double _videoDownloadDuration;
    long long _finishedSize;
    double _lastStartTimestamp;
    NSString *_standardErrorCode;
    double _finishEventNotified;
    NSString *_password;
    NSString *_requestToken;
    NSString *_ctype;
    NSString *_lastUPSUrl;
    id <YKUDDownloadCoreProtocol> _downloadingCore;
    id <YKUDVideoDownloadEventTracker> _tracker;
    NSString *_restartReason;
    long long _upsErrorCount;
}

@property long long upsErrorCount; // @synthesize upsErrorCount=_upsErrorCount;
@property(retain) NSString *restartReason; // @synthesize restartReason=_restartReason;
@property(retain, nonatomic) id <YKUDVideoDownloadEventTracker> tracker; // @synthesize tracker=_tracker;
@property __weak id <YKUDDownloadCoreProtocol> downloadingCore; // @synthesize downloadingCore=_downloadingCore;
@property _Bool segmentsChanged; // @synthesize segmentsChanged=_segmentsChanged;
@property(retain) NSString *lastUPSUrl; // @synthesize lastUPSUrl=_lastUPSUrl;
@property(retain, nonatomic) NSString *ctype; // @synthesize ctype=_ctype;
@property(retain) NSString *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) double finishEventNotified; // @synthesize finishEventNotified=_finishEventNotified;
@property(nonatomic) _Bool hasLogo; // @synthesize hasLogo=_hasLogo;
@property(retain) NSString *standardErrorCode; // @synthesize standardErrorCode=_standardErrorCode;
@property double lastStartTimestamp; // @synthesize lastStartTimestamp=_lastStartTimestamp;
@property long long finishedSize; // @synthesize finishedSize=_finishedSize;
@property(nonatomic) double videoDownloadDuration; // @synthesize videoDownloadDuration=_videoDownloadDuration;
@property long long actionSequence; // @synthesize actionSequence=_actionSequence;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSDictionary *upsInfo; // @synthesize upsInfo=_upsInfo;
@property(retain, nonatomic) NSArray *videoTypeArray; // @synthesize videoTypeArray=_videoTypeArray;
@property(nonatomic) long long isPhoneStream; // @synthesize isPhoneStream=_isPhoneStream;
@property(retain, nonatomic) NSNumber *showVideoType; // @synthesize showVideoType=_showVideoType;
@property(retain, nonatomic) NSNumber *playDuration; // @synthesize playDuration=_playDuration;
@property(retain, nonatomic) NSDictionary *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(nonatomic) long long singleVideoRetriedCount; // @synthesize singleVideoRetriedCount=_singleVideoRetriedCount;
@property(nonatomic) _Bool singleVideoRetried; // @synthesize singleVideoRetried=_singleVideoRetried;
@property _Bool adChanged; // @synthesize adChanged=_adChanged;
@property _Bool resolvingAsync; // @synthesize resolvingAsync=_resolvingAsync;
@property _Bool resolveRetryFlag; // @synthesize resolveRetryFlag=_resolveRetryFlag;
@property double currentExtraSpeed; // @synthesize currentExtraSpeed=_currentExtraSpeed;
@property double currentBaseSpeed; // @synthesize currentBaseSpeed=_currentBaseSpeed;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long totolSize; // @synthesize totolSize=_totolSize;
@property unsigned long long downloadState; // @synthesize downloadState=_downloadState;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long errorStage; // @synthesize errorStage=_errorStage;
@property(retain, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
@property(retain) NSArray *ads; // @synthesize ads=_ads;
@property(retain) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) double addedTimestamp; // @synthesize addedTimestamp=_addedTimestamp;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long videoDefinition; // @synthesize videoDefinition=_videoDefinition;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSString *cacheSource; // @synthesize cacheSource=_cacheSource;
@property(readonly, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *downloadFolderPath;
- (void)saveTo:(id)arg1;
- (void)saveToDefaultPath;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (id)initWithIdentifer:(id)arg1 andCacheSource:(id)arg2;
- (id)init;

@end
