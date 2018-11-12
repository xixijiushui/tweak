//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomeMenuManager, HomeSearchManager, HomeViewController, YKHomeToolModel;

@interface HomeTopViewManager : NSObject
{
    HomeViewController *_homeViewController;
    HomeSearchManager *_searchManager;
    HomeMenuManager *_menuManager;
    YKHomeToolModel *_toolModel;
}

@property(retain, nonatomic) YKHomeToolModel *toolModel; // @synthesize toolModel=_toolModel;
@property(retain, nonatomic) HomeMenuManager *menuManager; // @synthesize menuManager=_menuManager;
@property(retain, nonatomic) HomeSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) __weak HomeViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
- (void).cxx_destruct;
- (void)cmsExposeWithModelArray:(id)arg1;
- (void)channelsExpose;
- (void)channelMenuActionWithSource:(id)arg1;
- (void)asyncSetupToolModel:(CDUnknownBlockType)arg1;
- (void)updateToolModel;
- (void)refreshToolModel:(CDUnknownBlockType)arg1;
- (void)requestToolModel:(CDUnknownBlockType)arg1;
- (void)refreshSearchBarIsRotated:(_Bool)arg1;
- (void)refreshSearchBarFromForeground;
- (void)refreshSearchBarFromRequest;
- (id)pagesManager;
- (struct CGRect)homeVCBounds;
- (_Bool)isHomeViewControllerAppear;
- (_Bool)isSelectionPage;
- (id)selectedPageItem;
- (id)init;

@end

