//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class UIImageView, ViewTypeCustomBigTVImageBgModel;

@interface ViewTypeCustomBigTVImageBgCell : SKTableViewCell
{
    UIImageView *_bg;
    ViewTypeCustomBigTVImageBgModel *_model;
}

+ (float)getCellHeight:(id)arg1;
@property(retain, nonatomic) ViewTypeCustomBigTVImageBgModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *bg; // @synthesize bg=_bg;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
