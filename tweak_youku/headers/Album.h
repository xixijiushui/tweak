//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSMutableSet, NSNumber, NSString, UIImage;

@interface Album : NSManagedObject
{
    UIImage *thumbImage;
}

+ (id)findAllAlbumsHavefinishedVideo;
+ (id)findAllVideosDownloaded:(id)arg1;
+ (id)findAllVideosByPlaylistID:(id)arg1;
+ (id)findFirstByPlaylistID:(id)arg1;
+ (id)upsert:(id)arg1 values:(id)arg2;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage;
- (void).cxx_destruct;
- (id)findAllLocalMediasByDownloadState:(_Bool)arg1;
- (id)findAllVideos;
- (id)findAllVideosDownloadUnComplete;
- (id)findAllVideosDownloadComplete;
- (_Bool)isMockObject;
- (id)summary;
- (long long)finishedcount;
- (void)parseObject:(id)arg1;
@property(retain, nonatomic) NSString *duration; // @dynamic duration;
@property(retain, nonatomic) NSString *recordId; // @dynamic recordId;
@property(retain, nonatomic) NSString *showId; // @dynamic showId;
- (void)awakeFromInsert;
- (void)awakeFromFetch;

// Remaining properties
@property(retain, nonatomic) NSString *aid; // @dynamic aid;
@property(retain, nonatomic) NSNumber *createTime; // @dynamic createTime;
@property(retain, nonatomic) NSMutableSet *medias; // @dynamic medias;
@property(retain, nonatomic) NSNumber *rating; // @dynamic rating;
@property(retain, nonatomic) NSString *showid; // @dynamic showid;
@property(retain, nonatomic) NSString *thumb; // @dynamic thumb;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSMutableSet *videos; // @dynamic videos;

@end

