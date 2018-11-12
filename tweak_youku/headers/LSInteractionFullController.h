//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LSInteractionController, LSLivePlayerDataManager, NSString, UIButton, UIImageView;

@interface LSInteractionFullController : UIViewController
{
    _Bool _isFull;
    UIImageView *_topbgView;
    NSString *_loadUrl;
    CDUnknownBlockType _backButtonTappedBlock;
    UIButton *_backgroundBtn;
    LSInteractionController *_interactionController;
    LSLivePlayerDataManager *_dataManager;
    struct CGRect _originRect;
}

@property(nonatomic) _Bool isFull; // @synthesize isFull=_isFull;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) __weak LSLivePlayerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) LSInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) UIButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
@property(nonatomic) NSString *loadUrl; // @synthesize loadUrl=_loadUrl;
@property(retain, nonatomic) UIImageView *topbgView; // @synthesize topbgView=_topbgView;
- (void).cxx_destruct;
- (void)BgTouch:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 dataManager:(id)arg2 url:(id)arg3 withFull:(_Bool)arg4;

@end
