//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPNCBaseCell.h"

@class UIImageView, UILabel, VIPNewCenterModel;

@interface VIPNCHeaderCell : VIPNCBaseCell
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    VIPNewCenterModel *_drawer;
}

- (void).cxx_destruct;
- (void)setDrawerData:(id)arg1 width:(double)arg2 index:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 drawer:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

