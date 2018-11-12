//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HPGrowingTextView, UILabel, UIView;

@interface UploadAutoHeightTextViewTableCell : UITableViewCell
{
    HPGrowingTextView *_itemTextView;
    UIView *_separatorView;
    UILabel *_itemLable;
    UILabel *_limitTipLable;
    double _cellOriginalHeight;
    unsigned long long _maxTextLength;
    double _textViewTop;
}

+ (double)originalHeight;
@property(readonly, nonatomic) double textViewTop; // @synthesize textViewTop=_textViewTop;
@property(nonatomic) unsigned long long maxTextLength; // @synthesize maxTextLength=_maxTextLength;
@property(nonatomic) double cellOriginalHeight; // @synthesize cellOriginalHeight=_cellOriginalHeight;
@property(retain, nonatomic) UILabel *limitTipLable; // @synthesize limitTipLable=_limitTipLable;
@property(retain, nonatomic) UILabel *itemLable; // @synthesize itemLable=_itemLable;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) HPGrowingTextView *itemTextView; // @synthesize itemTextView=_itemTextView;
- (void).cxx_destruct;
- (void)configLimitTipLable;
- (void)_layoutSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

