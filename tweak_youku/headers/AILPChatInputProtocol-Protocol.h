//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol AILPChatInputProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType finishBlock;
- (void)relayout;
- (void)updatePlaceholder:(NSString *)arg1;
- (void)updateLimit:(long long)arg1;
- (void)updateGambits:(NSArray *)arg1;
- (void)updateToOrientation:(long long)arg1;
- (void)updateWithText:(NSString *)arg1;
- (void)closeInputView;
- (void)openInputView;
- (void)prepareInputWindow;
- (void)setupInput;
@end

