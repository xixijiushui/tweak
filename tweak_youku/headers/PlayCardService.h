//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PlayListService, PlayerInterface;

@interface PlayCardService : NSObject
{
    PlayListService *_playList;
    PlayerInterface *_interface;
}

@property(nonatomic) __weak PlayerInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (void)playNextWithHovering;
- (void)playNextWithControlPlugin;
@property(readonly, nonatomic) PlayListService *playList;

@end
