//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailEpisodeBaseCollectionCell.h"

@class VideoEpisodeSeriesView;

@interface DetailSeriesCollectionCell : DetailEpisodeBaseCollectionCell
{
    VideoEpisodeSeriesView *_cellView;
}

@property(retain, nonatomic) VideoEpisodeSeriesView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (void)reload;
- (void)setCardData:(id)arg1;
- (void)setupWithCardVideo:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

