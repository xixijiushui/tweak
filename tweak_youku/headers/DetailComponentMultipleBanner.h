//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailComponent.h"

#import "DetailTwoBannerCellDeleate.h"

@class NSArray, NSString;

@interface DetailComponentMultipleBanner : DetailComponent <DetailTwoBannerCellDeleate>
{
    _Bool willShowFoot;
    _Bool _isExpose;
    double _itemWidth;
    double _itemHeight;
    long long _bannerRow;
    NSArray *_cardsArray;
}

@property(nonatomic) _Bool isExpose; // @synthesize isExpose=_isExpose;
@property(retain, nonatomic) NSArray *cardsArray; // @synthesize cardsArray=_cardsArray;
@property(nonatomic) long long bannerRow; // @synthesize bannerRow=_bannerRow;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
- (void).cxx_destruct;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (_Bool)componentCard:(id)arg1 shouldRequestComponentDataWhenVideoChangedTo:(id)arg2;
- (void)selectCellWithItemIndex:(long long)arg1 withCellIndex:(long long)arg2;
- (void)componentCard:(id)arg1 didEndScrollingVisibleCell:(id)arg2 exposeFromPercent:(long long)arg3 toPercent:(long long)arg4 forComponentContentAtIndex:(long long)arg5;
- (_Bool)shouldShowFoot;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (id)parseBannerCellArray;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
