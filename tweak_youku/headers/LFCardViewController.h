//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LFCardViewControllerConfig;

@interface LFCardViewController : UIViewController
{
    LFCardViewControllerConfig *_config;
}

+ (id)cardViewControllerWithConfig:(id)arg1;
@property(readonly, nonatomic) LFCardViewControllerConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)dealloc;
- (id)card;
- (id)cardView;
- (void)closeCardViewController;
- (void)showInViewController:(id)arg1;
- (void)loadingCardInfo;
- (void)viewDidLoad;

@end

