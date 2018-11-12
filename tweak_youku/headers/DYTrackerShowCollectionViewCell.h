//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class DYTrackerShowCollectionItem, UIImageView, UILabel, UIView;

@interface DYTrackerShowCollectionViewCell : UICollectionViewCell
{
    UIImageView *_iconImage;
    UILabel *_titleLable;
    UILabel *_subtitleLable;
    UIImageView *_shadowImage;
    UILabel *_summaryLable;
    UIImageView *_cornerImage;
    UIView *_icocImageBgView;
    UIImageView *_placeholderImage;
    UILabel *_timeLable;
    UIView *_splitView;
    UILabel *_cornerLable;
    CDUnknownBlockType _cellActionCallBack;
    DYTrackerShowCollectionItem *_model;
}

@property(retain, nonatomic) DYTrackerShowCollectionItem *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType cellActionCallBack; // @synthesize cellActionCallBack=_cellActionCallBack;
- (void).cxx_destruct;
- (void)imageButtonClick;
- (void)initCustomViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

