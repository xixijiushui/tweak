//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer, AVPlayer, NSString;

@interface YKSPMusicPlayer : NSObject
{
    _Bool _isAddObserver;
    AVPlayer *_player;
    AVAudioPlayer *_audioPlay;
    NSString *_currentUrl;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(retain, nonatomic) AVAudioPlayer *audioPlay; // @synthesize audioPlay=_audioPlay;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)stop;
- (void)playFilePath:(id)arg1;
- (void)sendNotationUpdateCellUI:(id)arg1;
- (void)downloadMusic:(id)arg1;
- (void)playWithUrl:(id)arg1;

@end

