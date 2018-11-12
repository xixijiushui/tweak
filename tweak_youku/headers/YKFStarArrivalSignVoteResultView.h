//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIButton, UILabel, UITableView, YKFStarArrivalSignInVoteImageTextViewModel, YKFStarArrivalSignInVoteTitleView;

@interface YKFStarArrivalSignVoteResultView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <YKFStarArrivalShareDelegate> _delegate;
    double _width;
    YKFStarArrivalSignInVoteImageTextViewModel *_voteViewModel;
    YKFStarArrivalSignInVoteTitleView *_titleView;
    UIView *_blackgroundView;
    UIView *_containerView;
    UITableView *_tableView;
    UIButton *_shareButton;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
}

@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *blackgroundView; // @synthesize blackgroundView=_blackgroundView;
@property(retain, nonatomic) YKFStarArrivalSignInVoteTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) YKFStarArrivalSignInVoteImageTextViewModel *voteViewModel; // @synthesize voteViewModel=_voteViewModel;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) __weak id <YKFStarArrivalShareDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)closeReultList;
- (void)shareAction;
- (void)dissReultList;
- (void)refreshTableView;
- (void)showRoteResultListView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
