//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFRHotRoomManager.h"

@class NSMutableArray;

@interface LFRHotRecommendManager : LFRHotRoomManager
{
    NSMutableArray *_unusedRooms;
}

@property(retain, nonatomic) NSMutableArray *unusedRooms; // @synthesize unusedRooms=_unusedRooms;
- (void).cxx_destruct;
- (void)turnPrev;
- (void)turnNext;
- (id)getPrev;
- (id)getNext;
- (void)requestIfNeeded;

@end

