//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class ColorTextModel, NSString;

@interface ViewType1_2UGCModel : ViewTypeBaseModel
{
    _Bool _showid_valid;
    _Bool _nextHasTime;
    NSString *_recall_label;
    NSString *_thumburl;
    NSString *_total_vv;
    NSString *_username;
    ColorTextModel *_source_tag;
    NSString *_publish_time;
    NSString *_duration;
    NSString *_title;
    NSString *_videoid;
    long long _source_id;
    ColorTextModel *_icon_upper_right;
    ColorTextModel *_icon_lower_left;
    NSString *_direct_playurl;
    NSString *_cmd;
    NSString *_desc;
    NSString *_playurl;
    NSString *_source_img;
    NSString *_source_name;
    NSString *_playlistid;
    long long _scg_id;
    NSString *_scg_name;
    NSString *_scg_type;
    NSString *_time;
}

@property(nonatomic) _Bool nextHasTime; // @synthesize nextHasTime=_nextHasTime;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *scg_type; // @synthesize scg_type=_scg_type;
@property(retain, nonatomic) NSString *scg_name; // @synthesize scg_name=_scg_name;
@property(nonatomic) long long scg_id; // @synthesize scg_id=_scg_id;
@property(retain, nonatomic) NSString *playlistid; // @synthesize playlistid=_playlistid;
@property(retain, nonatomic) NSString *source_name; // @synthesize source_name=_source_name;
@property(retain, nonatomic) NSString *source_img; // @synthesize source_img=_source_img;
@property(retain, nonatomic) NSString *playurl; // @synthesize playurl=_playurl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
@property(retain, nonatomic) NSString *direct_playurl; // @synthesize direct_playurl=_direct_playurl;
@property(retain, nonatomic) ColorTextModel *icon_lower_left; // @synthesize icon_lower_left=_icon_lower_left;
@property(retain, nonatomic) ColorTextModel *icon_upper_right; // @synthesize icon_upper_right=_icon_upper_right;
@property(nonatomic) long long source_id; // @synthesize source_id=_source_id;
@property(nonatomic) _Bool showid_valid; // @synthesize showid_valid=_showid_valid;
@property(retain, nonatomic) NSString *videoid; // @synthesize videoid=_videoid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *publish_time; // @synthesize publish_time=_publish_time;
@property(retain, nonatomic) ColorTextModel *source_tag; // @synthesize source_tag=_source_tag;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *total_vv; // @synthesize total_vv=_total_vv;
@property(retain, nonatomic) NSString *thumburl; // @synthesize thumburl=_thumburl;
@property(retain, nonatomic) NSString *recall_label; // @synthesize recall_label=_recall_label;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end
