//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CALayer, NSArray, NSString, UILabel, UITableView;

@interface OPWatchSheView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <OPWatchSheViewDelegate> _delegate;
    UITableView *_tableView;
    NSString *_title;
    NSArray *_dataSource;
    UILabel *_titleLabel;
    CALayer *_titleLineLayer;
    long long _selectedWatchSheRow;
}

@property(nonatomic) long long selectedWatchSheRow; // @synthesize selectedWatchSheRow=_selectedWatchSheRow;
@property(retain, nonatomic) CALayer *titleLineLayer; // @synthesize titleLineLayer=_titleLineLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <OPWatchSheViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)appendSubViews:(struct CGRect)arg1;
- (void)setSelectedRow:(long long)arg1;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

