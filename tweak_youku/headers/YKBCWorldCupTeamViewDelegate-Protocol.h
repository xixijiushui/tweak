//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol YKBCWorldCupTeamViewDelegate <NSObject>

@optional
- (NSString *)worldCupTeamView_CreateLiveChannel;
- (void)analyticsWithEventid:(NSString *)arg1 arg1:(NSString *)arg2 spm:(NSString *)arg3 hasquitid:(_Bool)arg4 fromh5:(_Bool)arg5;
- (void)worldCupTeamView_EnterChatRoom:(long long)arg1 wcAttrType:(long long)arg2 wcAttrValue:(long long)arg3;
- (void)worldCupTeamView_InviteFriend;
- (void)worldCupTeamView_close;
@end
