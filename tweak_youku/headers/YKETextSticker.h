//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIButton, UIColor, UIImageView, YKETextStickerContentView, YKETextStickerLabel, YKFAppjietuStickTextPO, YKMediaEditorMainView;

@interface YKETextSticker : UIView
{
    _Bool _editting;
    _Bool _changedText;
    _Bool _canChangeToInputState;
    NSString *_text;
    double _outlineWidth;
    UIButton *_deleteButton;
    UIButton *_inputButton;
    UIImageView *_circleView;
    double _scale;
    double _arg;
    double _initialArg;
    double _initialScale;
    YKFAppjietuStickTextPO *_pendantModel;
    YKMediaEditorMainView *_editor;
    YKETextStickerContentView *_contentView;
    YKETextStickerLabel *_label;
    double _textViewWidth;
    double _textViewHeight;
    NSArray *_elements;
    NSArray *_textElements;
    NSArray *_imageElements;
    struct CGPoint _initialPoint;
}

+ (id)getActiveView;
+ (void)setActiveView:(id)arg1;
@property(retain, nonatomic) NSArray *imageElements; // @synthesize imageElements=_imageElements;
@property(retain, nonatomic) NSArray *textElements; // @synthesize textElements=_textElements;
@property(retain, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(nonatomic) double textViewHeight; // @synthesize textViewHeight=_textViewHeight;
@property(nonatomic) double textViewWidth; // @synthesize textViewWidth=_textViewWidth;
@property(retain, nonatomic) YKETextStickerLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) YKETextStickerContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool canChangeToInputState; // @synthesize canChangeToInputState=_canChangeToInputState;
@property(nonatomic) _Bool changedText; // @synthesize changedText=_changedText;
@property(nonatomic) __weak YKMediaEditorMainView *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) YKFAppjietuStickTextPO *pendantModel; // @synthesize pendantModel=_pendantModel;
@property(nonatomic) _Bool editting; // @synthesize editting=_editting;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) double initialArg; // @synthesize initialArg=_initialArg;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(nonatomic) double arg; // @synthesize arg=_arg;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIImageView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (void)circleViewDidPan:(id)arg1;
- (void)viewDidPan:(id)arg1;
- (void)viewDidTap:(id)arg1;
- (void)inputButtonClick:(id)arg1;
- (void)deleteButtonClick:(id)arg1;
- (_Bool)pointIsInLabelFrame:(struct CGPoint)arg1;
- (id)getPendantTextLabelIfNeed;
- (void)setDeleteButtonHidden:(_Bool)arg1;
- (void)resetDefaultText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double outlineWidth; // @synthesize outlineWidth=_outlineWidth;
@property(retain, nonatomic) UIColor *outlineColor;
@property(retain, nonatomic) UIColor *fillColor;
- (void)sizeToFitWithMaxWidth:(double)arg1 maxHeight:(double)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initGestures;
- (_Bool)active;
- (void)resetCommonCtrlFrame;
- (void)setAvtive:(_Bool)arg1;
- (id)initWithTool:(id)arg1;

@end

