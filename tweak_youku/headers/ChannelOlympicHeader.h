//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

@class CMSSliderView, NSArray, NSMutableArray, NSString, UIColor;

@interface ChannelOlympicHeader : CMSComponent
{
    _Bool _isDisplayCurve;
    _Bool _isDisplayShadow;
    CMSSliderView *_sliderView;
    double _aspectRatio;
    UIColor *_selectedPageColor;
    NSMutableArray *_pluginConfigs;
    NSArray *_renderInstances;
    UIColor *_adColor;
    long long _sliderViewPreviousPageIndex;
    NSString *_bgimage;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *bgimage; // @synthesize bgimage=_bgimage;
@property(nonatomic) long long sliderViewPreviousPageIndex; // @synthesize sliderViewPreviousPageIndex=_sliderViewPreviousPageIndex;
@property(retain, nonatomic) UIColor *adColor; // @synthesize adColor=_adColor;
@property(retain, nonatomic) NSArray *renderInstances; // @synthesize renderInstances=_renderInstances;
@property(retain, nonatomic) NSMutableArray *pluginConfigs; // @synthesize pluginConfigs=_pluginConfigs;
@property(nonatomic) _Bool isDisplayShadow; // @synthesize isDisplayShadow=_isDisplayShadow;
@property(nonatomic) _Bool isDisplayCurve; // @synthesize isDisplayCurve=_isDisplayCurve;
@property(retain, nonatomic) UIColor *selectedPageColor; // @synthesize selectedPageColor=_selectedPageColor;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) __weak CMSSliderView *sliderView; // @synthesize sliderView=_sliderView;
- (void).cxx_destruct;
- (void)setupRenderInstances;
- (void)setupPluginConfigs;
- (double)componentRowWidth;
- (double)componentRowHeight;
- (void)exposeWithIndex:(long long)arg1;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)sliderView:(id)arg1 didSlideToPageAtIndex:(long long)arg2;
- (void)sendImageColor;
- (void)sliderView:(id)arg1 willRefreshPageAtIndex:(long long)arg2 containerView:(id)arg3 containerIndex:(unsigned long long)arg4;
- (long long)numberOfPagesInSliderView:(id)arg1;
- (void)componentCard:(id)arg1 didEndDisplayingCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)componentCard:(id)arg1 willDisplayCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)setupTheme;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)componentCard:(id)arg1 pageDidDeactivate:(id)arg2;
- (void)componentCard:(id)arg1 pageDidActivate:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (void)dealloc;

@end

