//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTBaseViewController.h"

@class NSArray, SKSubscribeViewController;

@interface YKDYRUBaseViewController : PTBaseViewController
{
    _Bool _isWakeFromHome;
    SKSubscribeViewController *_subscribVC;
    NSArray *_wakeInfo;
}

+ (void)flush;
@property(retain, nonatomic) NSArray *wakeInfo; // @synthesize wakeInfo=_wakeInfo;
@property(nonatomic) _Bool isWakeFromHome; // @synthesize isWakeFromHome=_isWakeFromHome;
@property(nonatomic) __weak SKSubscribeViewController *subscribVC; // @synthesize subscribVC=_subscribVC;
- (void).cxx_destruct;
- (void)updateTableView:(long long)arg1 usingRequestInfo:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

