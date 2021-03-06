//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UITapGestureRecognizer, UIView, YKEFrameSticker, YKEImageToolBase, YKETextSticker, YKETextStickerInputTool, YKMediaEditorMainView;

@interface YKMediaEditorActionManager : NSObject
{
    _Bool _modifyFrameSticker;
    YKEImageToolBase *_currentTool;
    YKETextSticker *_curTextSticker;
    YKETextStickerInputTool *_textStickerInputTool;
    YKEFrameSticker *_curFrameSticker;
    NSMutableArray *_textStickers;
    NSMutableArray *_frameStickers;
    NSMutableArray *_imageStickers;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_canvasView;
    YKMediaEditorMainView *_editor;
}

@property(nonatomic) __weak YKMediaEditorMainView *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *imageStickers; // @synthesize imageStickers=_imageStickers;
@property(retain, nonatomic) NSMutableArray *frameStickers; // @synthesize frameStickers=_frameStickers;
@property(retain, nonatomic) NSMutableArray *textStickers; // @synthesize textStickers=_textStickers;
@property(nonatomic) _Bool modifyFrameSticker; // @synthesize modifyFrameSticker=_modifyFrameSticker;
@property(nonatomic) __weak YKEFrameSticker *curFrameSticker; // @synthesize curFrameSticker=_curFrameSticker;
@property(retain, nonatomic) YKETextStickerInputTool *textStickerInputTool; // @synthesize textStickerInputTool=_textStickerInputTool;
@property(nonatomic) __weak YKETextSticker *curTextSticker; // @synthesize curTextSticker=_curTextSticker;
@property(retain, nonatomic) YKEImageToolBase *currentTool; // @synthesize currentTool=_currentTool;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setStickersInactive;
- (void)setStickersEnabled:(_Bool)arg1;
- (void)setStickersHidden:(_Bool)arg1;
- (void)OnRestoreButtonClick:(id)arg1;
- (void)OnInputOKButtonClick:(id)arg1;
- (void)OnInputCancelButtonClick:(id)arg1;
- (void)OnOKButtonClick:(id)arg1;
- (void)OnCancelButtonClick:(id)arg1;
- (void)OnSliderTouchUpLittleValue:(float)arg1 largeValue:(float)arg2;
- (void)OnPlayBtnClick:(id)arg1;
- (void)setupToolWithToolInfo:(id)arg1;
- (void)compositeImage:(CDUnknownBlockType)arg1;
- (id)getCanvasImage:(id)arg1;
- (void)activeStickerDelete:(id)arg1;
- (void)activeStickerDidTap:(id)arg1;
- (void)activeStickerInput:(id)arg1;
- (void)tapGestureRecognizer:(id)arg1;
- (void)removeTapGestureRecognizer;
- (void)addTapGestureRecognizer;
- (void)dealloc;
- (id)initWithEditor:(id)arg1;

@end

