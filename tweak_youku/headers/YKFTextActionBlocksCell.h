//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFPlanetLinearLayoutBlocksCell.h"

@class YKFCellActionBlock, YKFTextActionBlocksCellVM;

@interface YKFTextActionBlocksCell : YKFPlanetLinearLayoutBlocksCell
{
    YKFCellActionBlock *_actionBlock;
}

+ (id)defaultIdentifier;
@property(retain, nonatomic) YKFCellActionBlock *actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)handleFooterButtonClickAction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) YKFTextActionBlocksCellVM *blocksCellVM; // @dynamic blocksCellVM;

@end

