//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "CoreDataEntityProtocol.h"
#import "DownloadViewDelegate.h"

@class NSDate, NSDictionary, NSMutableSet, NSString, UIImage;

@interface DownloadShow : NSManagedObject <DownloadViewDelegate, CoreDataEntityProtocol>
{
}

+ (id)findAllShowsHavefinishedVideo;
+ (id)findAllVideosDownloaded:(id)arg1;
+ (id)findAllVideosByShowID:(id)arg1;
+ (id)findFirstByShowID:(id)arg1;
- (void)save;
- (void)willSave;
- (void)awakeFromInsert;
- (_Bool)isFinishedShow;
- (id)findAllFinishedVideosInOrder;
- (id)findAllVideosInOrder;
- (id)sortDescriptors;
- (_Bool)orderAscending;
- (_Bool)containsVideo:(id)arg1;
- (id)findRecentlyPlayedVideo;
- (id)findAllVideosDownloadUnComplete;
- (id)findAllVideosDownloadComplete;
- (id)findAllLocalMediasByDownloadState:(_Bool)arg1;
- (id)findAllVideos;
- (id)showTotalEpisode;
- (id)showcategory;
- (id)showthumbURL;
- (id)modelfilesize;
- (float)modelprogress;
- (id)modelstatusstring;
- (id)modelthumbimg;
- (id)modeltitle;
@property(nonatomic, getter=isSelected) _Bool selected;
- (id)getMIObjectForKey:(id)arg1;
- (void)setMIObject:(id)arg1 forKey:(id)arg2;
- (id)modeInfo;

// Remaining properties
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *detailJSON; // @dynamic detailJSON;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *sid; // @dynamic sid;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImage *thumbImage; // @dynamic thumbImage;
@property(retain, nonatomic) NSDate *updatedAt; // @dynamic updatedAt;
@property(retain, nonatomic) NSString *version; // @dynamic version;
@property(retain, nonatomic) NSMutableSet *videos; // @dynamic videos;

@end

