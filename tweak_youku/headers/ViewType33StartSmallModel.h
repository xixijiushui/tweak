//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewType10CelebritySmallModel.h"

@class ColorTextModel, NSArray, NSMutableArray, NSString, StarDetailJumpModel;

@interface ViewType33StartSmallModel : ViewType10CelebritySmallModel
{
    NSString *_btntext;
    NSString *_info;
    NSString *_circle_id;
    NSString *_level;
    NSString *_feature;
    NSArray *_user_desc;
    long long _star_id;
    ColorTextModel *_levelIcon;
    NSMutableArray *_iconsArray;
    StarDetailJumpModel *_jModel;
    NSString *_detail_brief;
}

@property(copy, nonatomic) NSString *detail_brief; // @synthesize detail_brief=_detail_brief;
@property(retain, nonatomic) StarDetailJumpModel *jModel; // @synthesize jModel=_jModel;
@property(retain, nonatomic) NSMutableArray *iconsArray; // @synthesize iconsArray=_iconsArray;
@property(retain, nonatomic) ColorTextModel *levelIcon; // @synthesize levelIcon=_levelIcon;
@property(nonatomic) long long star_id; // @synthesize star_id=_star_id;
@property(copy, nonatomic) NSArray *user_desc; // @synthesize user_desc=_user_desc;
@property(copy, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *circle_id; // @synthesize circle_id=_circle_id;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *btntext; // @synthesize btntext=_btntext;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end
