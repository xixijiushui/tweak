//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFRoomChatMessage, LFRoomChatMessageView, NSString;

@protocol LFRoomChatViewMessageDelegate <NSObject>

@optional
- (void)roomChatMessageView:(LFRoomChatMessageView *)arg1 didTapMenuManage:(LFRoomChatMessage *)arg2;
- (void)roomChatMessageView:(LFRoomChatMessageView *)arg1 didTapMenuReport:(LFRoomChatMessage *)arg2;
- (void)roomChatMessageView:(LFRoomChatMessageView *)arg1 didTapMenuAt:(LFRoomChatMessage *)arg2;
- (void)roomChatMessageView:(LFRoomChatMessageView *)arg1 didTapRedEnvelope:(NSString *)arg2 uid:(NSString *)arg3;
- (void)roomChatMessageView:(LFRoomChatMessageView *)arg1 didTapUser:(NSString *)arg2;
@end
