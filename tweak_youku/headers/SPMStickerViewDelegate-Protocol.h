//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPMStickerView;

@protocol SPMStickerViewDelegate <NSObject>

@optional
- (void)stickerViewDidTap:(SPMStickerView *)arg1;
- (void)stickerViewDidClose:(SPMStickerView *)arg1;
- (void)stickerViewDidEndRotating:(SPMStickerView *)arg1;
- (void)stickerViewDidChangeRotating:(SPMStickerView *)arg1;
- (void)stickerViewDidBeginRotating:(SPMStickerView *)arg1;
- (void)stickerViewDidEndMoving:(SPMStickerView *)arg1;
- (void)stickerViewDidChangeMoving:(SPMStickerView *)arg1;
- (void)stickerViewDidBeginMoving:(SPMStickerView *)arg1;
@end

