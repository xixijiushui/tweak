//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface HotFilmCellModel : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _slider;
    int _followed;
    int _blue_mark;
    NSString *_showid;
    NSString *_coverImgUrl;
    NSString *_filmType;
    NSString *_filmTitle;
    NSString *_filmDescription;
    NSString *_filmPublished;
    NSString *_paid;
    NSString *_update_notice;
    NSString *_total_vv;
    NSString *_content_type;
    NSString *_showcategory;
    NSString *_episode_lastappend;
    NSString *_intro;
}

+ (id)factory:(id)arg1;
@property(nonatomic) _Bool slider; // @synthesize slider=_slider;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(retain, nonatomic) NSString *episode_lastappend; // @synthesize episode_lastappend=_episode_lastappend;
@property(retain, nonatomic) NSString *showcategory; // @synthesize showcategory=_showcategory;
@property(retain, nonatomic) NSString *content_type; // @synthesize content_type=_content_type;
@property(retain, nonatomic) NSString *total_vv; // @synthesize total_vv=_total_vv;
@property(retain, nonatomic) NSString *update_notice; // @synthesize update_notice=_update_notice;
@property(retain, nonatomic) NSString *paid; // @synthesize paid=_paid;
@property(retain, nonatomic) NSString *filmPublished; // @synthesize filmPublished=_filmPublished;
@property(retain, nonatomic) NSString *filmDescription; // @synthesize filmDescription=_filmDescription;
@property(retain, nonatomic) NSString *filmTitle; // @synthesize filmTitle=_filmTitle;
@property(retain, nonatomic) NSString *filmType; // @synthesize filmType=_filmType;
@property(retain, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(nonatomic) int blue_mark; // @synthesize blue_mark=_blue_mark;
@property(nonatomic) int followed; // @synthesize followed=_followed;
@property(retain, nonatomic) NSString *showid; // @synthesize showid=_showid;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
