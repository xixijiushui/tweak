//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "YKSTFeedGuideDelegate.h"

@class NSArray, NSString;

@interface CMSComponentFeedGuide : CMSComponent <YKSTFeedGuideDelegate>
{
    _Bool _showGuideView;
    NSArray *_tags;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) _Bool showGuideView; // @synthesize showGuideView=_showGuideView;
- (void).cxx_destruct;
- (void)reloadView;
- (void)requestInterest;
- (void)guideViewDidClickStartCustom;
- (void)guideViewDidClickCloseBtn;
- (void)componentCard:(id)arg1 reuseView:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 viewForComponentContentAtIndex:(long long)arg2;
- (id)componentCard:(id)arg1 reuseIdentifierForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 viewHeightWithWidth:(double)arg2 forComponentContentAtIndex:(long long)arg3;
- (_Bool)componentCard:(id)arg1 supportCollectionViewForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)hiddenGuideView;
- (void)dealloc;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

