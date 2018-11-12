//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUploadBaseViewController.h"

@class YKEditVideoViewController, YKVideoPickerFlowViewController, YKVideoPickerSorter;

@interface YKVideoPickerController : YKUploadBaseViewController
{
    unsigned long long _filterType;
    YKVideoPickerFlowViewController *_videoFlowController;
    YKEditVideoViewController *_editVideoViewController;
    YKVideoPickerSorter *_videoLoader;
}

@property(retain, nonatomic) YKVideoPickerSorter *videoLoader; // @synthesize videoLoader=_videoLoader;
@property(retain, nonatomic) YKEditVideoViewController *editVideoViewController; // @synthesize editVideoViewController=_editVideoViewController;
@property(retain, nonatomic) YKVideoPickerFlowViewController *videoFlowController; // @synthesize videoFlowController=_videoFlowController;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (void)doBackAction;
- (void)backAction;
- (void)selectVideoWithTask:(id)arg1 source:(long long)arg2;
- (void)addEditVideoViewController;
- (id)URLDecodedString:(id)arg1;
- (void)useCameraRecordNewVideo;
- (void)dealloc;
- (_Bool)isNeedLogin;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

@end
