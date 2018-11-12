//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "ChannelMovieCutCellDelegate.h"
#import "ChannelSliderPlayerDelegate.h"

@class ChannelMovieCutCell, ChannelMovieCutHeaderCell, NSArray, NSString;

@interface CMSComponentMovieCut : CMSComponent <ChannelSliderPlayerDelegate, ChannelMovieCutCellDelegate>
{
    _Bool _visable;
    long long _currentIndex;
    ChannelMovieCutHeaderCell *_headerCell;
    ChannelMovieCutCell *_listCell;
    _Bool _hasAddedExposeIndex;
    NSArray *_movieArray;
}

@property(nonatomic) _Bool hasAddedExposeIndex; // @synthesize hasAddedExposeIndex=_hasAddedExposeIndex;
@property(copy, nonatomic) NSArray *movieArray; // @synthesize movieArray=_movieArray;
- (void).cxx_destruct;
- (id)exposeCardVideoArrayWithRange:(struct _NSRange)arg1;
- (void)didClickItemWithIndex:(long long)arg1;
- (void)didExposeRange:(struct _NSRange)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)player:(id)arg1 playError:(int)arg2;
- (void)didFinishPositiveVideoInPlayer:(id)arg1;
- (void)didStartPlayVideoInPlayer:(id)arg1;
- (void)tapPlayer;
- (void)stopPlayer;
- (void)play;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 didEndScrollingVisibleCell:(id)arg2 exposeFromPercent:(long long)arg3 toPercent:(long long)arg4 forComponentContentAtIndex:(long long)arg5;
- (void)componentCard:(id)arg1 pageDidDeactivate:(id)arg2;
- (void)componentCard:(id)arg1 pageDidActivate:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
