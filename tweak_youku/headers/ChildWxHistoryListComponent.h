//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildWxComponent.h"

#import "ChildWxComponentDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface ChildWxHistoryListComponent : ChildWxComponent <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, ChildWxComponentDelegate>
{
    _Bool _listenOnAddBlackList;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowlayout;
    NSDictionary *_data;
    double _itemWidth;
    double _itemHeight;
    double _hSpace;
    double _leftMargin;
    double _rightMargin;
    NSMutableArray *_starList;
    NSDictionary *_utdata;
    NSString *_tab_id;
    NSString *_tab_name;
    NSString *_nodeId;
    NSMutableArray *_expObject;
    NSMutableArray *_lastExpObject;
    NSMutableArray *_tmpExpObject;
    struct UIEdgeInsets _padding;
}

+ (id)wx_export_method_63;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSMutableArray *tmpExpObject; // @synthesize tmpExpObject=_tmpExpObject;
@property(retain, nonatomic) NSMutableArray *lastExpObject; // @synthesize lastExpObject=_lastExpObject;
@property(retain, nonatomic) NSMutableArray *expObject; // @synthesize expObject=_expObject;
@property(retain, nonatomic) NSString *nodeId; // @synthesize nodeId=_nodeId;
@property(retain, nonatomic) NSString *tab_name; // @synthesize tab_name=_tab_name;
@property(retain, nonatomic) NSString *tab_id; // @synthesize tab_id=_tab_id;
@property(retain, nonatomic) NSDictionary *utdata; // @synthesize utdata=_utdata;
@property(nonatomic) _Bool listenOnAddBlackList; // @synthesize listenOnAddBlackList=_listenOnAddBlackList;
@property(retain, nonatomic) NSMutableArray *starList; // @synthesize starList=_starList;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double hSpace; // @synthesize hSpace=_hSpace;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowlayout; // @synthesize flowlayout=_flowlayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)exposeStatistic;
- (void)reportExpose;
- (void)tryAddToBlackList:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (void)readData;
- (void)_fillPadding;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

