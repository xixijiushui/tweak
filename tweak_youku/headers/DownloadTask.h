//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface DownloadTask : NSObject
{
    _Bool _panoramaVideo;
    NSString *_vid;
    long long _format;
    NSString *_audioTrack;
    NSDictionary *_detaildic;
    NSDictionary *_shortdetail;
    NSNumber *_videostage;
    NSString *_sid;
    NSString *_stitle;
    NSString *_sthumb;
    NSString *_scategray;
    NSNumber *_videosize;
    NSNumber *_scompleted;
    NSString *_aid;
    NSNumber *_totalEpisode;
    unsigned long long _type;
    NSString *_cachesource;
    NSString *_encryvideoPassword;
}

@property(retain, nonatomic) NSString *encryvideoPassword; // @synthesize encryvideoPassword=_encryvideoPassword;
@property(retain, nonatomic) NSString *cachesource; // @synthesize cachesource=_cachesource;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *totalEpisode; // @synthesize totalEpisode=_totalEpisode;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSNumber *scompleted; // @synthesize scompleted=_scompleted;
@property(retain, nonatomic) NSNumber *videosize; // @synthesize videosize=_videosize;
@property(retain, nonatomic) NSString *scategray; // @synthesize scategray=_scategray;
@property(retain, nonatomic) NSString *sthumb; // @synthesize sthumb=_sthumb;
@property(retain, nonatomic) NSString *stitle; // @synthesize stitle=_stitle;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSNumber *videostage; // @synthesize videostage=_videostage;
@property(retain, nonatomic) NSDictionary *shortdetail; // @synthesize shortdetail=_shortdetail;
@property(retain, nonatomic) NSDictionary *detaildic; // @synthesize detaildic=_detaildic;
@property(retain, nonatomic) NSString *audioTrack; // @synthesize audioTrack=_audioTrack;
@property(nonatomic) _Bool panoramaVideo; // @synthesize panoramaVideo=_panoramaVideo;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

