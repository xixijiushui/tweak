//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKBaseModel.h"

@class ColorTextModel, NSString, UIImage;

@interface SKSearchTopicModel : SKBaseModel
{
    _Bool _has_tag;
    _Bool _is_spread;
    ColorTextModel *_iconLowerLeft;
    id _json;
    NSString *_title;
    NSString *_subTitle;
    NSString *_tag;
    NSString *_img;
    NSString *_playUrl;
    NSString *_keyword;
    NSString *_cmd;
    long long _orderKind;
    long long _cate;
    long long _cate_id;
    NSString *_btText;
    long long _time_out;
    NSString *_url;
    UIImage *_img_icon;
    NSString *_jumpCmd;
    long long _jumpType;
    NSString *_tid;
    NSString *_vid;
    NSString *_subject_id;
    long long _modelType;
    NSString *_jump_id;
}

+ (id)parseWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *jump_id; // @synthesize jump_id=_jump_id;
@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
@property(copy, nonatomic) NSString *subject_id; // @synthesize subject_id=_subject_id;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSString *jumpCmd; // @synthesize jumpCmd=_jumpCmd;
@property(retain, nonatomic) UIImage *img_icon; // @synthesize img_icon=_img_icon;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool is_spread; // @synthesize is_spread=_is_spread;
@property(nonatomic) long long time_out; // @synthesize time_out=_time_out;
@property(copy, nonatomic) NSString *btText; // @synthesize btText=_btText;
@property(nonatomic) long long cate_id; // @synthesize cate_id=_cate_id;
@property(nonatomic) long long cate; // @synthesize cate=_cate;
@property(nonatomic) long long orderKind; // @synthesize orderKind=_orderKind;
@property(copy, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id json; // @synthesize json=_json;
@property(nonatomic) _Bool has_tag; // @synthesize has_tag=_has_tag;
@property(retain, nonatomic) ColorTextModel *iconLowerLeft; // @synthesize iconLowerLeft=_iconLowerLeft;
- (void).cxx_destruct;
- (void)replacesharp;
- (id)initWithDic:(id)arg1;

@end

