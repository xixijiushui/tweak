//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface VERecordVideo : NSObject
{
    NSString *_videoPath;
    double _start;
    double _end;
    double _recordFileSize;
    NSMutableArray *_faceDetectResults;
}

+ (double)durationWithVideoPath:(id)arg1;
+ (double)fileSizeAtPath:(id)arg1;
@property(retain, nonatomic) NSMutableArray *faceDetectResults; // @synthesize faceDetectResults=_faceDetectResults;
@property(readonly, nonatomic) double recordFileSize; // @synthesize recordFileSize=_recordFileSize;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void).cxx_destruct;
- (void)deleteLocalFile;
- (void)findRecordFileSize;
@property(readonly, nonatomic) double duration;
- (void)dealloc;

@end
