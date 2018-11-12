//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class VIPCMSComponentContext, YKVIPCMSOperationView, YKVIPCMSSliderView;

@interface YKVIPCMSSliderCell : UITableViewCell
{
    YKVIPCMSSliderView *_sliderView;
    YKVIPCMSOperationView *_operationView;
    VIPCMSComponentContext *_componentContext;
}

@property(retain, nonatomic) VIPCMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) YKVIPCMSOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) YKVIPCMSSliderView *sliderView; // @synthesize sliderView=_sliderView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupSliderViewWithDelegate:(id)arg1 componentContext:(id)arg2 frame:(struct CGRect)arg3;

@end
