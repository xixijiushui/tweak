//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPServiceTask.h"

@class SPMoreSwitchView;

@interface SPMoreTask : SPServiceTask
{
    SPMoreSwitchView *_moreSwitchView;
    double _moduleViewHeight;
}

+ (id)moreTask;
@property(nonatomic) double moduleViewHeight; // @synthesize moduleViewHeight=_moduleViewHeight;
@property(retain, nonatomic) SPMoreSwitchView *moreSwitchView; // @synthesize moreSwitchView=_moreSwitchView;
- (void).cxx_destruct;
- (void)setupModuleView;

@end

