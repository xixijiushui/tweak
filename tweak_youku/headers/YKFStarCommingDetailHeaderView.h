//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YKFStarArrivalHeaderView, YKFStarArrivalStarInfoCell, YKFStarArrivalStarInfoViewModel, YKFStarArrivalWarmUpVideoViewModel;

@interface YKFStarCommingDetailHeaderView : UIView
{
    YKFStarArrivalStarInfoCell *_infoCell;
    YKFStarArrivalStarInfoViewModel *_infoVM;
    YKFStarArrivalHeaderView *_videoCell;
    YKFStarArrivalWarmUpVideoViewModel *_videoVM;
}

@property(retain, nonatomic) YKFStarArrivalWarmUpVideoViewModel *videoVM; // @synthesize videoVM=_videoVM;
@property(retain, nonatomic) YKFStarArrivalHeaderView *videoCell; // @synthesize videoCell=_videoCell;
@property(retain, nonatomic) YKFStarArrivalStarInfoViewModel *infoVM; // @synthesize infoVM=_infoVM;
@property(retain, nonatomic) YKFStarArrivalStarInfoCell *infoCell; // @synthesize infoCell=_infoCell;
- (void).cxx_destruct;
- (void)userAddFandomStateChanged:(_Bool)arg1;
- (void)updateHeaderViewWithDetailsPO:(id)arg1;

@end

