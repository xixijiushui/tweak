//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface YKPLDRelationShipCenter : NSObject
{
    NSMutableArray *_fileidList;
    NSArray *_relationList;
    NSMutableArray *_playHistory;
    NSMutableArray *_localList;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *localList; // @synthesize localList=_localList;
@property(retain, nonatomic) NSMutableArray *playHistory; // @synthesize playHistory=_playHistory;
@property(retain, nonatomic) NSArray *relationList; // @synthesize relationList=_relationList;
@property(retain, nonatomic) NSMutableArray *fileidList; // @synthesize fileidList=_fileidList;
- (void).cxx_destruct;
- (void)cacheRelationList:(id)arg1;
- (void)addRelationList:(id)arg1;
- (id)getFileidList;
- (id)getRelationList;
- (_Bool)containVideoId:(id)arg1;
- (_Bool)containShowId:(id)arg1;
- (id)filterRelationlist;
- (id)relationListFilePath;
- (id)relationListDirPath;
- (id)preloadCachePath;
- (id)rootPath;
- (void)deleteRelationship:(id)arg1;
- (void)updateLocalList;
- (id)init;

@end

