//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YKETextStickerInputView;

@protocol YKETextStickerInputViewDelegate <NSObject>

@optional
- (void)textInputViewReturn:(YKETextStickerInputView *)arg1;
- (void)textInputView:(YKETextStickerInputView *)arg1 didChangeText:(NSString *)arg2;
@end
