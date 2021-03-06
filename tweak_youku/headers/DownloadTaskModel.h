//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DownloadError, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface DownloadTaskModel : NSObject
{
    _Bool _hasStarted;
    _Bool _isFinishedDownload;
    _Bool _isReadForDownload;
    float _speed;
    double _eachPeriodStartTimestamp;
    double _elapsedDuration;
    NSDictionary *_userInfo;
    NSString *_recordId;
    NSString *_url;
    unsigned long long _videodefinition;
    NSMutableArray *_sequenceArray;
    unsigned long long _modelstate;
    NSNumber *_filesize;
    NSString *_audioTrack;
    NSString *_dsmTaskid;
    NSArray *_points;
    DownloadError *_error;
    double _baseSpeed;
    double _extraSpeed;
    long long _retryCount;
    long long _is_horizon_stream;
    NSArray *_videoTypeArray;
    NSDictionary *_sidData;
    NSString *_sid;
    NSNumber *_oip;
    NSNumber *_token;
    NSNumber *_duration;
    NSNumber *_streamlogos;
    NSNumber *_playvideotype;
    NSDictionary *_upsinfoDic;
    NSDictionary *_previewdic;
    NSDictionary *_ad;
    NSString *_cachesource;
    NSString *_encryvideoPassword;
    NSString *_standardErrorCode;
}

+ (id)createTaskidbyvid:(id)arg1 createtime:(double)arg2;
@property(retain, nonatomic) NSString *standardErrorCode; // @synthesize standardErrorCode=_standardErrorCode;
@property(retain, nonatomic) NSString *encryvideoPassword; // @synthesize encryvideoPassword=_encryvideoPassword;
@property(retain, nonatomic) NSString *cachesource; // @synthesize cachesource=_cachesource;
@property(retain, nonatomic) NSDictionary *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) NSDictionary *previewdic; // @synthesize previewdic=_previewdic;
@property(retain, nonatomic) NSDictionary *upsinfoDic; // @synthesize upsinfoDic=_upsinfoDic;
@property(retain, nonatomic) NSNumber *playvideotype; // @synthesize playvideotype=_playvideotype;
@property(retain, nonatomic) NSNumber *streamlogos; // @synthesize streamlogos=_streamlogos;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *token; // @synthesize token=_token;
@property(retain, nonatomic) NSNumber *oip; // @synthesize oip=_oip;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSDictionary *sidData; // @synthesize sidData=_sidData;
@property(retain, nonatomic) NSArray *videoTypeArray; // @synthesize videoTypeArray=_videoTypeArray;
@property(nonatomic) long long is_horizon_stream; // @synthesize is_horizon_stream=_is_horizon_stream;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double extraSpeed; // @synthesize extraSpeed=_extraSpeed;
@property(nonatomic) double baseSpeed; // @synthesize baseSpeed=_baseSpeed;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(retain, nonatomic) DownloadError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(copy, nonatomic) NSString *dsmTaskid; // @synthesize dsmTaskid=_dsmTaskid;
@property(copy, nonatomic) NSString *audioTrack; // @synthesize audioTrack=_audioTrack;
@property(retain, nonatomic) NSNumber *filesize; // @synthesize filesize=_filesize;
@property(nonatomic) unsigned long long modelstate; // @synthesize modelstate=_modelstate;
@property(nonatomic) _Bool isReadForDownload; // @synthesize isReadForDownload=_isReadForDownload;
@property(nonatomic) _Bool isFinishedDownload; // @synthesize isFinishedDownload=_isFinishedDownload;
@property(retain, nonatomic) NSMutableArray *sequenceArray; // @synthesize sequenceArray=_sequenceArray;
@property(nonatomic) unsigned long long videodefinition; // @synthesize videodefinition=_videodefinition;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double elapsedDuration; // @synthesize elapsedDuration=_elapsedDuration;
@property(nonatomic) double eachPeriodStartTimestamp; // @synthesize eachPeriodStartTimestamp=_eachPeriodStartTimestamp;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
- (void).cxx_destruct;
- (id)progress;
- (id)videoFileType;
- (unsigned long long)calculateCurrentFilesize;
- (id)videoFolderPath;
- (id)initWithRecordId:(id)arg1;
- (id)init;

@end

