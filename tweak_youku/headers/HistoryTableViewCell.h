//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKTableViewEditCell.h"

@class HistoryPlaylistCoverView, NextVideoButton, PLGPlayLogItem, UIImageView, UILabel, UIView;

@interface HistoryTableViewCell : YKTableViewEditCell
{
    _Bool _isRowZero;
    CDUnknownBlockType _historyNextVideoHandler;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_headerImageView;
    UIImageView *_menberImageView;
    HistoryPlaylistCoverView *_playlistCoverView;
    UIView *_lineView;
    NextVideoButton *_nextVideoButton;
    UILabel *_nextVideoLabel;
    PLGPlayLogItem *_history;
    UIView *_liveView;
    UILabel *_liveLabel;
    UIView *_pointView;
    struct CGSize _tableViewSize;
}

@property(retain, nonatomic) UIView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) PLGPlayLogItem *history; // @synthesize history=_history;
@property(retain, nonatomic) UILabel *nextVideoLabel; // @synthesize nextVideoLabel=_nextVideoLabel;
@property(retain, nonatomic) NextVideoButton *nextVideoButton; // @synthesize nextVideoButton=_nextVideoButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) HistoryPlaylistCoverView *playlistCoverView; // @synthesize playlistCoverView=_playlistCoverView;
@property(retain, nonatomic) UIImageView *menberImageView; // @synthesize menberImageView=_menberImageView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType historyNextVideoHandler; // @synthesize historyNextVideoHandler=_historyNextVideoHandler;
@property(nonatomic) struct CGSize tableViewSize; // @synthesize tableViewSize=_tableViewSize;
@property(nonatomic) _Bool isRowZero; // @synthesize isRowZero=_isRowZero;
- (void).cxx_destruct;
- (void)resetHeaderImage;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)videoNextAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

