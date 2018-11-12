//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ADCoverCellView, CoverView, NSString;

@interface UICoverCell : UITableViewCell
{
    CoverView *coverViews[3];
    double rateOfWidth;
    double offset;
    int _cellLayout;
    int _style;
    NSString *_cardTitle;
    ADCoverCellView *_adCoverView;
}

@property(retain, nonatomic) ADCoverCellView *adCoverView; // @synthesize adCoverView=_adCoverView;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) int cellLayout; // @synthesize cellLayout=_cellLayout;
- (void)refresh;
- (void)updateADCoverView:(id)arg1;
- (int)indexForCoverView:(id)arg1;
- (int)coverViewAtPoint:(struct CGPoint)arg1;
- (void)vanishCoverViewAtIndex:(long long)arg1;
- (_Bool)isCoverViewAtIndex:(long long)arg1;
- (id)coverViewAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
