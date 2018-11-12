//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIColor, UIView;

@protocol AILPChatListProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType cellClickedBlock;
@property(readonly, nonatomic) UIView *chatView;
@property(nonatomic) __weak UIView *hostView;
- (void)updateHostViewBounds:(struct CGRect)arg1;
- (void)updateChatLimit:(long long)arg1;
- (void)insertWithContent:(NSString *)arg1 color:(UIColor *)arg2 nickname:(NSString *)arg3 nickColor:(UIColor *)arg4 avatar:(NSURL *)arg5 avatarIcon:(NSURL *)arg6 bgColor:(UIColor *)arg7 cellType:(NSString *)arg8;
- (void)setupChatList;
@end

