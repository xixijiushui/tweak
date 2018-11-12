//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextViewDelegate.h"
#import "YKETextStickerInputViewDelegate.h"
#import "YKETextStickerToolInputViewDelegate.h"

@class NSString, UIColor, YKETextStickerInputView, YKETextStickerToolInputView, YKMediaEditorMainView;

@interface YKETextStickerInputTool : NSObject <UITextViewDelegate, YKETextStickerInputViewDelegate, YKETextStickerToolInputViewDelegate>
{
    YKMediaEditorMainView *_editor;
    NSString *_text;
    UIColor *_fillColor;
    UIColor *_outlineColor;
    double _outlineWidth;
    YKETextStickerInputView *_textInputView;
    YKETextStickerToolInputView *_inputPanelView;
}

@property(retain, nonatomic) YKETextStickerToolInputView *inputPanelView; // @synthesize inputPanelView=_inputPanelView;
@property(retain, nonatomic) YKETextStickerInputView *textInputView; // @synthesize textInputView=_textInputView;
@property(nonatomic) double outlineWidth; // @synthesize outlineWidth=_outlineWidth;
@property(retain, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak YKMediaEditorMainView *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)textInputView:(id)arg1 didChangeFillColor:(id)arg2;
- (void)textInputViewReturn:(id)arg1;
- (void)textInputView:(id)arg1 didChangeText:(id)arg2;
- (void)inputView:(id)arg1 willExpand:(float)arg2;
- (void)inputView:(id)arg1 willUnexpand:(float)arg2;
- (void)inputView:(id)arg1 onSelectColor:(id)arg2 outlineColor:(id)arg3;
- (void)inputViewHideKeybord:(id)arg1;
- (void)inputViewShowKeybord:(id)arg1;
- (void)resignFirstResponder;
- (double)getTextViewWidth;
- (void)setLimitedLabel:(id)arg1;
- (void)setInitText:(id)arg1;
- (void)endTextEditting;
- (void)beginTextEditting;
- (void)showInputView;
- (void)hideInputView;
- (void)cleanup;
- (void)setup;
- (void)dealloc;
- (id)initWithImageEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
