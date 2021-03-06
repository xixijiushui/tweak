//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYTrackerShowHistoryPlayButton, DYTrackerShowHistorySelectButton, DYTrackerShowTemplate, NSString;

@interface DYTrackerShowHistory : NSObject
{
    _Bool _seen;
    _Bool _valid;
    _Bool _unRead;
    NSString *_hint;
    NSString *_img;
    NSString *_scm;
    NSString *_showId;
    NSString *_subTitle;
    DYTrackerShowTemplate *_trackTemplate;
    NSString *_videoId;
    NSString *_title;
    DYTrackerShowHistoryPlayButton *_playButton;
    DYTrackerShowHistorySelectButton *_selectButton;
    long long _percent;
    NSString *_trackInfo;
}

+ (id)parseJson:(id)arg1;
@property(retain, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) _Bool unRead; // @synthesize unRead=_unRead;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) long long percent; // @synthesize percent=_percent;
@property(retain, nonatomic) DYTrackerShowHistorySelectButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) DYTrackerShowHistoryPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) DYTrackerShowTemplate *trackTemplate; // @synthesize trackTemplate=_trackTemplate;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) _Bool seen; // @synthesize seen=_seen;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
- (void).cxx_destruct;
- (id)init;

@end

