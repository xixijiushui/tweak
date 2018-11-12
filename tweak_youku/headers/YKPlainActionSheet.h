//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ActivityView, NSArray, NSString, UILabel, UITableView, UITapGestureRecognizer;

@interface YKPlainActionSheet : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _showsCancelButton;
    _Bool _showsLoading;
    _Bool _isShown;
    id _userInfo;
    double _maxHeight;
    NSArray *_items;
    NSString *_title;
    long long _sheetStyle;
    id <YKPlainActionSheetDelegate> _delegate;
    UIView *_backgroundView;
    UITableView *_tableView;
    UIView *_headerTitleView;
    UILabel *_titleLabel;
    UIView *_separatorView;
    ActivityView *_activityView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) ActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <YKPlainActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsLoading; // @synthesize showsLoading=_showsLoading;
@property(nonatomic) long long sheetStyle; // @synthesize sheetStyle=_sheetStyle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshView;
- (void)hide;
- (void)show;
- (void)handleTap:(id)arg1;
- (void)hideToBottom;
- (void)presentFromBottom;
- (void)handleStatusBarOrientationChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

