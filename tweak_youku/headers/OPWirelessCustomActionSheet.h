//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, OPPlugin, OPWirelessCustomListTitleView, UIButton, UITableView, UIView;

@interface OPWirelessCustomActionSheet : UIControl <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isActive;
    OPPlugin *_plugin;
    NSString *_actionSheetType;
    id <OPWirelessCustomActionSheetDelegate> _delegate;
    UIView *_contentContainerView;
    UITableView *_tableview;
    OPWirelessCustomListTitleView *_listTitleView;
    UIButton *_cancelButton;
    NSArray *_itemList;
    NSString *_title;
    double _screenW;
    double _screenH;
}

@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) double screenH; // @synthesize screenH=_screenH;
@property(nonatomic) double screenW; // @synthesize screenW=_screenW;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) OPWirelessCustomListTitleView *listTitleView; // @synthesize listTitleView=_listTitleView;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) __weak id <OPWirelessCustomActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *actionSheetType; // @synthesize actionSheetType=_actionSheetType;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onHandleCancelAction:(id)arg1;
- (void)dissmissView;
- (void)showInView:(id)arg1;
- (void)updateList:(id)arg1 andTitle:(id)arg2;
- (void)dealloc;
- (double)calcTableHeight;
- (id)initWithList:(id)arg1 andTitle:(id)arg2 sheetType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

