//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FilmSheetFavoriteButton, HotFilmCoverFlowView, NSArray, UILabel;

@interface HotRecommendFilmCell : UITableViewCell
{
    FilmSheetFavoriteButton *_subscribeButton;
    CDUnknownBlockType _recommendFilmSelectBlock;
    HotFilmCoverFlowView *_filmCoverFlow;
    NSArray *_recommendListdMoves;
    UILabel *_filmTitleLabel;
    UILabel *_filmDescriptLabel;
}

@property(retain, nonatomic) UILabel *filmDescriptLabel; // @synthesize filmDescriptLabel=_filmDescriptLabel;
@property(retain, nonatomic) UILabel *filmTitleLabel; // @synthesize filmTitleLabel=_filmTitleLabel;
@property(retain, nonatomic) NSArray *recommendListdMoves; // @synthesize recommendListdMoves=_recommendListdMoves;
@property(retain, nonatomic) HotFilmCoverFlowView *filmCoverFlow; // @synthesize filmCoverFlow=_filmCoverFlow;
@property(copy, nonatomic) CDUnknownBlockType recommendFilmSelectBlock; // @synthesize recommendFilmSelectBlock=_recommendFilmSelectBlock;
@property(retain, nonatomic) FilmSheetFavoriteButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fillCellWithRecommendListOfMoves:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

