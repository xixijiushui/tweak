//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildBaseCardCell.h"

#import "ChildBaseCardViewDelegate.h"

@class ChildHomeBigCardViewController, ChildRecommendCardItem, NSString;

@interface ChildHomeBigCardCell : ChildBaseCardCell <ChildBaseCardViewDelegate>
{
    ChildHomeBigCardViewController *_cardViewController;
    ChildRecommendCardItem *_data;
}

@property(retain, nonatomic) ChildRecommendCardItem *data; // @synthesize data=_data;
@property(retain, nonatomic) ChildHomeBigCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (void).cxx_destruct;
- (id)getHAction;
- (id)getShowName;
- (id)getSeriesId;
- (id)getShowId;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

