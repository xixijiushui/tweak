//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVIPBaseCell.h"

@class UIView, YKVIPCardTitleCell, YKVIPPlayListItemView;

@interface YKVIPPlayListItemCell : YKVIPBaseCell
{
    UIView *_rootView;
    YKVIPCardTitleCell *_cardTitleCell;
    YKVIPPlayListItemView *_topItemView;
    UIView *_lineView;
    YKVIPPlayListItemView *_bottomItemView;
}

@property(retain, nonatomic) YKVIPPlayListItemView *bottomItemView; // @synthesize bottomItemView=_bottomItemView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YKVIPPlayListItemView *topItemView; // @synthesize topItemView=_topItemView;
@property(retain, nonatomic) YKVIPCardTitleCell *cardTitleCell; // @synthesize cardTitleCell=_cardTitleCell;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

