//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ActivityView, CALayer, NSArray, NSString, OPClarityOPPOAdView, UILabel, UITableView;

@interface OPClarityView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showOppoAdv;
    id <OPClarityViewDelegate> _delegate;
    UILabel *_titleLabel;
    CALayer *_titleLineLayer;
    UITableView *_tableView;
    NSArray *_dataSource;
    NSString *_title;
    OPClarityOPPOAdView *_oppoAdView;
    double _oppoAdViewHeight;
    ActivityView *_loadingView;
    UILabel *_errorLabel;
}

@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) ActivityView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double oppoAdViewHeight; // @synthesize oppoAdViewHeight=_oppoAdViewHeight;
@property(retain, nonatomic) OPClarityOPPOAdView *oppoAdView; // @synthesize oppoAdView=_oppoAdView;
@property(nonatomic) _Bool showOppoAdv; // @synthesize showOppoAdv=_showOppoAdv;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CALayer *titleLineLayer; // @synthesize titleLineLayer=_titleLineLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <OPClarityViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)appendSubViews;
- (void)closeErrorView;
- (void)showErrorView;
- (void)closeLoadingView;
- (void)showLoadingView;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 showOppoAdv:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

