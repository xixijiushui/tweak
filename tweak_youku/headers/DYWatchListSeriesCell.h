//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYWatchListBaseCell.h"

@class UIImageView, UILabel;

@interface DYWatchListSeriesCell : DYWatchListBaseCell
{
    UIImageView *_picImage;
    UILabel *_titleLable;
    UILabel *_subtitleLable;
    UILabel *_summaryLable;
    UIImageView *_shadowImage;
    UIImageView *_placeholderImage;
    UILabel *_thirdLable;
    UIImageView *_cornerImage;
    UILabel *_catnameLable;
}

- (void).cxx_destruct;
- (void)setTypeButton:(id)arg1;
- (void)layoutSubviews;
- (void)setComponent:(id)arg1;
- (void)initCustomViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

