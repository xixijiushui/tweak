//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UIView;

@interface SKSearchRankTop3Cell : UITableViewCell
{
    NSMutableArray *_top3Array;
    id <SearchRankTop3CellDelegate> _delegate;
    NSMutableArray *_VCarr;
    UIView *_lineView;
}

+ (double)top3CellHeight;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSMutableArray *VCarr; // @synthesize VCarr=_VCarr;
@property(nonatomic) __weak id <SearchRankTop3CellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *top3Array; // @synthesize top3Array=_top3Array;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)tapGRHandle:(id)arg1;
- (void)setupMyViews;
- (void)layoutSubviews;
- (void)p_setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

