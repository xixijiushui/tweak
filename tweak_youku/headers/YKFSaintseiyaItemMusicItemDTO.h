//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFSaintseiyaReportExtendDTO;

@interface YKFSaintseiyaItemMusicItemDTO : YKFAPIModel
{
    NSString *_action;
    NSString *_author;
    NSString *_cdn;
    long long _duration;
    NSString *_image;
    NSString *_musicId;
    YKFSaintseiyaReportExtendDTO *_reportExtend;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportExtend; // @synthesize reportExtend=_reportExtend;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *cdn; // @synthesize cdn=_cdn;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

