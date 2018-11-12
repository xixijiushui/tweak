//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliNNFaceDetectionNetFaceOutput : NSObject
{
    long long _faceId;
    struct CGPoint *_keyPoints;
    double *_visibilities;
    double _score;
    double _yaw;
    double _pitch;
    double _roll;
    struct CGRect _rect;
}

@property(nonatomic) double roll; // @synthesize roll=_roll;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) double *visibilities; // @synthesize visibilities=_visibilities;
@property(nonatomic) struct CGPoint *keyPoints; // @synthesize keyPoints=_keyPoints;
@property(nonatomic) long long faceId; // @synthesize faceId=_faceId;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void)dealloc;

@end
