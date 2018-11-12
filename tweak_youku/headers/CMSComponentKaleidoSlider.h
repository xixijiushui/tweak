//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "CMSComponentContextAdDelegate.h"
#import "CMSSlicerViewDelegate.h"
#import "ChannelSliderPlayerDelegate.h"

@class CMSSliderView, NSArray, NSMutableArray, NSString, UIColor;

@interface CMSComponentKaleidoSlider : CMSComponent <CMSSlicerViewDelegate, CMSComponentContextAdDelegate, ChannelSliderPlayerDelegate>
{
    _Bool _isDisplaying;
    _Bool _isDisplayCurve;
    _Bool _isDisplayShadow;
    _Bool _isSliderPauseByNotification;
    CMSSliderView *_sliderView;
    double _aspectRatio;
    UIColor *_selectedPageColor;
    NSString *_themeTabKey;
    NSMutableArray *_pluginConfigs;
    NSArray *_renderInstances;
    UIColor *_adColor;
    long long _sliderViewPreviousPageIndex;
}

+ (void)initialize;
@property(nonatomic) long long sliderViewPreviousPageIndex; // @synthesize sliderViewPreviousPageIndex=_sliderViewPreviousPageIndex;
@property(retain, nonatomic) UIColor *adColor; // @synthesize adColor=_adColor;
@property(nonatomic) _Bool isSliderPauseByNotification; // @synthesize isSliderPauseByNotification=_isSliderPauseByNotification;
@property(retain, nonatomic) NSArray *renderInstances; // @synthesize renderInstances=_renderInstances;
@property(retain, nonatomic) NSMutableArray *pluginConfigs; // @synthesize pluginConfigs=_pluginConfigs;
@property(retain, nonatomic) NSString *themeTabKey; // @synthesize themeTabKey=_themeTabKey;
@property(nonatomic) _Bool isDisplayShadow; // @synthesize isDisplayShadow=_isDisplayShadow;
@property(nonatomic) _Bool isDisplayCurve; // @synthesize isDisplayCurve=_isDisplayCurve;
@property(retain, nonatomic) UIColor *selectedPageColor; // @synthesize selectedPageColor=_selectedPageColor;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) __weak CMSSliderView *sliderView; // @synthesize sliderView=_sliderView;
- (void).cxx_destruct;
- (void)didBecomeActive:(id)arg1;
- (void)didTouchPlayer:(id)arg1;
- (void)didFinishPositiveVideoInPlayer:(id)arg1;
- (void)player:(id)arg1 playError:(int)arg2;
- (void)didStartPlayVideoInPlayer:(id)arg1;
- (_Bool)isPlaying;
- (void)stopPlayer;
- (void)startPlay:(id)arg1;
- (void)playWithIndex:(long long)arg1;
- (void)exposeWithIndex:(long long)arg1;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)sliderView:(id)arg1 didSlideToPageAtIndex:(long long)arg2;
- (id)cardVideoWithContainerIndex:(unsigned long long)arg1;
- (void)postImageColorChangedNotificationWithColor:(id)arg1 imagePath:(id)arg2;
- (void)sendImageColorWithFromContainerIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 progress:(double)arg3;
- (void)sendImageColor;
- (void)sliderView:(id)arg1 willRefreshPageAtIndex:(long long)arg2 containerView:(id)arg3 containerIndex:(unsigned long long)arg4;
- (void)sliderView:(id)arg1 slideDirection:(unsigned long long)arg2;
- (long long)numberOfPagesInSliderView:(id)arg1;
- (void)componentCard:(id)arg1 didEndDisplayingCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)componentCard:(id)arg1 willDisplayCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)componentCard:(id)arg1 pageDidDeactivate:(id)arg2;
- (void)componentCard:(id)arg1 pageDidActivate:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (void)componentContextDidFinishAdRequest;
- (double)componentRowWidth;
- (void)shouldResumeSlider;
- (void)shouldPauseSlider;
- (double)componentRowHeight;
- (void)setupRenderInstances;
- (void)setupPluginConfigs;
- (void)setupTheme;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

