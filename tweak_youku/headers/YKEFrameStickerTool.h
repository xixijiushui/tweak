//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKEImageToolBase.h"

#import "YKETextStickerToolColorViewDelegate.h"

@class NSMutableArray, NSString, UIColor, YKEFrameSticker, YKEImageToolTopBarView, YKETextStickerToolColorView;

@interface YKEFrameStickerTool : YKEImageToolBase <YKETextStickerToolColorViewDelegate>
{
    _Bool _reEdit;
    NSMutableArray *_frameStickers;
    YKEFrameSticker *_selectedSticker;
    UIColor *_bakStickerColor;
    YKETextStickerToolColorView *_colorView;
    YKEImageToolTopBarView *_topBarView;
    struct CGRect _bakStickerFrame;
}

+ (id)optionalInfo;
+ (double)defaultDockedNumber;
+ (_Bool)isAvailable;
+ (id)defaultTitle;
+ (id)subtools;
@property(retain, nonatomic) YKEImageToolTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) YKETextStickerToolColorView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) UIColor *bakStickerColor; // @synthesize bakStickerColor=_bakStickerColor;
@property(nonatomic) struct CGRect bakStickerFrame; // @synthesize bakStickerFrame=_bakStickerFrame;
@property(nonatomic) _Bool reEdit; // @synthesize reEdit=_reEdit;
@property(retain, nonatomic) YKEFrameSticker *selectedSticker; // @synthesize selectedSticker=_selectedSticker;
@property(retain, nonatomic) NSMutableArray *frameStickers; // @synthesize frameStickers=_frameStickers;
- (void).cxx_destruct;
- (void)onSelectColor:(id)arg1 outlineColor:(id)arg2;
- (void)addNewSticker;
- (void)activeStickerDidChange:(id)arg1;
- (void)cancelAvtive:(id)arg1;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanup;
- (void)setup;
- (void)dealloc;
- (id)initWithImageEditor:(id)arg1 withToolInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
