//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "ChannelTrailerMovieListTabCellDelegate.h"

@class ChannelTrailerMovieListCell, NSString, YKChannelList, YKChannelListItem;

@interface CMSComponentTrailerMovieList : CMSComponent <ChannelTrailerMovieListTabCellDelegate>
{
    _Bool _hasMore;
    YKChannelList *_rankList;
    YKChannelListItem *_item;
    ChannelTrailerMovieListCell *_listMovieCell;
    double _high;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) double high; // @synthesize high=_high;
@property(nonatomic) __weak ChannelTrailerMovieListCell *listMovieCell; // @synthesize listMovieCell=_listMovieCell;
@property(retain, nonatomic) YKChannelListItem *item; // @synthesize item=_item;
@property(retain, nonatomic) YKChannelList *rankList; // @synthesize rankList=_rankList;
- (void).cxx_destruct;
- (void)selectVideo:(id)arg1;
- (void)buyTickets:(id)arg1;
- (void)selectedMenuIndex:(long long)arg1;
- (void)channelFilmScrollView:(id)arg1 exposeArray:(id)arg2;
- (id)statisticsModelArrayWithCellArray:(id)arg1 channelFilmScrollView:(id)arg2;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (long long)videoCount;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

