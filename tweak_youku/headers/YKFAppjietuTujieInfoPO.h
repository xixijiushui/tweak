//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFAppjietuTujieImgInfoPO>, NSString;

@interface YKFAppjietuTujieInfoPO : YKFAPIModel
{
    NSString *_coverImg;
    NSString *_createTime;
    NSString *_createUser;
    NSString *_obj_id;
    NSString *_imgCnt;
    NSString *_imgSize;
    NSArray<YKFAppjietuTujieImgInfoPO> *_imgs;
    NSString *_nextVid;
    NSString *_nextVidStatus;
    NSString *_opUser;
    NSString *_showId;
    NSString *_status;
    NSString *_title;
    NSString *_tujieId;
    NSString *_tujieWriter;
    NSString *_upTime;
    NSString *_videoId;
    NSString *_videostage;
}

@property(retain, nonatomic) NSString *videostage; // @synthesize videostage=_videostage;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *upTime; // @synthesize upTime=_upTime;
@property(retain, nonatomic) NSString *tujieWriter; // @synthesize tujieWriter=_tujieWriter;
@property(retain, nonatomic) NSString *tujieId; // @synthesize tujieId=_tujieId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *opUser; // @synthesize opUser=_opUser;
@property(retain, nonatomic) NSString *nextVidStatus; // @synthesize nextVidStatus=_nextVidStatus;
@property(retain, nonatomic) NSString *nextVid; // @synthesize nextVid=_nextVid;
@property(retain, nonatomic) NSArray<YKFAppjietuTujieImgInfoPO> *imgs; // @synthesize imgs=_imgs;
@property(retain, nonatomic) NSString *imgSize; // @synthesize imgSize=_imgSize;
@property(retain, nonatomic) NSString *imgCnt; // @synthesize imgCnt=_imgCnt;
@property(retain, nonatomic) NSString *obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSString *createUser; // @synthesize createUser=_createUser;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

