//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBlock.h"

@class YKFCellActionBlockVM, YKFIconFontButton;

@interface YKFCellActionBlock : YKFBlock
{
    YKFIconFontButton *_actionButton;
}

+ (struct CGSize)sizeForBounds:(struct CGRect)arg1 layoutType:(long long)arg2 blockVM:(id)arg3;
@property(retain, nonatomic) YKFIconFontButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)bindControls;
- (void)updateDataWhenViewModelChanged;
- (void)layoutControlsInBoundsWhichWidth:(double)arg1 height:(double)arg2;
- (void)configureControlsWhenInit;

// Remaining properties
@property(readonly, nonatomic) YKFCellActionBlockVM *blockVM; // @dynamic blockVM;

@end

