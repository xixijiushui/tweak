//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailComponent.h"

#import "CardVideoViewDelegate.h"
#import "DetailMovieStarTagCellDelegate.h"

@class BoxCardManager, CardList, DetailMovieStarTagCell, NSArray, NSString;

@interface DetailComponentMovieStar : DetailComponent <DetailMovieStarTagCellDelegate, CardVideoViewDelegate>
{
    NSString *_playingVid;
    long long _playingIndex;
    CardList *_cardList;
    NSString *_vid;
    long long _indexOfCurrentVid;
    NSArray *_tagsArray;
    DetailMovieStarTagCell *_tagCell;
    BoxCardManager *_boxCardManager;
}

@property(retain, nonatomic) BoxCardManager *boxCardManager; // @synthesize boxCardManager=_boxCardManager;
@property(nonatomic) __weak DetailMovieStarTagCell *tagCell; // @synthesize tagCell=_tagCell;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(nonatomic) long long indexOfCurrentVid; // @synthesize indexOfCurrentVid=_indexOfCurrentVid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) CardList *cardList; // @synthesize cardList=_cardList;
- (void).cxx_destruct;
- (void)jumpToVideo:(id)arg1;
- (id)playingVid;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)didExposeTagStatistics:(id)arg1;
- (void)didClickTagAtIndex:(int)arg1;
- (void)componentCard:(id)arg1 didSelectCardHeader:(id)arg2;
- (long long)queryPlayingVideoIndex;
- (_Bool)componentCard:(id)arg1 shouldRequestCardsWhenVideoChangedTo:(id)arg2;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)reuseBoxCell:(id)arg1 atIndex:(long long)arg2;
- (id)boxIdentifier;
- (Class)boxClass;
- (double)boxHeight;
- (void)assembleBPList;
- (void)assembleTagData;
- (void)assembleBoxData;
- (void)assembleCardVideo;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (void)setComponentContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

