//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

#import "OPListViewDelegate.h"

@class NSMutableArray, NSString, OPBottomLayoutModel, OPListCollectionView, OPListHeaderView, OPListTableView, OPSubmenuLayoutModel, UICollectionViewFlowLayout;

@interface OPListPlugin : OPPlugin <OPListViewDelegate>
{
    NSString *_groupType;
    _Bool hasList;
    _Bool _canClickPlayCard;
    _Bool _hasSelectedNotPlayingTab;
    _Bool _firstNeedBigRefresh;
    _Bool _secondNeedBigRefresh;
    _Bool _enableExpose;
    UICollectionViewFlowLayout *flowLayout;
    OPListCollectionView *collectionView;
    OPListTableView *tableView;
    OPListHeaderView *headerView;
    OPBottomLayoutModel *_taskForControl;
    OPSubmenuLayoutModel *_taskForSubmenu;
    unsigned long long _currentListStyle;
    NSString *_title;
    long long _selectTab;
    NSMutableArray *_exposedArray;
    NSString *_firstSource;
    NSString *_secondSource;
}

@property(copy, nonatomic) NSString *secondSource; // @synthesize secondSource=_secondSource;
@property(copy, nonatomic) NSString *firstSource; // @synthesize firstSource=_firstSource;
@property(nonatomic) _Bool enableExpose; // @synthesize enableExpose=_enableExpose;
@property(retain, nonatomic) NSMutableArray *exposedArray; // @synthesize exposedArray=_exposedArray;
@property(nonatomic) long long selectTab; // @synthesize selectTab=_selectTab;
@property(nonatomic) _Bool secondNeedBigRefresh; // @synthesize secondNeedBigRefresh=_secondNeedBigRefresh;
@property(nonatomic) _Bool firstNeedBigRefresh; // @synthesize firstNeedBigRefresh=_firstNeedBigRefresh;
@property(nonatomic) _Bool hasSelectedNotPlayingTab; // @synthesize hasSelectedNotPlayingTab=_hasSelectedNotPlayingTab;
@property(nonatomic) _Bool canClickPlayCard; // @synthesize canClickPlayCard=_canClickPlayCard;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long currentListStyle; // @synthesize currentListStyle=_currentListStyle;
@property(retain, nonatomic) OPSubmenuLayoutModel *taskForSubmenu; // @synthesize taskForSubmenu=_taskForSubmenu;
@property(retain, nonatomic) OPBottomLayoutModel *taskForControl; // @synthesize taskForControl=_taskForControl;
@property(nonatomic) _Bool hasList; // @synthesize hasList;
@property(retain, nonatomic) OPListHeaderView *headerView; // @synthesize headerView;
@property(retain, nonatomic) OPListTableView *tableView; // @synthesize tableView;
@property(retain, nonatomic) OPListCollectionView *collectionView; // @synthesize collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout;
- (void).cxx_destruct;
- (void)receiveApplicationDidBecomeActiveNotification:(id)arg1;
- (void)addExposeId:(id)arg1;
- (_Bool)shouldExposeWithExposeId:(id)arg1;
- (_Bool)shouldExposeWithIndex:(long long)arg1;
- (struct CGRect)exposeFrame;
- (void)sendExposeStatisticsWithData:(id)arg1;
- (void)exposeStatistics;
- (void)resetExposeStatistics;
- (void)initExposeStatistics;
- (void)scrollViewStartExposeStatistics;
- (void)listView:(id)arg1 didSelectItemAtIndex:(long long)arg2 shouldPlayVideo:(_Bool)arg3;
- (void)setupListView:(long long)arg1 modelList:(id)arg2 index:(long long)arg3 isFocusCard:(_Bool)arg4;
- (void)setupSubmenuWithTask:(id)arg1 index:(long long)arg2 dataList:(id)arg3 listArray:(id)arg4;
- (void)showSubmenuWithDic:(id)arg1 listArrayDict:(id)arg2;
- (void)submenuAction;
- (void)cardListDidPrepareForDisplay;
- (void)queryListData;
- (void)pluginDidChangeCallBack:(id)arg1;
- (void)playVideoInfoDidPrepare;
- (void)playDidFinishInitConfiguration;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

