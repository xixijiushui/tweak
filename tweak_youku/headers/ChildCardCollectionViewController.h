//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface ChildCardCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _isBrand;
    _Bool _isHalf;
    _Bool _isOtherSeriesList;
    NSArray *_showDataList;
    NSString *_headerName;
    NSString *_idd;
    NSString *_name;
    NSString *_serialName;
    long long _serialId;
    NSString *_playShowId;
    NSString *_vvid;
    UICollectionViewFlowLayout *_flowlayout;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowlayout; // @synthesize flowlayout=_flowlayout;
@property(nonatomic) _Bool isOtherSeriesList; // @synthesize isOtherSeriesList=_isOtherSeriesList;
@property(retain, nonatomic) NSString *vvid; // @synthesize vvid=_vvid;
@property(retain, nonatomic) NSString *playShowId; // @synthesize playShowId=_playShowId;
@property(nonatomic) _Bool isHalf; // @synthesize isHalf=_isHalf;
@property(nonatomic) long long serialId; // @synthesize serialId=_serialId;
@property(retain, nonatomic) NSString *serialName; // @synthesize serialName=_serialName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *idd; // @synthesize idd=_idd;
@property(nonatomic) _Bool isBrand; // @synthesize isBrand=_isBrand;
@property(retain) NSString *headerName; // @synthesize headerName=_headerName;
@property(retain) NSArray *showDataList; // @synthesize showDataList=_showDataList;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collecitonViewHeight;
- (double)contentHeight;
- (void)setCollectionViewPos:(double)arg1 positionY:(double)arg2;
- (id)visibleCells;
- (void)setOtherSeiresShowList:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

