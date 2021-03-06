//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface YKFTestHomeViewController : YKFBaseViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate>
{
    NSString *_url;
    UITableView *_tableView;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (_Bool)_shouldHandleSchemeItem:(id)arg1;
- (void)_inputIDAndRouteTo:(id)arg1 title:(id)arg2;
- (id)_createSchemeItems;
- (id)_createSchemeItem:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

