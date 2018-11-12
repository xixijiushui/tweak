//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTBaseViewController.h"

#import "CAAnimationDelegate.h"
#import "PTIntroTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, PTFullCoverView, PTIntroSubEngine, UITableView, UIView, UIViewController;

@interface PTIntroduceViewController : PTBaseViewController <UITableViewDelegate, UITableViewDataSource, PTIntroTableViewCellDelegate, CAAnimationDelegate>
{
    _Bool _isPushed;
    _Bool _hasSubed;
    UIViewController *_superViewController;
    UITableView *_tableView;
    PTIntroSubEngine *_engine;
    PTFullCoverView *_fullCoverView;
    UIView *_header;
    UIView *_footer;
}

@property(nonatomic) _Bool hasSubed; // @synthesize hasSubed=_hasSubed;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(retain, nonatomic) PTFullCoverView *fullCoverView; // @synthesize fullCoverView=_fullCoverView;
@property(retain, nonatomic) PTIntroSubEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isPushed; // @synthesize isPushed=_isPushed;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateImageView:(id)arg1;
- (void)didClickOnIntroduceCell:(id)arg1 sid:(id)arg2 pid:(id)arg3 index:(long long)arg4;
- (void)login;
- (void)didClickOnIntroduceCellSubscribe:(id)arg1 followed:(_Bool)arg2 finish:(CDUnknownBlockType)arg3;
- (void)didClickOnIntroduceCellHeader:(id)arg1 flag:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (void)loadData;
- (void)loadMore;
- (void)refresh;
- (void)updateLocalRelationShips;
- (void)updateDingyueRelationShips;
- (struct CGRect)fullCoverFrame;
- (void)hanldeNetWorkError:(id)arg1;
- (void)actionWithError:(id)arg1;
- (void)saveRightBtnTitleStatus;
- (void)handleNavigationRightBtn:(id)arg1;
- (id)navigationBar;
- (void)didReceiveMemoryWarning;
- (void)doInit;
- (void)loginNotification:(id)arg1;
- (void)unRegisterLoginNotification;
- (void)registerLoginNotification;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
