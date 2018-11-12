//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, YTEngineConfiguration, YTEnginePlayerInternal;

@interface YTEngineVideoURLProcess : NSObject
{
    NSMutableDictionary *mWoVideoURLSection;
    NSMutableDictionary *mP2PVideoURLSection;
    NSMutableDictionary *mCdnVideoURLSection;
    NSMutableDictionary *mWoAdURLSection;
    NSMutableDictionary *mCdnAdURLSection;
    long long mP2pRetryCount;
    NSString *mCurrentVID;
    YTEngineConfiguration *_configuration;
    YTEnginePlayerInternal *_player;
}

@property(nonatomic) __weak YTEnginePlayerInternal *player; // @synthesize player=_player;
@property(nonatomic) __weak YTEngineConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)setCdnQuality:(id)arg1 Item:(id)arg2;
- (void)processURLWithAdItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processVideoURLWithPlayItem:(id)arg1 quality:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkPlayError:(id)arg1;
- (void)increaseP2pFailedCount;
- (void)resetSource;
- (long long)streamTypeToPlay;
- (void)setCurrentVID:(id)arg1;
- (_Bool)needProcessForP2P;
- (_Bool)needProcessForWo;
- (id)p2pClient;
- (id)woClient;
- (id)init;

@end

