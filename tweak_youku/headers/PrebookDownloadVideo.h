//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "CoreDataEntityProtocol.h"
#import "DownloadViewDelegate.h"

@class NSDate, NSNumber, NSString;

@interface PrebookDownloadVideo : NSManagedObject <DownloadViewDelegate, CoreDataEntityProtocol>
{
}

+ (id)findAllPrebookVideos;
+ (id)findVideoByShowId:(id)arg1 VideoStage:(id)arg2;
+ (void)initialize;
- (void)save;
- (void)willSave;
@property(nonatomic) _Bool selected;
- (id)modelfilesize;
- (float)modelprogress;
- (id)modelstatusstring;
- (id)modelthumbimg;
- (id)modeltitle;

// Remaining properties
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hadSynced; // @dynamic hadSynced;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *serverState; // @dynamic serverState;
@property(copy, nonatomic) NSString *showname; // @dynamic showname;
@property(copy, nonatomic) NSString *sid; // @dynamic sid;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *syncCount; // @dynamic syncCount;
@property(copy, nonatomic) NSString *thumbURL; // @dynamic thumbURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSDate *updatedAt; // @dynamic updatedAt;
@property(retain, nonatomic) NSString *version; // @dynamic version;
@property(copy, nonatomic) NSString *videostage; // @dynamic videostage;

@end

