//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface YKBCMQLFormCell : UICollectionViewCell
{
    UILabel *_contentLab;
    UIImageView *_icon;
    UIImageView *_mark_imageview;
}

@property(retain, nonatomic) UIImageView *mark_imageview; // @synthesize mark_imageview=_mark_imageview;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
- (void).cxx_destruct;
- (void)layout;
- (void)hideMark:(_Bool)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

