//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBlock.h"

@class CALayer, UIButton, UIColor, UIImageView, YKFCellPostVoteItemBlockVM, YKFRichTextLabel;

@interface YKFCellPostVoteItemBlock : YKFBlock
{
    UIButton *_actionButton;
    UIImageView *_logoImageView;
    UIColor *_descFontColor;
    YKFRichTextLabel *_descLabel;
    UIColor *_countFontColor;
    YKFRichTextLabel *_countLabel;
    CALayer *_percentageLayer;
}

+ (struct CGSize)sizeForBounds:(struct CGRect)arg1 layoutType:(long long)arg2 blockVM:(id)arg3;
@property(retain, nonatomic) CALayer *percentageLayer; // @synthesize percentageLayer=_percentageLayer;
@property(retain, nonatomic) YKFRichTextLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIColor *countFontColor; // @synthesize countFontColor=_countFontColor;
@property(retain, nonatomic) YKFRichTextLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIColor *descFontColor; // @synthesize descFontColor=_descFontColor;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)showBigPicture;
- (void)updateImageOfButton;
- (void)bindControls;
- (void)updateDataWhenViewModelChanged;
- (void)layoutControlsInBoundsWhichWidth:(double)arg1 height:(double)arg2;
- (void)layoutBackgroundLayerInBlock;
- (void)configureControlsWhenInit;

// Remaining properties
@property(readonly, nonatomic) YKFCellPostVoteItemBlockVM *blockVM; // @dynamic blockVM;

@end

