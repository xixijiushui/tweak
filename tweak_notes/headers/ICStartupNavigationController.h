//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "ICStartupControllerDelegate.h"

@class ICDeviceListRequest, ICStartupController, ICStartupMovingViewController, ICStartupViewController;

@interface ICStartupNavigationController : UINavigationController <ICStartupControllerDelegate>
{
    ICStartupViewController *_startupViewController;
    ICStartupMovingViewController *_startupMovingViewController;
    ICStartupController *_startupController;
    CDUnknownBlockType _dismissBlock;
}

+ (id)defaultColorLetterpressedString:(id)arg1 font:(id)arg2;
+ (id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
+ (_Bool)checkIfExtraSmallDeviceFromView:(id)arg1;
+ (id)defaultLabelColor;
+ (void)setColorAndLetterpressForLabel:(id)arg1;
+ (void)setColorAndLetterpressForAllLabelsInView:(id)arg1;
+ (id)allLabelsUnderView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) ICStartupController *startupController; // @synthesize startupController=_startupController;
@property(retain, nonatomic) ICStartupMovingViewController *startupMovingViewController; // @synthesize startupMovingViewController=_startupMovingViewController;
@property(retain, nonatomic) ICStartupViewController *startupViewController; // @synthesize startupViewController=_startupViewController;
- (void).cxx_destruct;
- (void)noUpgradeActionAndDismiss;
- (void)startupMigrationTypeMightHaveChanged;
- (void)startupControllerShouldCloseMovingView;
- (int)getStartupMigrationTypeWithTimeout:(double)arg1;
@property(readonly, nonatomic) ICDeviceListRequest *deviceListRequest;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismiss;
- (void)dismissWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)noUpgradeAction;
- (void)upgradeAction;
- (void)continueAction;
@property(readonly, nonatomic) _Bool isElCapitanAvailable;
@property(readonly, nonatomic) _Bool shouldSwapChoices;
@property(readonly, nonatomic) _Bool hasAnyViewToShow;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithMovingViewOnly:(_Bool)arg1 dismissBlock:(CDUnknownBlockType)arg2;

@end

