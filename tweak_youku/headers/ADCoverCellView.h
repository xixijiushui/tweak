//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ADCoverDelegate.h"

@class NSMutableArray, NSString, UIScrollView;

@interface ADCoverCellView : UIView <ADCoverDelegate>
{
    id <ADCoverCellDelegate> customDelegate;
    NSMutableArray *adsArray;
    UIScrollView *adScroll;
    double offsetXB;
    long long totalCount;
}

+ (struct CGSize)adImageSize;
@property(nonatomic) __weak id <ADCoverCellDelegate> customDelegate; // @synthesize customDelegate;
- (void)didClick:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
