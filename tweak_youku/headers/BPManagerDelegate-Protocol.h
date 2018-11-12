//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BPError, BPManager, BPMode, BPQuality, BPVideo, NSArray, NSString;

@protocol BPManagerDelegate <NSObject>

@optional
- (void)playerManager:(BPManager *)arg1 languageDidChangeFrom:(NSString *)arg2 to:(NSString *)arg3;
- (void)playerManager:(BPManager *)arg1 touchEndedWithPoint:(struct CGPoint)arg2;
- (void)playerManager:(BPManager *)arg1 touchBeganWithPoint:(struct CGPoint)arg2;
- (void)playerManager:(BPManager *)arg1 qualityFailToChangeFrom:(BPQuality *)arg2 to:(BPQuality *)arg3;
- (void)playerManager:(BPManager *)arg1 qualityDidChangeFrom:(BPQuality *)arg2 to:(BPQuality *)arg3;
- (void)playerManager:(BPManager *)arg1 qualityWillChangeFrom:(BPQuality *)arg2 to:(BPQuality *)arg3;
- (void)playerManager:(BPManager *)arg1 qualityDidSwitchFrom:(BPQuality *)arg2 to:(BPQuality *)arg3;
- (void)playerManager:(BPManager *)arg1 autorotateDidChange:(_Bool)arg2;
- (void)playerManager:(BPManager *)arg1 orientationDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)playerManager:(BPManager *)arg1 modeDidChangeFrom:(BPMode *)arg2 to:(BPMode *)arg3;
- (void)playerManager:(BPManager *)arg1 modeIsChangingFrom:(BPMode *)arg2 to:(BPMode *)arg3;
- (void)playerManager:(BPManager *)arg1 modeWillChangeFrom:(BPMode *)arg2 to:(BPMode *)arg3;
- (void)playerManager:(BPManager *)arg1 listsDidChange:(NSArray *)arg2;
- (void)playerManagerDidHideConsole:(BPManager *)arg1;
- (void)playerManagerDidShowConsole:(BPManager *)arg1;
- (void)playerManager:(BPManager *)arg1 lockScreenDidChange:(_Bool)arg2;
- (void)playerManager:(BPManager *)arg1 seekDidEnd:(long long)arg2;
- (void)playerManager:(BPManager *)arg1 seekDidChange:(long long)arg2;
- (void)playerManager:(BPManager *)arg1 seekDidBegin:(long long)arg2;
- (void)playerManager:(BPManager *)arg1 playableTimeDidChange:(long long)arg2;
- (void)playerManager:(BPManager *)arg1 playingTimeDidChange:(long long)arg2;
- (void)playerManager:(BPManager *)arg1 networkSpeedIsChanging:(long long)arg2;
- (void)playerManager:(BPManager *)arg1 loadingDidChange:(_Bool)arg2;
- (void)playerManager:(BPManager *)arg1 interruptCodeDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)playerManager:(BPManager *)arg1 playModeDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)playerManager:(BPManager *)arg1 playErrorDidChangeFrom:(BPError *)arg2 to:(BPError *)arg3;
- (void)playerManager:(BPManager *)arg1 playSceneDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)playerManager:(BPManager *)arg1 playStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)playerManager:(BPManager *)arg1 playingVideoInfoDidPrepare:(BPVideo *)arg2;
- (void)playerManager:(BPManager *)arg1 playingVideoDidChangeFrom:(BPVideo *)arg2 to:(BPVideo *)arg3;
- (void)playerManager:(BPManager *)arg1 playingVideoWillChangeFrom:(BPVideo *)arg2 to:(BPVideo *)arg3;
- (void)playerManagerDidDeactivate:(BPManager *)arg1;
- (void)playerManagerWillDeactivate:(BPManager *)arg1;
- (void)playerManagerDidActivate:(BPManager *)arg1;
- (void)playerManagerWillActivate:(BPManager *)arg1;
- (void)playerManagerDidFinishInitConfiguration:(BPManager *)arg1;
@end
