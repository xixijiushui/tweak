//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBaseViewController.h"

@class QRItem, UIView, UIViewController;

@interface QRResultViewController : UIBaseViewController
{
    _Bool _isBeenDismissed;
    UIViewController *_ownerController;
    QRItem *_qrData;
    UIView *_successView;
    UIView *_failedView;
    UIView *_nonSupportedView;
}

@property(retain, nonatomic) UIView *nonSupportedView; // @synthesize nonSupportedView=_nonSupportedView;
@property(nonatomic) _Bool isBeenDismissed; // @synthesize isBeenDismissed=_isBeenDismissed;
@property(retain, nonatomic) UIView *failedView; // @synthesize failedView=_failedView;
@property(retain, nonatomic) UIView *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) QRItem *qrData; // @synthesize qrData=_qrData;
@property(retain, nonatomic) UIViewController *ownerController; // @synthesize ownerController=_ownerController;
- (void).cxx_destruct;
- (void)refreshFavSuccess;
- (void)addFavAction:(id)arg1 withShowId:(id)arg2;
- (void)favAction;
- (void)startDownload;
- (void)downAction;
- (void)playAction;
- (void)cancelAction;
- (void)setFavBtnState;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNonSupportedView;

@end

