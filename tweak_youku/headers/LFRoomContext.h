//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFRoomHistoryDelegate.h"

@class LFRoomConfig, LFRoomHistory, NSMutableArray, NSString;

@interface LFRoomContext : NSObject <LFRoomHistoryDelegate>
{
    NSMutableArray *_roomStacks;
    LFRoomConfig *_currentRoomConfig;
    LFRoomHistory *_roomHistory;
}

+ (id)sharedContext;
@property(retain, nonatomic) LFRoomHistory *roomHistory; // @synthesize roomHistory=_roomHistory;
@property(retain, nonatomic) LFRoomConfig *currentRoomConfig; // @synthesize currentRoomConfig=_currentRoomConfig;
@property(retain, nonatomic) NSMutableArray *roomStacks; // @synthesize roomStacks=_roomStacks;
- (void).cxx_destruct;
- (id)fetchHistory:(id)arg1 value:(id)arg2;
- (void)stopRoomConfig:(id)arg1;
- (void)startIfContainConfig:(id)arg1;
- (_Bool)isContainRoomConfig:(id)arg1;
- (_Bool)clearAllRooms;
- (_Bool)popoutRoomConfig:(id)arg1;
- (_Bool)pushInRoomWithConfig:(id)arg1;
- (id)lastRoomCinfigIfContained;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

