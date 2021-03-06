//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKCateMenuDelegate.h"
#import "SKFilterGroupViewDelegate.h"
#import "SKSelectViewDelegate.h"

@class NSMutableArray, NSString, SKFilterGroupView, SKScrollableCateMenu, SearchFilterModel, UIButton, UIImageView;

@interface VideoSearchFilterView : UIView <SKFilterGroupViewDelegate, SKSelectViewDelegate, SKCateMenuDelegate>
{
    _Bool _filterSwitchOpen;
    id <VideoSearchFilterViewDelegate> _delegate;
    SearchFilterModel *_filterModel;
    UIButton *_filterButton;
    UIImageView *_buttonIcon;
    SKScrollableCateMenu *_cateMenu;
    SKFilterGroupView *_filterGroupView;
    NSMutableArray *_lines;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) SKFilterGroupView *filterGroupView; // @synthesize filterGroupView=_filterGroupView;
@property(retain, nonatomic) SKScrollableCateMenu *cateMenu; // @synthesize cateMenu=_cateMenu;
@property(retain, nonatomic) UIImageView *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(nonatomic) __weak SearchFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(nonatomic) _Bool filterSwitchOpen; // @synthesize filterSwitchOpen=_filterSwitchOpen;
@property(nonatomic) __weak id <VideoSearchFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectedIndexDidChangeFrom:(long long)arg1 to:(long long)arg2 centerX:(float)arg3;
- (void)didSelectAtIndex:(long long)arg1;
- (void)willSelectAtIndex:(long long)arg1;
- (void)dealloc;
- (void)selectView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)filterSelectionChangedOfFilterIndex:(long long)arg1;
- (void)resetSelectionWithoutCateType;
- (void)updateProgress:(double)arg1 toIndex:(long long)arg2;
- (void)setCateIndex:(long long)arg1;
- (long long)currentCateIndex;
- (void)switchButtSelected;
- (float)getFilterViewHeight;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

