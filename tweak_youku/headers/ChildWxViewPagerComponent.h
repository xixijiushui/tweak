//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildWxComponent.h"

#import "TYPagerControllerDataSource.h"
#import "TYPagerControllerDelegate.h"

@class NSMutableArray, NSString, TYPagerController, UIScrollView;

@interface ChildWxViewPagerComponent : ChildWxComponent <TYPagerControllerDelegate, TYPagerControllerDataSource>
{
    _Bool _listenOnPageSelected;
    _Bool _isRemovePanGesture;
    _Bool _isScrollEnabled;
    TYPagerController *_pageViewController;
    NSMutableArray *_pageList;
    long long _lastPageIndex;
    long long _currentPageIndex;
    long long _initPageIndex;
    UIScrollView *_scrollView;
}

+ (id)wx_export_method_35;
+ (id)wx_export_method_34;
@property(nonatomic) _Bool isScrollEnabled; // @synthesize isScrollEnabled=_isScrollEnabled;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool isRemovePanGesture; // @synthesize isRemovePanGesture=_isRemovePanGesture;
@property(nonatomic) _Bool listenOnPageSelected; // @synthesize listenOnPageSelected=_listenOnPageSelected;
@property(nonatomic) long long initPageIndex; // @synthesize initPageIndex=_initPageIndex;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) long long lastPageIndex; // @synthesize lastPageIndex=_lastPageIndex;
@property(retain, nonatomic) NSMutableArray *pageList; // @synthesize pageList=_pageList;
@property(retain, nonatomic) TYPagerController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;
- (id)pagerController:(id)arg1 controllerForIndex:(long long)arg2 prefetching:(_Bool)arg3;
- (long long)numberOfControllersInPagerController;
- (void)pagerController:(id)arg1 transitionFromIndex:(long long)arg2 toIndex:(long long)arg3 progress:(double)arg4;
- (void)pagerController:(id)arg1 transitionFromIndex:(long long)arg2 toIndex:(long long)arg3 animated:(_Bool)arg4;
- (void)pagerController:(id)arg1 viewDidAppear:(id)arg2 forIndex:(long long)arg3;
- (void)pagerController:(id)arg1 viewDidDisappear:(id)arg2 forIndex:(long long)arg3;
- (void)getPageIndex:(CDUnknownBlockType)arg1;
- (void)setPageIndex:(unsigned long long)arg1 isSmoothScroll:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateAttributes:(id)arg1;
- (void)didFinishDrawingLayer:(_Bool)arg1;
- (void)layoutDidFinish;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
