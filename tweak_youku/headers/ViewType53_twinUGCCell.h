//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class SKSingleUGCView, ViewType53_twinUGCModel;

@interface ViewType53_twinUGCCell : SKTableViewCell
{
    ViewType53_twinUGCModel *_dataModel;
    SKSingleUGCView *_l_view;
    SKSingleUGCView *_r_view;
}

+ (float)getCellHeightWithModel:(id)arg1;
@property(retain, nonatomic) SKSingleUGCView *r_view; // @synthesize r_view=_r_view;
@property(retain, nonatomic) SKSingleUGCView *l_view; // @synthesize l_view=_l_view;
@property(retain, nonatomic) ViewType53_twinUGCModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
