//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AILPRoomLiveProtocol.h"

@class AILPLiveInfo, NSString;

@interface AILPRoomLiveListener : NSObject <AILPRoomLiveProtocol>
{
}

- (void)roomMicDidUpdate:(id)arg1 micNum:(long long)arg2;
- (void)roomMicListDidUpdate:(id)arg1;
- (void)roomDidUpdateLiveInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) AILPLiveInfo *roomLiveInfo;
@property(readonly) Class superclass;

@end

