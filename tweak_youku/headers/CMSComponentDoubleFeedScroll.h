//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponentKaleidoSlider.h"

#import "CMSSlicerViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface CMSComponentDoubleFeedScroll : CMSComponentKaleidoSlider <CMSSlicerViewDelegate>
{
    NSMutableArray *_pluginConfigs;
    NSArray *_renderInstances;
}

@property(retain, nonatomic) NSArray *renderInstances; // @synthesize renderInstances=_renderInstances;
@property(retain, nonatomic) NSMutableArray *pluginConfigs; // @synthesize pluginConfigs=_pluginConfigs;
- (void).cxx_destruct;
- (void)exposeWithIndex:(long long)arg1;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)sliderView:(id)arg1 willRefreshPageAtIndex:(long long)arg2 containerView:(id)arg3 containerIndex:(unsigned long long)arg4;
- (long long)numberOfPagesInSliderView:(id)arg1;
- (void)setupPluginConfigs;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentRowHeight;
- (double)componentRowWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
