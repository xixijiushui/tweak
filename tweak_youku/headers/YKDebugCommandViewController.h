//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YKDebugCommandViewControllerCommandSupport.h"

@interface YKDebugCommandViewController : UIViewController <YKDebugCommandViewControllerCommandSupport>
{
    UIViewController *_commandVC;
}

@property(retain, nonatomic) UIViewController *commandVC; // @synthesize commandVC=_commandVC;
- (void).cxx_destruct;
- (id)debugCommands;
- (id)YKDebugCommandTVCWithCommands:(id)arg1;
- (id)createCommandController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
