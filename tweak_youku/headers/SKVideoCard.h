//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKProgramSubModel, SKVideoView, SokuOutSourceTitle, UILabel, ViewTypeBThreeProgramModel;

@interface SKVideoCard : UIView
{
    SKVideoView *_videoView;
    UILabel *_titlelabel;
    UILabel *_subTitleLabel;
    SokuOutSourceTitle *_outSource;
    SKProgramSubModel *_subModel;
    long long _doc_source;
    long long _showIndex;
    ViewTypeBThreeProgramModel *_superModel;
}

@property(retain, nonatomic) ViewTypeBThreeProgramModel *superModel; // @synthesize superModel=_superModel;
@property(nonatomic) long long showIndex; // @synthesize showIndex=_showIndex;
@property(nonatomic) long long doc_source; // @synthesize doc_source=_doc_source;
@property(retain, nonatomic) SKProgramSubModel *subModel; // @synthesize subModel=_subModel;
@property(retain, nonatomic) SokuOutSourceTitle *outSource; // @synthesize outSource=_outSource;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) SKVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)postNoticeForRecommend;
- (void)cellClicked:(int)arg1;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

