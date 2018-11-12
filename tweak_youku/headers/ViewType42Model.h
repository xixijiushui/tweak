//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSMutableArray, NSNumber, NSString, ViewType26_BottomWithRightArrowModel, ViewType42ShowsModel;

@interface ViewType42Model : ViewTypeBaseModel
{
    _Bool _special_type;
    NSNumber *_user_info_id;
    NSNumber *_flag;
    NSString *_user_name;
    NSString *_area_bottom_title;
    NSString *_area_title;
    NSString *_user_id;
    NSString *_followers_count;
    NSString *_user_face;
    NSString *_level_url;
    NSString *_home_url;
    NSString *_official_resume;
    NSString *_user_brief;
    NSMutableArray *_shows;
    ViewType26_BottomWithRightArrowModel *_footerModel;
    ViewType42ShowsModel *_showsModel;
}

@property(retain, nonatomic) ViewType42ShowsModel *showsModel; // @synthesize showsModel=_showsModel;
@property(retain, nonatomic) ViewType26_BottomWithRightArrowModel *footerModel; // @synthesize footerModel=_footerModel;
@property(retain, nonatomic) NSMutableArray *shows; // @synthesize shows=_shows;
@property(copy, nonatomic) NSString *user_brief; // @synthesize user_brief=_user_brief;
@property(copy, nonatomic) NSString *official_resume; // @synthesize official_resume=_official_resume;
@property(copy, nonatomic) NSString *home_url; // @synthesize home_url=_home_url;
@property(copy, nonatomic) NSString *level_url; // @synthesize level_url=_level_url;
@property(copy, nonatomic) NSString *user_face; // @synthesize user_face=_user_face;
@property(copy, nonatomic) NSString *followers_count; // @synthesize followers_count=_followers_count;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *area_title; // @synthesize area_title=_area_title;
@property(copy, nonatomic) NSString *area_bottom_title; // @synthesize area_bottom_title=_area_bottom_title;
@property(copy, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) NSNumber *flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSNumber *user_info_id; // @synthesize user_info_id=_user_info_id;
@property(nonatomic) _Bool special_type; // @synthesize special_type=_special_type;
- (void).cxx_destruct;
- (void)setGroupNumber:(long long)arg1;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end
