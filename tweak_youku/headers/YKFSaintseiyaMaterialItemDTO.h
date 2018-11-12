//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFSaintseiyaReportExtendDTO, YKFSaintseiyaUserItemDTO, YKFSaintseiyaVideoItemDTO;

@interface YKFSaintseiyaMaterialItemDTO : YKFAPIModel
{
    NSString *_action;
    NSString *_author;
    long long _obj_id;
    NSString *_lyric;
    NSString *_lyricContent;
    NSString *_materialId;
    long long _musicId;
    NSString *_operatorDuration;
    long long _playType;
    YKFSaintseiyaReportExtendDTO *_reportExtend;
    NSString *_thumbnailUrl;
    NSString *_title;
    YKFSaintseiyaUserItemDTO *_userInfo;
    YKFSaintseiyaVideoItemDTO *_videoInfo;
}

@property(retain, nonatomic) YKFSaintseiyaVideoItemDTO *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) YKFSaintseiyaUserItemDTO *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportExtend; // @synthesize reportExtend=_reportExtend;
@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString *operatorDuration; // @synthesize operatorDuration=_operatorDuration;
@property(nonatomic) long long musicId; // @synthesize musicId=_musicId;
@property(retain, nonatomic) NSString *materialId; // @synthesize materialId=_materialId;
@property(retain, nonatomic) NSString *lyricContent; // @synthesize lyricContent=_lyricContent;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

