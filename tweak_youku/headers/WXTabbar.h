//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "WXTabItemViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WXTabbar : WXComponent <WXTabItemViewDelegate>
{
    long long _selectedIndex;
    NSMutableArray *_tabItems;
    NSMutableArray *_tabItemViews;
    double _tabbarHeight;
    NSMutableDictionary *_attrs;
}

@property(retain, nonatomic) NSMutableDictionary *attrs; // @synthesize attrs=_attrs;
@property(nonatomic) double tabbarHeight; // @synthesize tabbarHeight=_tabbarHeight;
@property(retain, nonatomic) NSMutableArray *tabItemViews; // @synthesize tabItemViews=_tabItemViews;
@property(retain, nonatomic) NSMutableArray *tabItems; // @synthesize tabItems=_tabItems;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)update:(id)arg1;
- (void)layoutEmbedView:(long long)arg1;
- (void)changeSelectedIndex:(long long)arg1;
- (void)tabItemView:(id)arg1 didSelectIndex:(long long)arg2;
- (void)buildTabItems:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

