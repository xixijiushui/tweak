//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface DYKUploadOSSMonitorModel : NSObject
{
    NSString *_uid;
    NSString *_stage;
    NSString *_subStage;
    NSString *_errorSource;
    NSString *_errorCode;
    NSString *_videoId;
    NSString *_title;
    NSString *_uniqueId;
    NSString *_timeStamp;
    NSNumber *_duration;
    NSNumber *_retryCount;
    NSNumber *_totalRetryCount;
    NSNumber *_costTime;
    NSNumber *_gifSize;
    NSNumber *_snapshotSize;
    NSNumber *_videoSize;
    NSString *_videoPath;
    NSString *_snapshotPath;
    NSString *_gifPath;
    NSString *_realErrorDesc;
    NSString *_realErrorStack;
    NSString *_businessType;
    NSString *_isCache;
    NSNumber *_avgSpeed;
    NSNumber *_validateTime;
    NSNumber *_createTime;
    NSNumber *_saveTime;
    NSNumber *_stsTime;
    NSNumber *_snapshotTime;
    NSNumber *_gifTime;
    NSNumber *_videoTime;
    NSNumber *_completeTime;
    NSNumber *_retryTime;
}

@property(copy, nonatomic) NSNumber *retryTime; // @synthesize retryTime=_retryTime;
@property(copy, nonatomic) NSNumber *completeTime; // @synthesize completeTime=_completeTime;
@property(copy, nonatomic) NSNumber *videoTime; // @synthesize videoTime=_videoTime;
@property(copy, nonatomic) NSNumber *gifTime; // @synthesize gifTime=_gifTime;
@property(copy, nonatomic) NSNumber *snapshotTime; // @synthesize snapshotTime=_snapshotTime;
@property(copy, nonatomic) NSNumber *stsTime; // @synthesize stsTime=_stsTime;
@property(copy, nonatomic) NSNumber *saveTime; // @synthesize saveTime=_saveTime;
@property(copy, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSNumber *validateTime; // @synthesize validateTime=_validateTime;
@property(copy, nonatomic) NSNumber *avgSpeed; // @synthesize avgSpeed=_avgSpeed;
@property(copy, nonatomic) NSString *isCache; // @synthesize isCache=_isCache;
@property(copy, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *realErrorStack; // @synthesize realErrorStack=_realErrorStack;
@property(copy, nonatomic) NSString *realErrorDesc; // @synthesize realErrorDesc=_realErrorDesc;
@property(copy, nonatomic) NSString *gifPath; // @synthesize gifPath=_gifPath;
@property(copy, nonatomic) NSString *snapshotPath; // @synthesize snapshotPath=_snapshotPath;
@property(copy, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(copy, nonatomic) NSNumber *videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSNumber *snapshotSize; // @synthesize snapshotSize=_snapshotSize;
@property(copy, nonatomic) NSNumber *gifSize; // @synthesize gifSize=_gifSize;
@property(copy, nonatomic) NSNumber *costTime; // @synthesize costTime=_costTime;
@property(copy, nonatomic) NSNumber *totalRetryCount; // @synthesize totalRetryCount=_totalRetryCount;
@property(copy, nonatomic) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorSource; // @synthesize errorSource=_errorSource;
@property(copy, nonatomic) NSString *subStage; // @synthesize subStage=_subStage;
@property(copy, nonatomic) NSString *stage; // @synthesize stage=_stage;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;

@end
