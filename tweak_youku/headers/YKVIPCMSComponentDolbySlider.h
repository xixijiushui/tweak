//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "YKVIPCMSDolbySliderViewDelegate.h"

@class NSString, UIColor, YKVIPCMSDolbySliderView;

@interface YKVIPCMSComponentDolbySlider : CMSComponent <YKVIPCMSDolbySliderViewDelegate>
{
    double _aspectRatio;
    UIColor *_selectedPageColor;
    YKVIPCMSDolbySliderView *_sliderView;
}

@property(nonatomic) __weak YKVIPCMSDolbySliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) UIColor *selectedPageColor; // @synthesize selectedPageColor=_selectedPageColor;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void).cxx_destruct;
- (void)exposeWithIndex:(long long)arg1;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (long long)isGetPageDataSate;
- (void)sendImageColor;
- (void)sliderView:(id)arg1 didSlideToPageAtIndex:(long long)arg2;
- (void)sliderView:(id)arg1 willRefreshPageAtIndex:(long long)arg2 containerView:(id)arg3 containerIndex:(unsigned long long)arg4;
- (long long)numberOfPagesInSliderView:(id)arg1;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)componentCard:(id)arg1 didEndDisplayingCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)componentCard:(id)arg1 willDisplayCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)componentCard:(id)arg1 pageDidDeactivate:(id)arg2;
- (void)componentCard:(id)arg1 pageDidActivate:(id)arg2;
- (void)componentCard:(id)arg1 superViewDidDisappear:(id)arg2;
- (void)componentCard:(id)arg1 superViewWillAppear:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (double)componentSliderHeight;
- (double)componentRowWidth;
- (double)componentRowHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

