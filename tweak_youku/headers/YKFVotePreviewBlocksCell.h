//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFVoteBlocksCell.h"

@class YKFCellOutlineBlock, YKFCellVotePreviewBlock, YKFVotePreviewBlocksCellVM;

@interface YKFVotePreviewBlocksCell : YKFVoteBlocksCell
{
    YKFCellOutlineBlock *_outlineBlock;
    YKFCellVotePreviewBlock *_votePreviewBlock;
}

+ (id)defaultIdentifier;
@property(retain, nonatomic) YKFCellVotePreviewBlock *votePreviewBlock; // @synthesize votePreviewBlock=_votePreviewBlock;
@property(retain, nonatomic) YKFCellOutlineBlock *outlineBlock; // @synthesize outlineBlock=_outlineBlock;
- (void).cxx_destruct;
- (void)handleDidVotePost:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) YKFVotePreviewBlocksCellVM *blocksCellVM; // @dynamic blocksCellVM;

@end

