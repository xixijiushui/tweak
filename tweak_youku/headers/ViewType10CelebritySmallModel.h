//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class ColorTextModel, NSMutableArray, NSString;

@interface ViewType10CelebritySmallModel : ViewTypeBaseModel
{
    NSString *_user_face;
    NSString *_user_name;
    NSString *_star_name;
    NSString *_desc;
    NSString *_aliasHit;
    NSString *_user_id;
    long long _flag;
    NSString *_cats;
    ColorTextModel *_cate_icon;
    NSMutableArray *_tabsList;
    long long _default_index;
    NSString *_h5_url;
    NSString *_big_pic;
}

@property(retain, nonatomic) NSString *big_pic; // @synthesize big_pic=_big_pic;
@property(retain, nonatomic) NSString *h5_url; // @synthesize h5_url=_h5_url;
@property(nonatomic) long long default_index; // @synthesize default_index=_default_index;
@property(retain, nonatomic) NSMutableArray *tabsList; // @synthesize tabsList=_tabsList;
@property(retain, nonatomic) ColorTextModel *cate_icon; // @synthesize cate_icon=_cate_icon;
@property(retain, nonatomic) NSString *cats; // @synthesize cats=_cats;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString *aliasHit; // @synthesize aliasHit=_aliasHit;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *star_name; // @synthesize star_name=_star_name;
@property(retain, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) NSString *user_face; // @synthesize user_face=_user_face;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end
