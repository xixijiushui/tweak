//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTFVoteOptionBaseTableViewCell.h"

@interface TTFVoteOptionDetailBaseTableViewCell : TTFVoteOptionBaseTableViewCell
{
    id <TTFVoteOptionDetailBaseTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TTFVoteOptionDetailBaseTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)voteButtonAction:(id)arg1;
- (void)configCellWithModel:(id)arg1;
- (void)optionImageViewTapped:(id)arg1;
- (void)awakeFromNib;

@end

