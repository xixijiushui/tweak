//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class Card, VideoEpisodeEntertainmentView, VideoEpisodeRichSeriesView, VideoEpisodeSeriesView;

@interface YKDetailEpisodeInfoCell : UICollectionViewCell
{
    _Bool _isCurrentPlay;
    Card *_cardData;
    unsigned long long _listType;
    VideoEpisodeSeriesView *_seriesView;
    VideoEpisodeEntertainmentView *_entertainmentView;
    VideoEpisodeRichSeriesView *_richSeriesView;
}

@property(retain, nonatomic) VideoEpisodeRichSeriesView *richSeriesView; // @synthesize richSeriesView=_richSeriesView;
@property(retain, nonatomic) VideoEpisodeEntertainmentView *entertainmentView; // @synthesize entertainmentView=_entertainmentView;
@property(retain, nonatomic) VideoEpisodeSeriesView *seriesView; // @synthesize seriesView=_seriesView;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(nonatomic) _Bool isCurrentPlay; // @synthesize isCurrentPlay=_isCurrentPlay;
@property(retain, nonatomic) Card *cardData; // @synthesize cardData=_cardData;
- (void).cxx_destruct;
- (void)reload;

@end
