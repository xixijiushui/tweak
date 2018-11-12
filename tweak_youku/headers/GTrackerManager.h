//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTAnalytics, NSMutableDictionary, NSMutableSet, NSString;

@interface GTrackerManager : NSObject
{
    GTAnalytics *_analytics;
    CDUnknownBlockType _configBlock;
    CDUnknownBlockType _pageInfoBlock;
    CDUnknownBlockType _updateParamBlock;
    CDUnknownBlockType _collectDataBlock;
    NSMutableSet *_hookedClassSet;
    NSMutableDictionary *_pageExpCache;
    _Bool _clickOpen;
    _Bool _exposureOpen;
    _Bool _appMonitorOpen;
    _Bool _didUpdateControlState;
    NSString *_keyPageName;
    NSMutableDictionary *_moduleConfigDic;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool didUpdateControlState; // @synthesize didUpdateControlState=_didUpdateControlState;
@property(retain, nonatomic) NSMutableDictionary *moduleConfigDic; // @synthesize moduleConfigDic=_moduleConfigDic;
@property(nonatomic) _Bool appMonitorOpen; // @synthesize appMonitorOpen=_appMonitorOpen;
@property(nonatomic) _Bool exposureOpen; // @synthesize exposureOpen=_exposureOpen;
@property(nonatomic) _Bool clickOpen; // @synthesize clickOpen=_clickOpen;
@property(copy, nonatomic) NSString *keyPageName; // @synthesize keyPageName=_keyPageName;
- (void).cxx_destruct;
- (id)configutationWithModuleName:(id)arg1;
- (void)setConfigutation:(id)arg1 withModule:(id)arg2;
- (_Bool)viewIsTracking:(id)arg1;
- (void)setView:(id)arg1 state:(id)arg2;
- (void)bindView:(id)arg1 withArgs:(id)arg2 forState:(id)arg3;
- (void)clearAllSubviewsTrackerTag:(id)arg1 maxLevel:(long long)arg2;
- (void)clearPageTrackerTag:(id)arg1;
- (void)filterSubviews:(id)arg1 level:(long long)arg2;
- (void)clearTrackerTagView:(id)arg1;
- (void)cacheView:(id)arg1 pageName:(id)arg2;
- (void)setTrackerTagView:(id)arg1 viewIndex:(id)arg2 controlName:(id)arg3 moduleName:(id)arg4 param:(id)arg5 userInfo:(id)arg6;
- (void)setTrackerTagView:(id)arg1 moduleName:(id)arg2 param:(id)arg3;
- (void)refreshBlockExposure:(id)arg1;
- (void)refreshPageExposure;
- (id)currentPageName;
- (id)getResponderViewPathWithView:(id)arg1;
- (void)collectClickStatisticWithView:(id)arg1;
- (void)setClickBubbleLevel:(id)arg1 level:(unsigned long long)arg2;
- (void)collectTap:(id)arg1;
- (void)startUIGestureRecognizerHook;
- (void)startUICollectionViewHook;
- (void)startUITableViewHook;
- (void)startUIControlHook;
- (void)startGTracker;
- (void)updateGVTrackerControlState;
- (void)setControlDic:(id)arg1;
- (void)setCollectDataBlock:(CDUnknownBlockType)arg1;
- (void)setUpdateUTParamBlock:(CDUnknownBlockType)arg1;
- (void)setCurrentPageInfoBlock:(CDUnknownBlockType)arg1;
- (void)setConfigBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setTrackerTagView:(id)arg1 viewIndex:(id)arg2 param:(id)arg3 module:(id)arg4;
- (void)setTrackerTagView:(id)arg1 param:(id)arg2 module:(id)arg3 userInfo:(id)arg4;
- (void)setTrackerTagView:(id)arg1 param:(id)arg2 module:(id)arg3;
- (void)setTrackerTagView:(id)arg1 viewIndex:(id)arg2 param:(id)arg3;
- (void)setTrackerTagView:(id)arg1 param:(id)arg2;
- (void)startASControlNodeHook;
- (void)startASCollectionViewHook;
- (void)startASTableViewHook;
- (void)startTextureHook;
- (void)gtHookGTScrollViewDelegate:(id)arg1;
- (void)gtAutoExposure:(id)arg1;

@end

