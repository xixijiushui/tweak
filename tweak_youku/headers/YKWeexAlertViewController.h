//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKWeexViewController.h"

@class NSTimer;

@interface YKWeexAlertViewController : YKWeexViewController
{
    NSTimer *_slideTimer;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSTimer *slideTimer; // @synthesize slideTimer=_slideTimer;
- (void).cxx_destruct;
- (void)setInstanceCallback;
- (void)didReceiveMemoryWarning;
- (void)removeNotification:(id)arg1;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)dealloc;

@end
