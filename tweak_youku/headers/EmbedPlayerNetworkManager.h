//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmbedPlayer, Reachability;

@interface EmbedPlayerNetworkManager : NSObject
{
    int _oldNetWorkStatus;
    _Bool _canFreshPlayer;
    EmbedPlayer *_embedPlayer;
    Reachability *_reachability;
}

@property(nonatomic) _Bool canFreshPlayer; // @synthesize canFreshPlayer=_canFreshPlayer;
@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) __weak EmbedPlayer *embedPlayer; // @synthesize embedPlayer=_embedPlayer;
- (void).cxx_destruct;
- (void)networkChange:(id)arg1;
- (_Bool)checkNetworkStateWithCanPlayViaWWAN:(_Bool)arg1 showMessage:(_Bool)arg2;
- (id)init;
- (void)dealloc;

@end
