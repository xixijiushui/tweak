//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class ViewTypeCustom_FilterModel;

@interface VIewTypeCustom_FilterCell : SKTableViewCell
{
    ViewTypeCustom_FilterModel *_filterModel;
}

+ (float)getCellHeightWithModel:(id)arg1;
@property(retain, nonatomic) ViewTypeCustom_FilterModel *filterModel; // @synthesize filterModel=_filterModel;
- (void).cxx_destruct;
- (void)setFilterHandler;
- (void)appendFilterView;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
