//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class YKVIPCMSDolbySliderView;

@interface YKVIPDolbyOPPlugin : OPPlugin
{
    YKVIPCMSDolbySliderView *_dolbySliderView;
}

+ (id)params;
@property(nonatomic) __weak YKVIPCMSDolbySliderView *dolbySliderView; // @synthesize dolbySliderView=_dolbySliderView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end

