//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSquareBViewController.h"

@class YKFSquareCTableViewPresenter, YKFSquareCViewModel;

@interface YKFSquareCViewController : YKFSquareBViewController
{
    YKFSquareCViewModel *_listViewModel;
    YKFSquareCTableViewPresenter *_tableViewPresenter;
    double _lastReloadTime;
}

@property(nonatomic) double lastReloadTime; // @synthesize lastReloadTime=_lastReloadTime;
@property(retain, nonatomic) YKFSquareCTableViewPresenter *tableViewPresenter; // @synthesize tableViewPresenter=_tableViewPresenter;
@property(retain, nonatomic) YKFSquareCViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
- (void).cxx_destruct;
- (id)spmB;
- (id)pageName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

