//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKBaseModel.h"

@class ColorTextModel, NSString;

@interface SKSearchCelebrityWorkModel : SKBaseModel
{
    _Bool _showid_valid;
    float _reputation;
    float _douban_reputation;
    NSString *_log_cate;
    long long _source_id;
    NSString *_source_img;
    NSString *_source_name;
    NSString *_publish_time;
    NSString *_thumbUrl;
    NSString *_vthumbUrl;
    NSString *_showId;
    NSString *_stripeBottom;
    NSString *_showName;
    NSString *_summary;
    NSString *_playUrl;
    NSString *_total_vv;
    ColorTextModel *_icon_upper_right;
    ColorTextModel *_icon_upper_left;
    NSString *_subtitle;
}

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) _Bool showid_valid; // @synthesize showid_valid=_showid_valid;
@property(nonatomic) float douban_reputation; // @synthesize douban_reputation=_douban_reputation;
@property(nonatomic) float reputation; // @synthesize reputation=_reputation;
@property(retain, nonatomic) ColorTextModel *icon_upper_left; // @synthesize icon_upper_left=_icon_upper_left;
@property(retain, nonatomic) ColorTextModel *icon_upper_right; // @synthesize icon_upper_right=_icon_upper_right;
@property(retain, nonatomic) NSString *total_vv; // @synthesize total_vv=_total_vv;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *stripeBottom; // @synthesize stripeBottom=_stripeBottom;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *vthumbUrl; // @synthesize vthumbUrl=_vthumbUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *publish_time; // @synthesize publish_time=_publish_time;
@property(retain, nonatomic) NSString *source_name; // @synthesize source_name=_source_name;
@property(retain, nonatomic) NSString *source_img; // @synthesize source_img=_source_img;
@property(nonatomic) long long source_id; // @synthesize source_id=_source_id;
@property(retain, nonatomic) NSString *log_cate; // @synthesize log_cate=_log_cate;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end
