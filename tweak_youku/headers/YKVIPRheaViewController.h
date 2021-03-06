//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ActivityModel, UIImageView, UIView, YKVIPPacketCloseButton;

@interface YKVIPRheaViewController : UIViewController
{
    UIView *_popView;
    UIImageView *_closeImageView;
    YKVIPPacketCloseButton *_closeButton;
    ActivityModel *_packetInfo;
}

@property(retain, nonatomic) ActivityModel *packetInfo; // @synthesize packetInfo=_packetInfo;
@property(retain, nonatomic) YKVIPPacketCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UIView *popView; // @synthesize popView=_popView;
- (void).cxx_destruct;
- (id)spm;
- (void)expose;
- (void)didReceiveMemoryWarning;
- (void)removeCloseView;
- (void)tapPopViewAction;
- (void)tapCloseAction;
- (void)createTimer;
- (void)createCloseButton;
- (void)createCloseImageView;
- (void)createPopView;
- (void)viewDidLoad;

@end

